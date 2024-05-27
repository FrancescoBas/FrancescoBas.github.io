import java.io.*;
import java.util.*;

class ProgCalcolatriceFunzione{
    public static void main(String args[]) throws IOException{

        Calcolatrice calc;
        CalcolatriceFunzione calcFunz;

        //Variabili
        double num1 = 0.0;
        double num2 = 0.0;

        //Oggetto di input
        Scanner tastiera = new Scanner(System.in);

        //Primo numero 
        System.out.println("\n\t Inserisci il primo numero");
        num1 = tastiera.nextDouble();
        num1= num1*num1;

        // Secondo numero 
        System.out.println("\n\t Inserisci il secondo numero");
        num2 = tastiera.nextDouble();
        num2= num2*num2;

        calc = new Calcolatrice(num1, num2);
        calcFunz= new CalcolatriceFunzione(num1, num2);
        
        //Somma
        System.out.println("Riepilogo calcoli: " + calcFunz.toString());
    }
}