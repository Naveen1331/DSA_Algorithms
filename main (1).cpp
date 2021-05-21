#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
}
int main()
{
    int arr[5],n=4;
    arr[0]=1; 
    arr[1]=3; 
    arr[2]=5; 
    arr[3]=6;
    int x=5;
    cout<<search(arr,n,x);

}