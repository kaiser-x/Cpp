#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	char a[] = "this is ";
	char b[] = "awesome";
	char c[] = "awegdnfjbn";
	char ch = 'd'; // s
	char *val;
	int d = strcmp(b, c);
	int e = strncmp(b, c, 3);
	cout <<"Comparing b and c char arrays : "<< d << endl;
	cout <<"Comparing 3rd position of b and c char arrays : "<< e << endl;
	 // NOTE : strcmp() gives 0 if strings are equal and 1 if not equal
	// strcat(a, b) ;
	strncat(a, b, 3);  // this is awe (output)
	cout << a << endl;
	strrev(a);
	cout << a << endl;
	val = strrchr(c, ch);//gives remaining string after last 'x' char specified
	cout << "Character after d = " << val << endl;
	char f[] = "good";
	char g[] = "morning";
	strcpy(f,g);
	// strncpy(f,g, 4);  // from c only first 4 characters are copied
	cout << f << endl;
	cout << strlen(f) << endl;


}
