package team.sigma.btn;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import com.example.my2_11.MainActivity;
import com.example.my2_11.R;

public class Activity extends AppCompatActivity {

  private Button btn1,btn2,btn3;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_);
      btn1 =(Button) findViewById(R.id.btn1);
        btn2 =(Button) findViewById(R.id.btn2);
        btn3 =(Button) findViewById(R.id.btn3);
        btn1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                switch (view.getId())
                {
                    case R.id.btn1:
                        Toast.makeText(Activity.this,"你好呀，我是啊年已收到",Toast.LENGTH_LONG).show();
                        break;
                    case R.id.btn2:
                        Toast.makeText(Activity.this,"你好呀，我是啊ddd年已收到",Toast.LENGTH_LONG).show();
                        break;
                    case R.id.btn3:
                        Toast.makeText(Activity.this,"你好呀，我是啊dddddd年已收到",Toast.LENGTH_LONG).show();
                        break;
                }
            }
        });
btn2.setOnClickListener(this::onClick);
btn3.setOnClickListener(this::onClick);
    }

    public void onClick(View v) {

        switch (v.getId())
        {
            case R.id.btn1:
                Toast.makeText(Activity.this,"你好呀，我是啊年已收到",Toast.LENGTH_LONG).show();
                break;
            case R.id.btn2:
                Toast.makeText(Activity.this,"你好呀，我是啊ddd年已收到",Toast.LENGTH_LONG).show();
                break;
            case R.id.btn3:
                Toast.makeText(Activity.this,"你好呀，我是啊dddddd年已收到",Toast.LENGTH_LONG).show();
                break;
        }
    }
}