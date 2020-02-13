using namespace std;
int findMaxSquareWithAllZeros(int** arr, int row, int col){
    
    int **ans=new int*[row];
    for(int i=0;i<row;i++)
        ans[i]=new int[col];
    
    for(int i=0;i<row;i++)
    {
        if(arr[i][0]==0)
            ans[i][0]=1;
        else
            ans[i][0]=0;
            
    }
    for(int i=0;i<col;i++)
    {
        if(arr[0][i]==0)
            ans[0][i]=1;
        else
            ans[0][i]=0;
            
    }
    int max1=0;
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(arr[i][j]==0)
                ans[i][j]=min(ans[i-1][j-1],min(ans[i][j-1], ans[i-1][j]))+1;
            else
                ans[i][j]=0;
            max1=max(ans[i][j],max1);
        }
    }
    
    return max1;
}
