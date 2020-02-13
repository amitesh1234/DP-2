int getMaxMoney(int arr[], int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return arr[0];
    if(n==2)
        return std::max(arr[0],arr[1]);
    int *out =new int[n];
    out[0]=arr[0];
    out[1]=std::max(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        out[i]=std::max(out[i-1], out[i-2]+arr[i]);
    }
    return out[n-1];
}
