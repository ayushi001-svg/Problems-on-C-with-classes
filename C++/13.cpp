//What is operator overloading?
// It is a specific case of polymorphism in which the operator s overloaded to provide special meaning to the user-defined datatype
// General syntax: returnType operator symbol (arguments)

//Non-Overloadable operators
// . -> dot operator
// :: -> scope resolution operator
// .* -> pointer to member operator
// ?: -> ternary operator

// An operator which contains only one operand is known as unary operator overloading.
// Syntax: friend return_type operator symbol(argument);

// An operator which contains two operands is known as Binary operator overloading.
//Syntax (class function): return_type operator symbol (argument);
//Syntax (friend function):
// friend return_type operator symbol (argument 1,argument 2);


//Unary Operator Overloading...

// #include<iostream>
// using namespace std;

// class Increase{
//     private:
//     int value;
//     public:
//     Increase(){
//         value=10;
//     }
//     void operator ++(int){    // or ++() when ++Inc is written in main function.
//         value=value+5;
//     }
//     void display(){
//         cout<<"Value is: "<<value<<endl;
//     }
// };

// int main()
// {
//     Increase Inc;
//     Inc++;         // or ++Inc;
//     Inc.display();
//     return 0;
// }

// Binary Operator Overloading...

#include<iostream>
using namespace std;

class Complex{
private:
int real;
int img;

public:
void input(){
    cout<<"Enter real and imaginary parts respectively: "<<endl;
    cin>>real;
    cin>>img;
}
Complex operator + (Complex obj){
    Complex temp;
    temp.real=real+obj.real;
    temp.img=img+obj.img;
    return temp;
}
void output(){
    cout<<"Output is: "<<real<<" + "<<img<<" i "<<endl;
}
};
int main()
{
    Complex com1, com2, res;

    cout<<"Enter first complex number i.e\n ";
    com1.input();
    cout<<"Enter second complex number i.e\n ";
    com2.input();

    res=com1+com2;
    res.output();
    return 0;
}