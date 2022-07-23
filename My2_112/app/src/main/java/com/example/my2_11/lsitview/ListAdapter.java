package com.example.my2_11.lsitview;

import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;

import org.w3c.dom.Text;

public class ListAdapter extends BaseAdapter {
    /**
     * 显示的条数
     *
     * @return
     */
    @Override
    public int getCount() {
        return 0;
    }

    @Override
    public Object getItem(int i) {

        return null;
    }

    @Override
    public long getItemId(int i) {
        return 0;
    }

    @Override
    public View getView(int i, View view, ViewGroup viewGroup) {
        TextView tv=new TextView(view.getContext());

        return null;
    }
}
