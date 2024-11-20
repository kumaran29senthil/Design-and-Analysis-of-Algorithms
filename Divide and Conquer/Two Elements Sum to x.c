#include <stdio.h>
void twoSum(int arr[],int low,int high,int x)
{
    int sum=arr[low]+arr[high];
    if(x==sum)
    {
        printf("%d %d",low,high);
        return;
    }
   if(x<sum)
   {
    twoSum(arr, low, high-1, x);
   }
   else
   {
    twoSum(arr, low+1, high, x);
       
   }

    
}
int main()
{
        int n;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    int x;
	    scanf("%d",&x);
	    twoSum(arr,0,n-1,x);
}
