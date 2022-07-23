package com.example.my2_11.lsitview;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.ListView;

import com.example.my2_11.R;

public class LsActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_ls);
    ListView lv=(ListView) findViewById(R.id.lv);
lv.setAdapter(new ListAdapter());
    }
}