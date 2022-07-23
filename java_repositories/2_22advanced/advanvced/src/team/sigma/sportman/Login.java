package team.sigma.sportman;

import javax.swing.*;

public  class Login {
    public static void main(String[] args) {
        JFrame window= new JFrame();
        JPanel panel=new JPanel();
        JButton btn=new JButton("登录");
//        btn.addActionListener(new ActionListener() {
//            @Override
//            public void actionPerformed(ActionEvent e) {
//                JOptionPane.showMessageDialog(window,"爱你哦");
//            }
//        });
        btn.addActionListener(e->JOptionPane.showMessageDialog(window,"有额哈哈哈哈哈" +
                "反对犯得上是"));
        window.add(panel);
        panel.add(btn);
        window.setSize(800,800);
        window.setLocationRelativeTo(null);

        window.setVisible(true);
    }
}
