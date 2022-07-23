package com.example.enprienced__hall.bean;

public class NetResponse<T> {
    private Integer code;
    private T obj;

    public NetResponse() {
        this.code = 01;
        this.obj = null;
    }

    public Integer getCode() {
        return code;
    }

    public void setCode(Integer code) {
        this.code = code;
    }

    public T getObj() {
        return obj;
    }

    public void setObj(T obj) {
        this.obj = obj;
    }
}
