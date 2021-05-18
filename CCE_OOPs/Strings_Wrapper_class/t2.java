// String Methods
class t2
{
	public static void main(String args[])
	{
		String s="Hello"+"World";
		System.out.println(s);
		//string comcatenation
		String s1 ="four : "+2+2;//each two simply gets concatinated
		String s2= "four : "+(2+2);//sum is four
		System.out.println(s1);	
		System.out.println(s2);
		//String length
		System.out.println(s.length());
		// string upper and lowercase
		System.out.println(s.toLowerCase());	
		System.out.println(s.toUpperCase());	
		//charAt--for random access
		System.out.println(s.charAt(3));	
		//String Replace 
		String s3 ="Mangalore";
		String s4="Mangalore";
		System.out.println(s3==s4);
		System.out.println(s3.equals(s4));
		System.out.println(s3);
		s1=s3.replace('M','B');
		//equals()  and equalsIgnoreCase()  --to match 	the content
		System.out.println(s1==s3);
		System.out.println(s1);
		//compareTo
		s1="computer";
		s2="electronics";
		System.out.println("comparision result "+s1.compareTo(s2));
		 s3 = "mit";
		 s4 = "Mit";
		System.out.println(s3.compareTo(s4.toLowerCase()));
		//Substring 
		s="abcdefgh";
		System.out.println(s.substring(3));
		System.out.println(s.substring(3,5));
		//concat()
		s="manipal";
		System.out.println(s3.concat(s));
		//trim()
		s="  am an  ";
		System.out.println(s);
		System.out.println(s.trim());
		//indexOf()
		System.out.println(s.indexOf('m'));
		System.out.println(s.indexOf('a',3));
		System.out.println(s.indexOf('x'));
		s="manipal";
		//startsWith()  endsWith()
		System.out.println(s.startsWith("man"));
		System.out.println(s.endsWith("man"));
		System.out.println(s.startsWith("pal"));

				

	}	
}