#include<iostream>
using namespace std;
int main()
{
    int *p = new int[3]{1,2,3};  // declaration with initialisation of dynamic array
    int *q = new int(10);  // dynamic allocation of a varible
    int *r;  // pointer varible
    r=new int;  // dynamic allocation of the varible
    *r=500;  // asssigning value to the variable
    int*s; // pointer vaiable
    s=new int[3];  // pointer poining to an array in heap
    s[0]=90;  // initialising values
    s[1]=80;
    s[2]=70;
    cout<<"p[1] : "<<p[1]<<endl;
    cout<<"s[2] : "<<s[2]<<endl;
    cout<<"*r : "<<*r<<endl;
    cout<<"*q : "<<*q<<endl;
    // memory should be deallocated or it will be harmful for ram memory
    delete q;
    delete r;
    delete []p;
    delete[] s;
    return 0;
}