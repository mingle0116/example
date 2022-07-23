package com.example.my2_11;

import androidx.appcompat.app.AppCompatActivity;

import android.content.SharedPreferences;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    private EditText et_name;
    private EditText et_keyword;
    private Button btn;
    private CheckBox cb;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        et_name = (EditText) findViewById(R.id.et1);
        et_keyword = (EditText) findViewById(R.id.et2);
        btn = (Button) findViewById(R.id.btn1);
        cb = (CheckBox) findViewById(R.id.cb1);
       SharedPreferences sp= getSharedPreferences("config",MODE_PRIVATE);
       SharedPreferences.Editor edit= sp.edit();
       edit.putString("今天是27号","");

       et_name.setText(sp.getString("name",""));
       et_keyword.setText(sp.getString("pwd",""));


    }

    public void Click(View v) {

        String name = et_name.getText().toString();
        String keyword = et_keyword.getText().toString();
        if (TextUtils.isEmpty(name) || TextUtils.isEmpty(keyword)) {
            System.out.println("name or keyword  is empty");
            Toast.makeText(MainActivity.this, "name and keyword isnt empty", Toast.LENGTH_LONG).show();
        } else {
            System.out.println("linking ,please waiting a minutes");


            if (cb.isChecked()) {
                SharedPreferences sp = getSharedPreferences("config", MODE_PRIVATE);
                SharedPreferences.Editor editor = sp.edit();
                editor.putString("name", name);
                editor.putString("pwd", keyword);
                System.out.println("saved");
                editor.commit();
            } else {
                Toast.makeText(MainActivity.this, "请勾选记住密码", Toast.LENGTH_LONG).show();

            }

        }
    }
}