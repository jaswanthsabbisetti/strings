//Toggling the case of letters using XOR Operation with 5 th bit which has value of 32
//Lower case and upper case are differentiated by this bit;
#include<bits/stdc++.h>
using namespace std;
int main()
{
 string a;
 cin >> a;
 for(int i=0;a[i]!='\0';i++)
	a[i] ^= 32;  //equivalent to toggling the 5th bit
 cout << a;
}