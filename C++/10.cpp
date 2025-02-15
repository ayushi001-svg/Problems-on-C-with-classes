//A function calling itself again and again until a ceertain condition is met is known as recursion.
//Recursion performs repetition on the function calls and it stops the execution when the base case becomes true. A base condition should be defined in the recursive function.

//Direct Recursion: When a function calls itself directly then it is known as a direct function.
//Example: void recursion(){
//             recursion();
//         }

//Indirect Recursion: When a function calls itself indirectly fron other function then this type of recursion is called indirect recursion.
//Example: void sub(){
//           recursion();
//         
//         }
//         void recursion(){
//         sub();
//         }
// It provides a simple and clean way to write a code.
//Used in problems like tree traversals, tower of Hanoi.
//It requires more space than iterative prog, also it requires more time because of function calls.

#include<iostream>
using namespace std;

// int fib(int i){
//     if(i<2){
//         return 1;
//}
//         for (int i=0;i<=10;i++);{
//         cout<<i<<endl;
//     }
//     return fib(i-2) + fib(i-1);
// }

// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)

 int factorial(int n){
     if (n<=1){
         return 1;
     }
     return n * factorial(n-1);
 }

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main(){
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
     cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;
    //cout<<"The term in fibonacci sequence at position "<<i<< " is "<<fib(i)<<endl;
    return 0;
}
