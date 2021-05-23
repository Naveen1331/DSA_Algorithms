#include <iostream>
using namespace std;

 int lrotation(int arr[], int n)
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}
    
int main() {
	
      int arr[] = {10, 20, 20, 30}, n = 4;
       lrotation(arr, n);

       cout<<"After lratation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}
