#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a; // we can declare and initialise the array separately
    a={1,2,3,4,5}; // only availabe in stl array
    array<int,5> b={6,7,8,9,10};
    cout<<"at(1) : "<<a.at(1)<<endl; // throws exception if array out of bound
    cout<<"a[2] : "<<a[2]<<endl; // prints the element of given index
    cout<<"a.front(): "<<a.front()<<endl; 
    cout<<"a.back() : "<<a.back()<<endl;
    cout<<"a.size() : "<<a.size()<<endl;
    cout<<"a.max_size() : "<<a.max_size()<<endl;
    return 0;
}