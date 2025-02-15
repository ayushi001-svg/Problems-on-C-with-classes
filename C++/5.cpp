//An array is a collection of data items having similar data types stored in contiguous memory locations
// The array is a collection of adjacent locations, these memory locations are called elements of array 

//syntax: Int array[5]

//1D Array is an array in which data elements are arranged in one dimension only. Syntax: Type array_name[array_size_1]

//2D Array, each element is referred by two indexes, the first index represents the row, and the second represents the column. Syntax: Type array_name[rows][columns] 
//Example: int array[7][7]

//Multidimensional array is an array of arrays, they can have any number of dimensions and it stores the data in the tabular manner.

//Syntax: Type array_name[size 1][size 2].....[size n] 
//Example: int array[5][10][4]

//Array Initialization 
//In C++, array is initialized when it is declared. Curly braces are used to set the values inside it. Example: Int array[6]={2,4,7,8,5,3}
//Other than this u can set the value after the declaration
//Example: Int array[3]; array[0]=5,array[1]=7;array[2]=2;

// #include<iostream>
// using namespace std;

// int main(){
    // 1D Array Example
    //int marks[] = {23, 45, 56, 89};

    // int mathMarks[4];
    // mathMarks[0] = 2278;
    // mathMarks[1] = 738;
    // mathMarks[2] = 378;
    // mathMarks[3] = 578;

    // cout<<"These are math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // // You can change the value of an array
    // mathMarks[2] = 455;
    // cout<<"These are marks"<<endl;
    //  cout<<mathMarks[0]<<endl;
    //  cout<<mathMarks[1]<<endl;
    //  cout<<mathMarks[2]<<endl;
    //  cout<<mathMarks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    //  {
    //      cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //  }
    
    //  int i=0;
    //  while(i<4){
    //      cout<<"Value of marks "<<i<<" is "<<marks[i]<<endl;
    //      i++;
    //  }
    
    //  int i = 0;
    //  do{
    //      cout<<"Value of marks "<<i<<" is "<<marks[i]<<endl;
    //      i++;
    //  }
    //  while(i<4);

    // Quick quiz: do the same using while and do-while loops?

    // 2D Arrays 
//        int arr[3][5];
//        arr[1][3]=76;
//        cout<<arr[1][3]; // If u try to access out of index array value it prints a garbage value.
//        // Example arr[1][2]
//        return 0;
// }


    // Pointers and arrays
    //Pointer arithmetic
    //address new = address current + i * (size of datatype)
    //where address new = (p+i) and address current = p
    
//     int* p = marks;
//     cout<<p++<<endl;
//     cout<<++p<<endl;
//     cout<<"The value of *p is "<<*p<<endl;
//     cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
//     cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
//     cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    
//     return 0;
// }