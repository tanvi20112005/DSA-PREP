#include<iostream>
using namespace std;
void sumofarray(int arr[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	cout<<"Sum of array elements: "<<sum;
}
int main()
{
	int arr[]={2,4,6,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	sumofarray(arr,n);
	return 0;
}
