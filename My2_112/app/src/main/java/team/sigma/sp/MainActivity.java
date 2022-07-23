package team.sigma.sp;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import com.example.my2_11.R;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.util.Map;
import java.util.Set;

public class MainActivity extends AppCompatActivity {
  
    private EditText et2;
    private EditText et;
    private Button btn;
    private CheckBox cb;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
        btn = (Button) findViewById(R.id.btn1);
        cb = (CheckBox) findViewById(R.id.cb1);
        et = (EditText) findViewById(R.id.et1);
        et2 = (EditText) findViewById(R.id.et2);



    }

    public void Click2(View view) {
        Toast.makeText(MainActivity.this,"恭喜你登陆成功",Toast.LENGTH_LONG).show();
        if(cb.isChecked()){
            SharedPreferences sp =getSharedPreferences("KEY",MODE_PRIVATE);
            SharedPreferences.Editor edit=sp.edit();
            edit.putString("sentence","今天好累");
            edit.putString("word","惊天");
            edit.commit();
            Toast.makeText(this,"saving",Toast.LENGTH_LONG).show();
        }

    }
}