// class add1{
//  //Static class
//  static class X{
//  static String
// str="Inside Class X";
//  }
//  public static void
// main(String args[])
//  {
//  X.str="Inside ClassExample1";

// System.out.println("String stored in str is- "+ X.str);
//  }
// } 

// class add1{
//  int num;
//  //Static class
//  static class X{
//   num=99;
//  static String str="Inside Class X";
//  }
//  public static void
// main(String args[])
//  {
//  add1.X obj =new add1.X();

// System.out.println("Valueof num="+obj.str);
//  }
// }

// class add1{
//  static int num;
//  static String mystr;
//  static{
//  num = 97;
//  mystr = "Static keyword in Java";
//  }
//  public static void
// main(String args[])
//  {

// System.out.println("Value of num="+num);

// System.out.println("Value of mystr="+mystr);
//  }
// } 

// class add1{
//  static int num;
//  static String mystr;
//  int x=10;
//  //First Static block
//  static{

// System.out.println("Static Block 1");
//  num = 68;
//  mystr = "Block1";
//  }
//  //Second static block
//  static{

// System.out.println("Static Block 2");
//  num = 98; 
// }
// public static void main(String[] args) {
// 	System.out.println(num);
// 	// System.out.println(x);

// }
// }

// class add1{
//   int i;
//  static String s;
//  public static void main(String args[]) //Its a Static Method
//  {
//  add1 obj=new add1();
//  //Non Static variables accessed using object obj

// System.out.println("i:"+i);
// System.out.println("s:"+obj.s);
// }
// } 

// class add1{
//  static int num;
//  static String mystr;
//  //First Static block
//  static{

// System.out.println("Static Block 1");
//  num = 68;
//  mystr = "Block1";
//  }
//  //Second static block
//  static{

// System.out.println("Static Block 2");
//  num = 98; 
//   mystr = "Block2";
//  }
//  public static void
// main(String args[])
//  {

// System.out.println("Value of num="+num);

// System.out.println("Value of mystr="+mystr);
//  }
// } 