package team.sigma.expriencedhall_3_2.login;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import team.sigma.expriencedhall_3_2.R;

public class LoginActivity extends AppCompatActivity {
   EditText et_username;
   EditText et_passwaord;
   private Button btn_login;
    private Button btn_signup2;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login);
        et_username=(EditText) findViewById(R.id.et_username);
        et_passwaord=(EditText) findViewById(R.id.et_password);
        btn_login=(Button) findViewById(R.id.btn_login);
        btn_signup2=(Button) findViewById(R.id.btn_signup2);
        btn_login.setOnClickListener(this::click);
        btn_signup2.setOnClickListener(this::click);
    }
    public void click(View v){
        switch(v.getId()){
            case R.id.btn_login:
                Intent intent =new Intent(LoginActivity.this,MainActivity.class);
                startActivity(intent);
                finish();
                break;
            case R.id.btn_signup2:
                Intent intent2 =new Intent(LoginActivity.this,SignUpActivity.class);
                startActivity(intent2);
                finish();
        }
    }
}