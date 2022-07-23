package com.example.mypractice2_7;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity3 extends AppCompatActivity implements View.OnClickListener {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main3);
        Button btn1= (Button) findViewById(R.id.btn11);
        Button btn2= (Button) findViewById(R.id.btn12);
        Button btn3= (Button) findViewById(R.id.btn13);
        btn1.setOnClickListener(this);
        btn2.setOnClickListener(this);
        btn3.setOnClickListener(this);

    }

    @Override
    public void onClick(View view) {
        switch(view.getId()){
            case R.id.btn11:
                System.out.println("安逸建议1");
                break;
            case R.id.btn12:
                System.out.println("2你好傻250，不是520");
                break;
            case R.id.btn13:
                System.out.println("中奖了123");
                break;
            default:
                break;

        }
    }
}