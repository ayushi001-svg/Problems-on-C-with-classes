// Function are blocks of code that are designed to perform a specific task

//Built-in function are also called pre-defined functions or library functions, and these functions are already defined in C++
//These functions are placed in the header files of C++ ex. <cmath><string>

//User-defined functions are those funs that are created by users according to their requirement.
//For example: void club(){
//              }
//             int main(){
//                club();
//              }

//In Call by Value method, the copies of original values are passed directly to the function. Changes done to the parameters inside the function do not affect the arguments

//Syntax: void function(n1,n2){//some code} int main(){function(val1,val2); more statements}

// Example
// void swapit(int x, int y){
//     int temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int x=120;
//     int y=150;
//     swapit(x,y);
//     cout<<"X's value: "<<x;
//     cout<<"Y's value: "<<y;
//     return 0;
// }

//Call by Reference method, the address of the variable is passed in the function. Any change inside the function is reflected outside the function as well.
// Syntax:
// void function(int &a){
//     a=20;
// }
// int main(){
//     int num=200;
//     function(num);
//     cout<<num;
// }

//Example
// void swapit(int &x, int &y){
//     int temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int m=120;
//     int n=150;
//     swapit(m,n);
//     cout<<"M's value: "<<m;
//     cout<<"N's value: "<<n;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }

// // This will not swap a and b
// void swap(int a, int b){ //temp a b
//     int temp = a;        //4   4  5   
//     a = b;               //4   5  5
//     b = temp;            //4   5  4 
// }

// // Call by reference using pointers
// void swapPointer(int* a, int* b){ //temp a b
//     int temp = *a;          //4   4  5   
//     *a = *b;               //4   5  5
//     *b = temp;            //4   5  4 
// }

// // Call by reference using C++ reference Variables
// // int & 
// void swapReferenceVar(int &a, int &b){ //temp a b
//     int temp = a;          //4   4  5   
//     a = b;               //4   5  5
//     b = temp;            //4   5  4 
//     // return a;
// }

// int main(){
//     int x =4, y=5;
//     // cout<<"The sum of 4 and 5 is "<<sum(a, b);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     // swap(x, y); // This will not swap a and b
//     // swapPointer(&x, &y); //This will swap a and b using pointer reference
//     swapReferenceVar(x, y); //This will swap a and b using reference variables
//     // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void sal_Change(int s){
// s=32000;
// cout<<"Salary inside function = "<<s<<endl;
// }
// int main()
// {
//     int sal=27000;
//     sal_Change(sal);
//     cout<<"Salary inside main = "<<sal<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sum(int x, int y){
//     int z;
//     z=x+y;
//     return z;
// }
// int main()
// {
//     int s;
//     s=sum(5,8);
//     cout<<s<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int max(int n1, int n2){
//     if (n1>n2){
//         cout<<"n1 is greater "<<n1<<endl;
//     } else {
//         cout<<"n2 is greater "<<n2<<endl;
//     }
// }
// int main()
// {   
//     int n1;
//     int n2;
//     cout<<"Enter n1 "<<endl;
//     cin>>n1;
//     cout<<"Enter n2 "<<endl;
//     cin>>n2;
//     max(n1,n2);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void PrintName(string name){
//     cout<<"Hey "<<name<<endl;
// }
// int main()
// {
//     string name;
//     cout<<"Enter your name: ";
//     cin>>name;
//     PrintName(name);
//     return 0;
// }