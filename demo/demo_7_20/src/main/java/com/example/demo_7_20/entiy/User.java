package com.example.demo_7_20.entiy;

import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableId;
import com.baomidou.mybatisplus.annotation.TableName;
import lombok.Data;

@TableName("user")
@Data
public class User {
    @TableId(type = IdType.AUTO)
    private Integer id ;
    private String username;
    private String password;
    private String nickName;
    private String address;
    private String sex;
    private Integer age;



}
