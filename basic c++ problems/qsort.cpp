#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
struct student
{
    int rno;
    char name[20];
    int marks;
};
int compareMarks(const void* a,const void *b){
    student *p1=(student*)a;
    student *p2=(student*)b;
    return p2->marks-p1->marks;
    // return strcmp(p1->name,p2->name);
}
int compareInt(const void *a,const void *b)
{
    // converting 'const void' to 'const int' to get the value and sort
    const int *p1=(int*)a;
    const int *p2=(int*)b;
    return *p1-*p2;   // *p2-*p1 for reversing the sort
    // return *(int*)p1 - *(int*)p2;
}
int compareStr(const void *a,const void *b)
{
    return strcmp((char*)a,(char*)b);
}
int main()
{
    // for integers

    int arr[] = {23,5,65,8,9,8,7,5,43,2,556};
    int n = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(int),compareInt);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    //for strings

    char brr[][20]={"sasi","ramesh","rajesh","samar","saaki"};
    int s=sizeof(brr)/sizeof(brr[0]);
    qsort(brr,s,sizeof(char*),compareStr);
    for (int i = 0; i < s; i++)
    {
        cout<<brr[i]<<", ";
    }
    cout<<endl;

    // for structure

    student t[]={{1,"sasi",82},{2,"ramesh",78},{3,"kishan",97}};
    int size=sizeof(t)/sizeof(student);
    qsort(t,size,sizeof(student),compareMarks);
    for (int i = 0; i < size; i++)
    {
        cout<<t[i].rno<<" "<<t[i].name<<" "<<t[i].marks<<endl;
    }
    return 0;
}

// qsort syntax : 

// qsort(array,size of array,size of each element,compare())

// return *(int*)p1 - *(int*)p2;

// (int*) means it is converting the variable ti pointer to an integer
// *() means it is dereferencing the pointer