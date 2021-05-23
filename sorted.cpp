#include <iostream>
using namespace std;

int isSorted(int arr[], int n)
{

	for(int i = 0; i < n; i++)
	{
		if(arr[i] < arr[i-1])
			return false;
	}
	return true;

} 

    
int main() {
	
       int arr[] = {3, 8, 12, 5, 6}, n = 5;
       printf("%s", isSorted(arr,n)? "true":"false");
    
}
