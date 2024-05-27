import java.io.*;
import java.util.*;

class ProgCalcolatrice{
    public static void main(String args[]) throws IOException{

        Calcolatrice calc;

        //Variabili
        double num1 = 0.0;
        double num2 = 0.0;

        //Oggetto di input
        Scanner tastiera = new Scanner(System.in);

        //Primo numero 
        System.out.println("\n\t Inserisci il primo numero");
        num1 = tastiera.nextDouble();

        // Secondo numero 
        System.out.println("\n\t Inserisci il secondo numero");
        num2 = tastiera.nextDouble();

        calc = new Calcolatrice(num1, num2);
        
        calc.somma();
        calc.differenza();
        calc.prodotto();
        calc.divisione();

        //Somma
        System.out.println("Riepilogo calcoli: " + calc.toString());
    }
}
       