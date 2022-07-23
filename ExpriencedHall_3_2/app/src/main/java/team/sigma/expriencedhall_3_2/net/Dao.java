package team.sigma.expriencedhall_3_2.net;
import android.util.Log;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import team.sigma.expriencedhall_3_2.netbeans.User;

public class Dao {

        private static Connection conn;
        private static PreparedStatement preStmt;
        private static ResultSet rs;

        private String sql2 = "select * from user ";

        public List<User> waveList() throws SQLException {
            List<User> list = new ArrayList<>();
            conn = DBUtils.getConn();
            Log.d("数据库连接返回值", "login: "+conn);
            preStmt = conn.prepareStatement(sql2);
            rs = preStmt.executeQuery();
            while(rs.next()){
                User user = new User();
                user.setUsername(rs.getString(1));
                user.setPassword(rs.getString(2));
                user.setToken(rs.getString(3));
                list.add(user);
            }
            DBUtils.closeConn(conn,preStmt,rs);
            return list;
        }

    }

