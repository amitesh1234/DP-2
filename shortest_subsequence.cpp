#include<climits>
int solve(string S,string V)
{
    int m=S.size();
    int n=V.size();
    int **arr=new int*[m+1];
    for(int i=0;i<=m;i++)
        arr[i]=new int[n+1];
    
    for(int i=0;i<=m;i++)
        arr[i][0]=1;
    for(int i=0;i<=n;i++)
        arr[0][i]=1000;
    
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            //cout<<S[i-1]<<" "<<V[j-1]<<endl;
            char ch = S[i-1]; 
            int k; 
            for (k = j-1; k >= 0; k--) 
                if (V[k] == ch) 
                    break; 
  
            // char not present in T 
            if (k == -1) 
                arr[i][j] = 1; 
            else
               arr[i][j] = min(arr[i-1][j], arr[i-1][k] + 1); 
        }
    }
    /*for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }*/
    int min1=arr[m][n];
    delete [] arr;
    return min1;
    
}
