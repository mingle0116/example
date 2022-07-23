package team.sigma.sportman;

import java.util.Objects;

public  class PingPongMan implements SportMan{
private String name;

    public PingPongMan(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        System.out.println(this.name + "跑的保留快啊ddddd");
    }

    @Override
    public void jump() {
        System.out.println("调高天宫顶顶顶顶顶");
    }

    @Override
    public void shoot() {
        System.out.println("ddddd射得准");
    }

    @Override
    public String toString() {
        return "PingPongMan{" +
                "name='" + name + '\'' +
                '}';
    }
//重写这个方法，objects里面的equals
    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        PingPongMan that = (PingPongMan) o;
        return Objects.equals(name, that.name);
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}
