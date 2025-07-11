#include<iostream>
using namespace std;
void findMaxMin(int arr[0], int n)
{
	int Maxval=arr[0];
	int Minval=arr[0];
	
	for(int i=1; i<n; i++)
	{
		if(arr[i]>Maxval)
		{
			Maxval=arr[i];
		}
		if(arr[i]<Minval)
		{
			Minval=arr[i];
		}
	}
	cout<<"Maximum Value: "<<Maxval<<endl;
	cout<<"Minimum Value: "<<Minval;
}
int main()
{
	int arr[5]={1,3,4,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	findMaxMin(arr, n);
	return 0;
}
