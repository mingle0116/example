package com.example.mypractice2_7;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;


import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

   EditText editText;
  private Button button_call;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        /*设置acitivity ————button 的内容*/
         editText = (EditText) findViewById(R.id.et);
       Button button_call=(Button) findViewById(R.id.btn_11);

      button_call.setOnClickListener(new MyListener());
    }


    private class MyListener implements View.OnClickListener {

        @Override
        public void onClick(View view) {
            String number=editText.getText().toString();
            Intent intent=new Intent();
            intent.setAction(Intent.ACTION_CALL);
            intent.setData(Uri.parse("tel:"+number));
            startActivity(intent);
        }
    }

}