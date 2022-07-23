package team.mingchen.branch;

public class WhilDemo2 {
    public static void main(String[] args) {
        //珠穆朗玛峰高度： 8848860   纸张厚度：0.1
        double  paperHeight=0.1;
        double mountainHeight=8848860;
        int count=0;
      while(paperHeight<mountainHeight){
          paperHeight*=2;
          count++;

      }
        System.out.println("折叠次数："+count);
        System.out.println("最终纸张的厚度"+paperHeight);
    }
}
/**
 *
 * 不确定循环次数时使用，while来循环
 *
 */