string solve(int n, int x, int y)
{
    if(n==0)
        return NULL;
	string s1="Beerus";
    string s2="Whis";
    int *arr=new int[n+1];
    if(n==1 ||n==x ||n==y)
        return s1;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(i==x||i==y)
            arr[i]=1;
        else if(i>x)
        {
            if(i>y)
            {
                if(arr[i-1]==0 || arr[i-x]==0 || arr[i-y]==0)
                    arr[i]=1;
                else
                    arr[i]=0;
            }
            else
            {
                if(arr[i-1]==0 || arr[i-x]==0)
                    arr[i]=1;
                else
                    arr[i]=0;
                    
            }
        }
        else if(i>y)
        {
            if(arr[i-1]==0 || arr[i-y]==0)
                arr[i]=1;
            else
                arr[i]=0;   
        }
        else
        {
            if(arr[i-1]==1)
                arr[i]=0;
            else
                arr[i]=1;
        }
        

    }
    
    if(arr[n]==1)
        return s1;
    return s2;
}
