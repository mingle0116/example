package test;

import org.junit.Assert;

import org.junit.Test;
import team.sigma.calcular.Calculor;



public class Calculortest {
    @Test
   public void testadd(){
        Calculor c=new Calculor();


        int result=c.add(1,2);
        Assert.assertEquals(3,result);


    }
}
