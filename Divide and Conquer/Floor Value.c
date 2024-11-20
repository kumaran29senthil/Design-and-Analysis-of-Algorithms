#include <stdio.h>
int floorvalue(int arr[],int low,int high,int x)
{
    int mid=low+(high-low)/2;
    if(arr[mid]==x)
        return arr[mid];
    if(arr[mid]<x){
        if(mid+1>high || arr[mid+1]>x){
            return arr[mid];
        }
        return floorvalue(arr,mid+1,high,x);
    }
    return floorvalue(arr,low,mid-1,x);
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
	    int result=floorvalue(arr,0,n-1,x);
	    printf("Floor Value : %d",result);
}
