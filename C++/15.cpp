// STL= Standard template library
// It is a set of template classes that provides many basic algorithms and containers.
// It contains 4 components: Containers,Iterators,Algorithms,Function objects.
// Container are objects that are used to store data of similar type. 
// Further containers are of three types: 1) Sequence -->Vector,Deque,List.
//     2) Associative -->Set,Multiset,Map,Multimap.
//     3) Container adapters -->Stack,Queue.

//  Iterators helps in traversing through elements. It traverses from one element to next element in range by incrementing.

// Algorithms are procedures that are applied to containers. It provides some operations for the content of the container. Ex --> Sorting , Searching etc.

// A function object is an object of template class that implements the call operator.
// operator()
// It contains the definition of operator() function.



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     for(int i=1;i<=10;i++){
//         v.push_back(i);
//     }
//     cout<<"Vector size is: "<<v.size()<<endl;
//     v.resize(5);
//     cout<<"Vector size after resizing is: "<<v.size()<<endl;

//     if (v.empty()==false){
//         cout<<"Vector is not empty "<<endl;
//     } else {
//         cout<<"Vector is empty "<<endl;
//     }
//     cout<<"Elements of vector "<<endl;;
//     for(auto it=v.begin(); it!=v.end();it++){
//         cout<<*it<< " " <<endl;
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<iterator>
// using namespace std;
// int main()
// {
//     vector<int> ar={1,2,3,4,5};
//     vector<int>::iterator ptr;
//     cout<<"The elements of vector are: "<<endl;
//     for(ptr=ar.begin(); ptr< ar.end(); ptr++){
//         cout<<*ptr<<" "<<endl;;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=7;
//     int j=10;
    
//     cout<<"Value of i: "<<i<<endl;
//     cout<<"Value of j: "<<j<<endl;

//     swap(i,j);

//     cout<<"After swapping i: "<<i<<endl;
//     cout<<"After swapping j: "<<j<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

class fuunctionObj{
    public:
    int operator()(int x, int y){
        return x*y;
    }
};

int main(){
    fuunctionObj fo;
    int product = fo(5,8);
    cout<<"Product of x and y is: "<<product<<endl;
    return 0;
}