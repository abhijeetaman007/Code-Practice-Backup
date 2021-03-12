import java.util.*;
interface company
{
	void sales();
}
class Hardware implements company
{
	Scanner scan=new Scanner(System.in);
	String category;
	String manufacturer;
	Hardware(){
        System.out.print("Enter the category:");
        category=scan.next();
        System.out.print("Enter the manufacturer:");
        manufacturer=scan.next();
    }
    public void sales(){
        System.out.println("Total hardware units sold:100");
    }
}

class Software implements company
{
	Scanner scan=new Scanner(System.in);

    String Type;
    String OS;
    Software(){
        System.out.print("Enter the type:");
        Type=scan.nextLine();
        System.out.print("Enter the operating system:");
        OS=scan.nextLine();
    }
    public void sales(){
        System.out.println("Total software units sold:132");
    }
}

 class ques1
{
	public static void main(String[] args) {
		company m = new Hardware();
        m.sales();
        m=new Software();
        m.sales();
	}
}
