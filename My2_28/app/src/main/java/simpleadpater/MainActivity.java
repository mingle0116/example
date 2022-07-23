package simpleadpater;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.ListView;
import android.widget.SimpleAdapter;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import team.sigma.my2_28.R;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main3);
        List<Map<String,String>> data=new ArrayList<Map<String,String>>();

        Map<String,String> map1=new HashMap<String,String>();
        map1.put("name","张菲菲");
        map1.put("phone","1565652");
        Map<String,String> map2=new HashMap<String,String>();
        map2.put("name","胡亮");
        map2.put("phone","6656565");
        Map<String,String> map3=new HashMap<String,String>();
        map3.put("name","胡啥");
        map3.put("phone","6656565");
        Map<String,String> map4=new HashMap<String,String>();
        map4.put("name","胡分段函数");
        map4.put("phone","6656565");
        Map<String,String> map5=new HashMap<String,String>();
        map5.put("name","胡化工吧");
        map5.put("phone","6656565");

        data.add(map1);
        data.add(map2);
        data.add(map3);
        data.add(map4);
        data.add(map5);
        SimpleAdapter adapter =new SimpleAdapter(this,data,R.layout.item,new String[]{"name","phone"},new int[]{R.id.tv1,R.id.tv2});
   ListView lv=(ListView) findViewById(R.id.lv);
   lv.setAdapter(adapter);

    }
}