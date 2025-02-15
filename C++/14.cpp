// A vector is array like container, just like array it uses contiguous memory locations. But unlike array it's size can change dynamically at run time.

// It is not necessary to mention the size of vector while declaring it.

// Syntax : 1) vector <int> v1
//          2) vector <string> v2
//          3) vector <float> v3 where v1,v2,v3 are variable names.

// Member functions of vector
//Modifiers: push_back(), pop_back(), insert(), erase(), swap(), assign(), clear() 
//Iterators: begin(), end()
//Capacity: size(, max_size(), resize(), capacity(), empty()

#include<iostream>
#include<vector>
using namespace std;
// int main()
// {
//     vector<int>n;
//     n.assign(9,1); //Assigning 1 at 9th position 
//     cout<<"The contents are: "<<endl;
//     for (int a=0;a<n.size();a++){
//         cout<<n[a]<< " ";
//         cout<<endl;
//     }
//     n.push_back(10);
//     int no=n.size();
//     cout<<"Last element: "<<n[no-1]<<endl;
//     n.pop_back();
//     cout<<"Now the contents are ";
//     for (int a=0;a<n.size();a++){
//         cout<<n[a]<< " ";
//         cout<<endl;
//     }
//     n.insert(n.begin(), 7);
//     cout<<"First element is: "<<n[0]<<endl;
//     n.clear();
//     cout<<"Now the size is: "<<n.size()<<endl;
//     return 0;
// }

// int main(){
//     vector<int>num;
//     for (int i=1;i<=5;i++){
//          num.push_back(i);
//     }
//     cout<<"Output from the beginning to the end: ";
//     for(auto a=num.begin();a!=num.end();a++)
//         cout<<*a<< " ";
//         return 0 ;
// }

int main(){
    vector<int>v;
    for(int x=1;x<=10;x++){
        v.push_back(x);
    }
    cout<<"Vector size is: "<<v.size()<<endl;
    cout<<"Capacity of vector is: "<<v.capacity()<<endl;
    cout<<"Maximum size of the vector is: "<<v.max_size()<<endl;
    v.resize(5);
    cout<<"Vector size after resizing is: "<<v.size()<<endl;

    if (v.empty()==false){
        cout<<"Vector is not empty "<<endl;
    } else {
        cout<<"Vector is empty "<<endl;
    }
    return 0;
}