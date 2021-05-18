interface X
{
   public void myMethod();
}
interface Y
{
   public void myMethod();
}
class interface_multiple_inherit implements X, Y
{
   public void myMethod()
   {
       System.out.println("Implementing more than one interfaces");
   }
   public static void main(String args[]){
	   interface_multiple_inherit obj = new interface_multiple_inherit();
	   obj.myMethod();
   }
}