/* superclass Person */
class Person 
{ 
	Person(int x) 
	{ 
		System.out.println("Person class Constructor "+x); 
	} 
} 

/* subclass Student extending the Person class */
class Student extends Person 
{ 
	Student() 
	{ 
		// invoke or call parent class constructor 
		super(200); 

		System.out.println("Student class Constructor"); 
	} 
} 

/* Driver program to test*/
class super_constructor 
{ 
	public static void main(String[] args) 
	{ 
		Student s = new Student(); 
	} 
} 
