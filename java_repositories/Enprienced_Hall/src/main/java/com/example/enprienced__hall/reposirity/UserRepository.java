package com.example.enprienced__hall.reposirity;

import com.example.enprienced__hall.bean.User;
import org.springframework.data.jpa.repository.JpaRepository;



public interface UserRepository extends JpaRepository<User,Integer> {

}
