#include<climits>
int mcm(int* p, int n){
    
    int **arr=new int*[n+1];
    for(int i=0;i<=n;i++)
        arr[i]=new int[n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=(i+1);j++)
            arr[i][j]=0;
    }
    
    for(int i=0;i<=n;i++)
    {
        arr[n][i]=0;
    }
    int i=0,j=2;
    int a1=0,b1=2;
    while(true)
    {
        if(j>n)
            break;
        while(true)
        {
            if(j>n)
                break;
            int ans=INT_MAX;
            for(int k=i+1;k<j;k++)
            {
                int ans1=arr[i][k]+arr[k][j]+(p[i]*p[k]*p[j]);
                ans=min(ans,ans1);
            }
            
            arr[i][j]=ans;
            i++;
            j++;
        }
        b1+=1;
        i=a1;
        j=b1;
    }
    return arr[0][n];

}
