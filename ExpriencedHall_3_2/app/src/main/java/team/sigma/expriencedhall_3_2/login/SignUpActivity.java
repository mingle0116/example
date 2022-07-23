package team.sigma.expriencedhall_3_2.login;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import team.sigma.expriencedhall_3_2.R;

public class SignUpActivity<run> extends AppCompatActivity {

  private Button btn_signup;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_sign_up);

        btn_signup=(Button) findViewById(R.id.btn_signup);
        btn_signup.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent= new Intent(SignUpActivity.this,LoginActivity.class);
                startActivity(intent);
                finish();
            }
        });
        Log.i("name","我是匿名内部类");
    }

/**
 * 开启子线程的方法
 *
 */
public void click(){
    new Thread (){
        public void run(){
            Toast.makeText(SignUpActivity.this,"这个是子线程",Toast.LENGTH_LONG).show();

    }}.start();

    }

}