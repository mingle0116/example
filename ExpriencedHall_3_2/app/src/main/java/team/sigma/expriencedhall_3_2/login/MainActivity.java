package team.sigma.expriencedhall_3_2.login;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.view.View;
import android.widget.TextView;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.URL;

import okhttp3.OkHttpClient;
import team.sigma.expriencedhall_3_2.R;

public class MainActivity extends AppCompatActivity {
    private TextView tv;
    private Handler handler =new Handler(){
        public void handleMessage(android.os.Message msg){
            if(msg==null){
                tv.setText("null");
            }
            else{
                String str=msg.toString();
                tv.setText(str);
            }


        }
    };
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
          tv=(TextView) findViewById(R.id.tv_net);
    }
    public void send (View v){
        new Thread(new Runnable() {
            HttpURLConnection conn= null;
            BufferedReader reader=null;
            @Override
            public void run() {
                String url="http://127.0.0.1:8080/api/test";
                try {
                    URL url1 =new URL(url);
                    conn= (HttpURLConnection) url1.openConnection();
                    conn.setRequestMethod("GET");
                    conn.setConnectTimeout(5000);
                    conn.setReadTimeout(5000);
                    InputStream in = conn.getInputStream();
                    reader= new  BufferedReader(new InputStreamReader(in));
                    StringBuilder builder=new StringBuilder();
                    String line;

                    while((line=reader.readLine())!=null){
                      builder.append(line);
                    }
                    System.out.println(builder.toString());
                    Message msg=handler.obtainMessage();
                    msg.obj=builder.toString();
                    handler.sendMessage(msg);
                } catch (MalformedURLException e) {
                    e.printStackTrace();
                } catch (ProtocolException e) {
                    e.printStackTrace();
                } catch (IOException e) {
                    e.printStackTrace();
                }finally {
                    if(reader ==null){
                        try {
                            reader.close();
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    }
                    if(conn==null){
                        conn.disconnect();
                    }
                }
            }
        }).start();
    }
}