package team.sigma.net;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

/**
 *
 * JDBC的快速入门
 */
public class JDBCDemo {
    public static void main(String[] args) throws Exception {
      Class.forName("com.mysql.cj.jdbc.Driver");
      //String url=("jdbc:mysql://localhost:3306/user?BangChen?useSSL=false&serverTimezone=UTC","root","0116");
        String username="root";
        String password="0116";
        Connection conn =DriverManager.getConnection("url=jdbc:mysql://localhost:3306/user?BangChen?serverTimezone=UTC&useSSL=false","root","0116");
       // String sql="update account set (account ='nihao',password='mima') where id=1";
        Statement stmt= conn.createStatement();
       // int count= stmt.executeUpdate(sql);
        //System.out.println(count);
        stmt.close();
        conn.close();
    }
}
