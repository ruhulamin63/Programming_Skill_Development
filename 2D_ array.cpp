#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,cnt=0;
	int arr[6][6];
	
	for(int i=1;i<=6;i++)
	{
		for(int j=1; j<=6; j++)
		{
			arr[i][j]=0;
		}
	}
	
	char s[1000];
	cout<<"Enter of string name: ";
		cin>>s;	
		
	for(int i=1;i<=6;i++)
	{
		for(int j=1; j<=6; j++)
		{
			printf("%d\t",s[cnt++]);
		}
		cout <<endl;
	}
	
	for(int i=1;i<=6;i++)
	{
		for(int j=1; j<=6; j++)
		{
			arr[i][j]=s[cnt];
		}
	}
	
	return 0;
}	
