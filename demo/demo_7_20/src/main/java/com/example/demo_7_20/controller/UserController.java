package com.example.demo_7_20.controller;

import com.baomidou.mybatisplus.core.toolkit.Wrappers;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.example.demo_7_20.common.Result;
import com.example.demo_7_20.entiy.User;
import com.example.demo_7_20.mapper.UserMapper;
import org.mybatis.spring.annotation.MapperScan;
import org.springframework.web.bind.annotation.*;

import javax.annotation.Resource;
import java.sql.Wrapper;

@RestController
@RequestMapping("/user")
@MapperScan("com.example.demo_7_20.mapper")
public class UserController {
  @Resource
    UserMapper userMapper;

  @PostMapping
  public Result<?> add(@RequestBody User user){
    userMapper.insert(user);

    return Result.success();

  }
@GetMapping
  public Result<?> findPage(@RequestParam(defaultValue = "10") Integer pageSize,@RequestParam(defaultValue = "1") Integer currentPage,@RequestParam(defaultValue = "5") String Search){

  Page<User> userPage = userMapper.selectPage(new Page<>(currentPage, pageSize), Wrappers.<User>lambdaQuery().like(User::getUsername, Search));
  return Result.success(userPage);
}

}
