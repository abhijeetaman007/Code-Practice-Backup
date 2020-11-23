// file name: Main.java 

class test_complex { 
	private double re, im;		 

	public test_complex(double re, double im) { 
		this.re = re; 
		this.im = im; 
	} 
} 

// Driver class to test the Complex class 
public class Main { 
	public static void main(String[] args) { 
		test_complex c1 = new Complex(10, 15); 
		System.out.println(c1); 
	} 
} 
