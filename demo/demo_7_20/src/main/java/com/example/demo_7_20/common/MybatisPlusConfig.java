package com.example.demo_7_20.common;

import com.baomidou.mybatisplus.annotation.DbType;
import com.baomidou.mybatisplus.extension.plugins.MybatisPlusInterceptor;
import com.baomidou.mybatisplus.extension.plugins.inner.PaginationInnerInterceptor;
import org.mybatis.spring.annotation.MapperScan;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
//这些import都是自动插入的
/**
 *  mybatis-plus 分页插件
 */
@Configuration
@MapperScan("com.example.demo.mapper")
public class MybatisPlusConfig {

    /**
     * 分页插件
     */
    //public 一个类 再加一个函数，为在这个类中调用函数
    @Bean
    public MybatisPlusInterceptor mybatisPlusInterceptor() {
        MybatisPlusInterceptor interceptor = new MybatisPlusInterceptor();
        interceptor.addInnerInterceptor(new PaginationInnerInterceptor(DbType.MYSQL));
        return interceptor;
    }

}
