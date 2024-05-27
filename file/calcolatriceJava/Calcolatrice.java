class Calcolatrice{

    // Attributi
    private double num1;
    private double num2;

    //Costruttore 
    public Calcolatrice(){}

    // Costruttore con parametri 
    public Calcolatrice(double num1, double num2){
        this.num1 = num1;
        this.num2 = num2;
    }

    // Metodi set e get
    //Primo numero
    public void setNum1(double num1){
        this.num1 = num1;
    }

    
    public double getNum1(){
        return this.num1;
    }



    //Secondo numero
    public void setNum2(double num2){
        this.num2 = num2;
    }

    public double getNum2(){
        return this.num2;
    }


    //Somma
    public double somma(){
        return num1+num2;
    }


    //Differenza
    public double differenza(){
        return num1-num2;
    }

    //Prodotto
    public double prodotto(){
        return num1*num2;
    }

    //Divisione
    public double divisione(){
        return num1/num2;
    }

    //Metodo toString
    public String toString() 
	{
        return "Somma: " + somma() + 
        "; \n Differenza: " + differenza() + 
        "; \nProdotto: " + prodotto() + 
        "; \nDivisione: " + divisione();
    }
}