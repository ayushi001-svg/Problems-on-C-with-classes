// #include<iostream>
// using namespace std;

// class Franchise{

//    public:
//    void KFC(){
//     cout<<"We have the best food"<<endl;
//    }
//    void Burgerking(){
//     cout<<"We have the best burgers"<<endl;
//    }
// };
// int main()
// {
//     Franchise fran;
//     fran.KFC();
//     fran.Burgerking();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Billboard{
//     private:
//     string title;

//     public:
//     void setTitle(string x){
//         title=x;
//     }
//     string getTitle(){
//         return title;
//     }
// };
// int main()
// {
//     Billboard bill;
//     bill.setTitle("Top 5 songs of 2024");
//     cout<<bill.getTitle();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Billboard{
//     private:
//     string title;

//     public:
//     Billboard(string b){
//         setTitle(b);
//     }
//     void setTitle(string a){
//         title=a;
//     }
//     string getTitle(){
//         return title;
//     }
// };
// int main()
// {
//     Billboard bill("Top 3 songs of 2024");
//     cout<<bill.getTitle();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Gambit
// {
//     public:
//     Gambit(){
//         cout<<"Hello there im in constructor "<<endl;
//     }
//     ~Gambit(){
//         cout<<"Hello there im in destructor "<<endl;
//     }
//     void display(){
//         cout<<"Hello! "<<endl;
//     }
// };
// int main()
// {
//     Gambit gam;
//     gam.display();
//     return 0;
// }

// Why OOPS?
// There were some limitations in earlier approaches to programming
// With oops it is easy to maintain and modify the existing code.
// It increases the reusability as well as the simplicity of the program.

//It is a programming model in which we write programs using classes and objects utilising features of oops.
//Basic concepts of OOPS:
//Classes,Objects,Data abstraction and encapsulation,Inheritance,Polymorphism,Dynamic binding, Message passing.
// follows bottom-up approach, Overloading is possible, have access specifiers, it is more secure.

// Class --> Collection of objects
// Object --> Anything that exists physically in real world
// Inheritance --> Properties of one class can be inherited into others.
// Polymorphism --> Ability to exist in more than one form.
//Abstraction --> Hiding internal details and showing functionality to user.
//Encapsulation --> Binding of code and data together into a single unit.
// Dynamic binding --> Which code will execute is unknown until the program runs.
// Message passing --> Objects communicate with each other by sending and receiving information.

//Benefits of OOP
//Written code can be easily be reused using objects and inheritance.
//Due to the ability to hide certain parts of the program , it helps to build a secure system.
//It is much easier to modify and maintain the program.

// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     string name1="Harley";
// };

// class Child: public Parent
// {
//     public:
//     string name2="David";
// };
// int main()
// {
//     Child ch;
//     cout<< ch.name1 + " " + ch.name2;
//     return 0;
// }

// Procedure-Oriented Programming (POP)
// POP was a conventional programming paradigm where high level languages like: C, COBOL, FORTRAN were used.

// A program was divided into tasks which were grouped into functions (A function is a set of executable statements that performs a specific task).

// To access data from various functions, we were required to make the data global (Global data is accessible from the entire program).

// This led to certain demerits like:

// It became difficult to track which function changed the data.
// If data structure got changed, functions were required to be revised.
// So, this led to another programming paradigm i.e. Object-Oriented Programming.

// Object-Oriented Programming (OOP)
// The main focus was on data, instead of functions.

// To avoid the unnecessary flow of data throughout the program, data is bound to the function using it.

// A program is divided into objects. Each object has some data and functions.

// Advantage: It protects data from accidental changes.

// Class
// A Class is a fundamental unit of OOP.

// It is a user-defined data type. It defines some data/properties and methods/functions.

// Object
// An object is a variable of type Class.

// Examples:

// Class Fruit
// Properties: colour, taste
// Variables: mango, apple, grapes (Objects)
// Class Student
// Properties: name, roll_number
// Method: get_marks()
// Variables of data type 'Student' are objects
// Syntax of declaring a class:

// class ClassName {
//     access_specifier:
//         data_type1 data1;
//         data_type2 data2;
// };
// Syntax of creating an object of a class:

