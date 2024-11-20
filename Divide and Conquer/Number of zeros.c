#include <stdio.h>
int findfirstzero(int arr[],int low,int high)
{
    if(high>=low)
    {
        int mid=low+(high-low)/2;
        if((mid==0 || arr[mid-1]==1)&&arr[mid]==0)
        {
            return mid;
        }
        if(arr[mid]==1)
        {
            return findfirstzero(arr,mid+1,high);
        }
        return findfirstzero(arr,low,mid-1);
    }
    return -1;
}
int countofzeros(int arr[],int n)
{
    int ans=findfirstzero(arr,0,n-1);
    if(ans==-1)
       return 0;
    return n-ans;
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
	    int result=countofzeros(arr,n);
	    printf("The Number of zeros : %d",result);
}
