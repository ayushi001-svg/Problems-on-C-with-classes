//A pointer is an object that contains the address of another variable. They are a symbolic representation of the address.
//Reference operator: It returns the memory address of its operand i.e, normal variable.
//This can be obtained by preceding the name of a variable with ampersand sign &. 

//Dereference operator: It provides the contents of an object pointed to by a pointer.
//This can be done by preceding the pointer name with deference operator *.

//A pointer is an address that is numeric value therefore we can perform arithmetic operations on a pointer.
//There are 4 types of pointer arithmetic operators ++,--,+,-.
//Each time a pointer is incremented by 1, it points to the memory location of the next element.

// Function pointers are similar except that rather than pointing to variables, they point to functions

//Syntax: int (*function_ptr)(int,int);

//Arrays and pointers are very closely linked to each other. Array and pointers are both objects.
//The name of an array is like a pointer that contains the address of the first element.
//Thus, array name works as a pointer variable.

//In this array the address of a similar type of element is stored.
//in other words an array of pointer stores the pointers which point to similar data types.
//Syntax: data-type *array-name[size]; Example: int *array[3]



#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
}