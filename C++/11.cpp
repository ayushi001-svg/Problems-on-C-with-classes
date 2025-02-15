//Memory management can be defined as the process to manage a computer's memory.
//It is required to avoid wastage of memory and to make sure allocation takes place efficiently.
//When we declare an array, sometimess the exact memory is not known to us and that is why we declare an array of max size, which results in memory wastage.
//To avoid such a case, we use memory allocation.

//In C++, unlike Java or Python, allocation or deallocation of memory are done manually.

//Two operators which are used for this work are new and delete operator.

//New operator is used for dynamic memory allocation. It is responsible for creation of the object.
// PointerVariable=new datatype;
// PointerVariable=new datatype[size] (for arrays)

//Delete operator in C++ is used for deallocation of memory or for releasing of memory space. Once the memory is no longer required, then we have to deallocate the memory using the delete operator.
//delete PointerVariable;
//delete[] PointerVariable; (for arrays)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int *ptr1;
//     int *ptr2;
//     int *ptr3;
//     int avg;

//     ptr1= new int;
//     ptr2= new int;
//     ptr3= new int;
//     cout<<"Enter first number "<<endl;
//     cin>>*ptr1;
//     cout<<"Enter second number "<<endl;
//     cin>>*ptr2;
//     cout<<"Enter third number "<<endl;
//     cin>>*ptr3;
//     avg=(*ptr1+*ptr2+*ptr3)/3;
//     cout<<"Average is "<<avg<<endl;
//     delete ptr1;
//     delete ptr2;
//     delete ptr3;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter the size"<<endl;
//     cin>>size;
//     int *ptr;
//     ptr= new int[size];
//     cout<<"Enter the elements"<<endl;
//     for (i=0;i<size;i++)
//     {
//         cout<<"Elements"<<endl;
//         cin>>ptr[i];
//     }
//     cout<<"Elements that you have entered: "<<endl;
//     for(i=0;i<size;i++){
//          cout<<"Element: "<<ptr[i]<<endl;
//     }
//     delete[] ptr;
//     return 0;
// }