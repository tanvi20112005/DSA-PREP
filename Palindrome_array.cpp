#include<iostream>
using namespace std;
void palindrome(int arr[],int n)
{
	int start=0, end=n-1;
	while(start<end)
	{
		if(arr[start]!=arr[end])
		{
		cout<<"Array is not palindrome."<<endl;
		return;
		}
		start++;
		end--;
	}
	cout<<"Array is palindrome."<<endl;
}
int main()
{
	int arr[]={1,2,3,2,1};
	int n= sizeof(arr)/sizeof(arr[0]);
	palindrome(arr,n);
	return 0;
}
