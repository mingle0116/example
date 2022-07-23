package com.company;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

import java.util.Random;

public class Main extends Application {


    @Override
    public void start(Stage primaryStage) throws Exception {

        GridPane myGridPane= new GridPane();
        Scene scene=new Scene(myGridPane);
        primaryStage.setScene(scene);
        primaryStage.show();
        Button button=new Button("Random");
        TextField text = new TextField();
        myGridPane.add(button,1,0);
        myGridPane.add(text,0,0);
       button.setOnAction(event->{
           int aint = new Random().nextInt();
           String astr= String.valueOf(aint).toString();
           text.setText(astr);

       });
    }
}
