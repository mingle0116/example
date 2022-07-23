package team.sigma.io;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class IOStream {
    public static void main(String[] args) throws IOException {

        File file = new File("C:\\Users\\23196\\Desktop\\iostream.txt");
        FileInputStream fis = null;
        try {
            fis = new FileInputStream(file);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            System.out.println("文件为空，文件不存在");
        }
        int ch = 0;
        while ((ch = fis.read()) != -1) {
            System.out.print((char)ch);
        }
        fis.close();
    }
}
