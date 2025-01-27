#include <iostream>
#include <functional>
#include <string>
#include <set>
using namespace std;
class student
{
    public:
    int rno;
    string name;
    // operator overloading
    bool operator < (const student &rhs) // for ascending order
    const{
        return rno<rhs.rno;
    }
    bool operator > (const student &rhs) // for decending order
    const{
        return rno>rhs.rno;
    }
};
int main()
{
    set<int> a{6, 5, 4, 3, 8, 3, 21, 6, 8};  // default ascending order
    set<int, greater<>> b = {20, 30, 10, 60, 40, 80, 50}; // decending order
    set<student,less<>> s={{1,"smith"},{2,"root"},{3,"kane"}};// ascending order(less)
    cout<<"Elements in student class : \n";
    for(auto &i:s)
        cout<<"Rno : "<<i.rno<<") "<<"Name : "<<i.name<<endl;
    
    // operations

    cout<<"a.begin() : "<<*a.begin()<<endl;  // returns iterator. used for sorting ,etc
    cout<<"a.end() : "<<*a.end()<<endl;
    cout<<"a.size() : "<<a.size()<<endl;
    cout<<"a.max_size() : "<<a.max_size()<<endl;
    b.clear();  // clears all element
    cout<<"b.empty() : "<<b.empty()<<endl;
    b.insert(5); // (iterator,value)
    a.erase(21); // (iterator,value)
    cout<<"\nElements in a : ";
    for(int i:a)
        cout<<i<<", ";

    cout<<"\nElements in b : ";
    for(int i:b)
        cout<<i<<", ";

    // cout<<"a.upper_bound() : "<<*a.upper_bound()<<endl;
}

/*

use 'less<>' for ascending order and 'greater<>' for decending order

*/