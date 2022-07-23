package arrayadapterdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import team.sigma.my2_28.R;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
        String objects [] ={"a","d","f","dddd"};
        ArrayAdapter<String> adapter=new ArrayAdapter<>(this,R.layout.item2,objects);
        ListView lv=(ListView) findViewById(R.id.lv2);
        lv.setAdapter(adapter);
    }
}