//     ClassName object_name;
//     //OR
//     ClassName *object_name = new ClassName();
// For coding implementation, refer to this.

// Note: By default, objects of a class are private. To access the properties, we need to use public.

// Constructor
// A constructor is used to initialise an object with some values.

// It is a function that is called when an object is created.

// It has the same name as the class name.

// There are 3 types of constructors:

// Default Constructor: no arguments are passed
// Parameterised Constructor: arguments are passed
// Copy Constructor: initialises an object by using an another existing object
// Destructor
// A destructor is a function that is called when an object is deleted.

// Parameters cannot be passed into the destructor.

// delete keyword can be used for object pointer.

// Syntax of creating a destructor:

//     ~ClassName()
// For coding implementation, refer to this.

// Encapsulation
// It is a property of OOPs that ensures binding of methods and variables together into a single unit i.e. Class.

// Data is only accessible from the class methods (getters and setters).

// Encapsulation also leads to data abstraction, that's why a class is called an Abstract Data Type (ADT).

// For coding implementation, refer to this.

// Abstraction
// It is a property of OOPS that enables us to display only essential information while hiding unnecessary/implementation details.

// Example: pow(x, y) -> x^y [how this function works is hidden]

// Inheritance
// It is another property of OOPS where a class inherits properties of another class.

// For 2 classes A and B where A ---> B, Parent/Super Class: It is the class whose properties get inherited.

// Here, A is the parent class.
// Child/Sub Class: It is the class that inherits properties of parent class.

// Here, B is the child class.
// Advantage: It helps in code resuability.

// Access Specifiers
// There are 3 types of Access Specifiers:

// public: Data and functions can be accessed anywhere from the code
// private: Data and functions are accessible only in own class
// protected: Data and functions will are accessible in own class, parent class and derived/child class.
// For coding implementation, refer to this.

// Types of Inheritence:
// There are 5 types of Inheritance:

// Single Inheritence: It is the most basic form of inheritance where a class inherits properties of another class.
// Example: Class A ---> Class B

// For coding implementation, refer to this.

// Multi-level Inheritence: In this type of inheritance, parent class is derived from another class.
// Example: Class A ---> Class B ---> Class C

// For coding implementation, refer to this.

// Multiple Inheritence: In this type of inheritance, a class inherits from multiple classes.
// Example: Class A <--- Class C ---> Class B

// For coding implementation, refer to this.

// Hierarchical Inheritence: In this type of inheritance, one parent class has multiple child classes.
// Example: Class C <---- Class A ---> Class B

// For coding implementation, refer to this.

// Hybrid Inheritence: This type of inheritance is a combination of more than one type of inheritence.
// Example: Class B <--- Class A ---> Class C ---> Class D

// Diamond Problem in Inheritance
// Sometimes, a base class has multiple parent classes having a common ancestor. This is called as Diamond Problem in inheritance.

// For coding implementation, refer to this.

// Polymorphism
// It is the ability of the objects/methods to take different forms.

// There are 2 types of Polymorphism:

// Compile-Time Polymorphism: It is the form to be picked up at compile time.
// It is seen through function or operator overloading:

// (a) Function Overloading: It defines a number of functions with same function name but they perform differently according to the arguments passed (how many, type).

// For coding implementation, refer to this.

// (b) Operator Overloading: It gives a special meaning and functioning to different operators.

// For coding implementation, refer to this.

// Run-Time Polymorphism: It is the form to be picked up at run time.
// It is seen through function overriding:

// Function Overriding: In this, the child class defines a function of parent class.

// For coding implementation, refer to this.

// Virtual Functions
// We use the virtual keyword for function overriding. Such type of functions are called as Virtual Functions.

// Differences between Compile-Time and Run-Time Polymorphism
// Compile-Time Polymorphism	Run-Time Polymorphism
// It occurs at compile-time.	It occurs at run-time.
// It is achieved through function and operator overloading.	It is achieved through function overriding.
// Function names should be same, but parameters can be different.	Function names and parameters should be same.
// It has faster execution time.	It has slower execution time.
// It is more memory efficient.	It it less memory efficient.
// Friend Function
// It is a non-member function which can access private member of a class.

// Syntax:

//     friend F1();
// For coding implementation, refer to this.

