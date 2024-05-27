
class CalcolatriceFunzione extends Calcolatrice {



	//Costruttore
	public CalcolatriceFunzione(){}

	//Costruttore con parametri
	public CalcolatriceFunzione(double num1, double num2){
		super(num1, num2);
	}

	//Differenza
    public double differenza(){
    	double num1 = getNum1(); 
        double num2 = getNum2();
        
    	if(num1>=num2){
    		return num1-num2;
    	}
    	else{
    		return num2-num1;
    	}
        
    }


	//Metodo toString
    public String toString() 
	{
        return "Somma: " + somma() + 
        "; \n Differenza: " + differenza();
    }


}