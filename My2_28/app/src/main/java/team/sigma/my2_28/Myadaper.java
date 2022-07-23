package team.sigma.my2_28;

import static android.content.Context.LAYOUT_INFLATER_SERVICE;

import static androidx.core.content.ContextCompat.getSystemService;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;

import org.w3c.dom.Text;

class Myadapter extends BaseAdapter {
    Context context;

    public Myadapter(Context context) {
        this.context = context;
    }

    @Override
    public int getCount() {
        return 14442424;
    }

    @Override
    public Object getItem(int i) {
        return null;
    }

    @Override
    public long getItemId(int i) {
        return 0;
    }


    public View getView(int i, View view, ViewGroup viewGroup) {
        View v;
        if (view ==null){
            //第一种写法
            //v= View.inflate(context,R.layout.item,null);
            //第二种写法，调用inflate
           // v= LayoutInflater.from(context).inflate(R.layout.item,null);
            //第三种写法

            LayoutInflater inflater= (LayoutInflater) context.getSystemService(LAYOUT_INFLATER_SERVICE);
           v=inflater.inflate(R.layout.item,null);
           TextView tv=v.findViewById(R.id.tv1);
           tv.setText("woxiugaide "+i);
        }else{
           v=view;
        }

        return v;
    }


}
