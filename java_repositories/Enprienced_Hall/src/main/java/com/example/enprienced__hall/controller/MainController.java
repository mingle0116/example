package com.example.enprienced__hall.controller;

import com.example.enprienced__hall.bean.NetResponse;
import com.example.enprienced__hall.bean.User;
import com.example.enprienced__hall.reposirity.UserRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.*;

import javax.annotation.Generated;
import javax.annotation.PostConstruct;

@Controller
public class MainController {
    @Autowired
    private UserRepository userRepository;
    @GetMapping("/api/test")
    @ResponseBody
    public String getTest(){ return "your are looking the website";}
   @GetMapping("api/getUserTest")
   @ResponseBody
    public User getUser(){return userRepository.findAll().get(0);}
    //登陆接口
    @PostMapping(value="/api/user/loginWithPassword")
    @ResponseBody
    public NetResponse<User> loginWithPassword(@RequestParam("username") String username,@RequestParam("password")String password){
        NetResponse<User> response =new NetResponse<>();

       for(User user :userRepository.findAll()){
           if(user.getUsername().equals(username)&&user.getPassword().equals(password)){
               response.setCode(200);
               response.setObj(user);
              break;
           }
       }
       return response;
    }
    //注册代码
    @PostMapping(value="/api/user/register")
    @ResponseBody
    public Integer regsiter(@RequestParam("username")String username,
                        @RequestParam("password")String password,
                        @RequestParam("token")String token){
       NetResponse<User> response= new NetResponse<>();
        for(User user:userRepository.findAll()){
            if(user.getUsername().equals(username)){
                response.setCode(203);
                return response.getCode();
            }
        }
        NetResponse<User> respones3=new NetResponse<>();
        User user =new User();
        user.setUsername(username);
        user.setPassword(password);
        user.setToken(token);
        User saveUser=userRepository.save(user);
        respones3.setCode(200);
        respones3.setObj(saveUser);
        return respones3.getCode();
    }
}
