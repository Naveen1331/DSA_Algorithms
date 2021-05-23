#include <iostream>
using namespace std;

int getlargest(int arr[], int n)
{
	int res=0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] > arr[res])
			res=i;
	}
	return res;

} 

    
int main() {
	
       int arr[] = {3, 8, 12, 5, 6}, n = 5;
       cout<<getlargest(arr,n);
       //printf("%s", getlargest(arr,n)? "res");
    
}
