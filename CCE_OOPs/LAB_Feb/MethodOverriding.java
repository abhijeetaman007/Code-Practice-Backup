class Super {
   void sample(int a, double b) {
      System.out.println("Method of the Super class");
   }
   protected void test()
   {
      System.out.println("Inside Test of Super Class");
   }
}
public class MethodOverriding extends Super  {
   void sample(int a, int b) {
      System.out.println("Method of the Sub class");
   }

   // void test()
   // {
      // System.out.println("Inside Test of Sub Class");
   // }


   public static void main(String args[]) {
      MethodOverriding obj = new MethodOverriding();
      // Super ob=new MethodOverriding();
      // obj.sample(20, 20);
      // obj.sample(20, 20.0);
      // ob.sample(20,20);
      obj.test();
   }
}