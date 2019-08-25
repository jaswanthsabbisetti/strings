
#include<bits/stdc++.h>
 
using namespace std;

int main()
{
	string c;
	cin >> c;
	for(int i=0;c[i]!=0;i++)
	{
		c[i] = c[i] & (~32);//this code contains the functions to convert lower or upper case letters to upper case letter
	}
	cout << c << endl;

	
    for(int i=0;c[i]!=0;i++)
	{
		c[i] = c[i] | (32);//this code converts all the characters to lower case irrespective of the case
	}
	cout << c;
	return 0;

}