#include<cmath>
int helper(int x, int n, int num, int *arr)
{
    if(x==0)
        return 1;
    if(x<0)
        return 0;
    if(arr[x]!=-1)
        return arr[x];
    int sum=0;
    for(int i=num+1;i<=(x/2+1);i++)
    {
        int temp=pow(i,n);
        if(temp>x)
            break;
        sum+=helper(x-temp, n, i,arr);
    }
    arr[x]=sum;
    return arr[x];
    
}


int allWays(int x, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int *arr=new int[x+1];
    for(int i=0;i<=x;i++)
        arr[i]=-1;
    arr[0]=0;
    int ans= helper(x,n,0,arr);
    
    return ans;
    
    
}
