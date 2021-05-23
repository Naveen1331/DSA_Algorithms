#include <iostream>
using namespace std;

 int reverse(int arr[], int n)
{
	int low=0;int high=n-1;
	while(low<high)
	{
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}
    
int main() {
	
      int arr[] = {10, 20, 20, 30}, n = 4;
       reverse(arr, n);

       cout<<"After Rereres"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}
