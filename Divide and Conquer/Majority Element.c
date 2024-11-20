#include <stdio.h>
int count(int arr[],int low,int high,int num)
{
    int count=0;
    for(int i=low;i<=high;i++)
    {
        if(arr[i]==num)
        {
            count++;
        }
    }
    return count;
}
int MajorityElement(int arr[],int low,int high)
{
    if(low==high)
    {
        return arr[low];
    }
    int mid=low+(high-low)/2;
    int leftmajor=MajorityElement(arr,low,mid);
    int rightmajor=MajorityElement(arr,mid+1,high);
    if(leftmajor==rightmajor)
    {
        return leftmajor;
    }
    int leftcount=count(arr,low,high,leftmajor);
    int rightcount=count(arr,low,high,rightmajor);
    return (leftcount > rightcount) ? leftmajor : rightmajor ;
    
    
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
	    int result=MajorityElement(arr,0,n-1);
	    printf(" Majority Element : %d",result);
}
