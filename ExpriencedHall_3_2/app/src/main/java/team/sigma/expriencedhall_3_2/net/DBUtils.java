package team.sigma.expriencedhall_3_2.net;

import android.util.Log;

import java.sql.*;
public class DBUtils {
    private static String driver = "com.mysql.jdbc.Driver";//驱动
    private static Connection conn;

    public static Connection getConn(){
        try {
            Class.forName(driver);
            Log.d("数据库连接", "getConn: 数据库驱动加载成功");

            String url = "jdbc:mysql://localhost:3306/user?useUnicode=true&characterEncoding=utf-8&useSSL=false";
            String user = "root";
            String password = "0116";

            conn = DriverManager.getConnection(url,user,password);
            Log.d("数据库连接", "getConn: 数据库连接成功");
        } catch (ClassNotFoundException | SQLException e) {
            e.printStackTrace();
            Log.d("数据库连接", "getConn: 数据库连接失败");
            return  null;
        }
        return conn;
    }

    public static void closeConn(Connection conn, PreparedStatement preStmt, ResultSet rs){
        if(rs!=null){
            try {
                rs.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
        if(preStmt!=null){
            try {
                preStmt.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
        if(conn!=null){
            try {
                rs.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }

}
