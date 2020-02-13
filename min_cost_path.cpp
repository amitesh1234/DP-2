#include <iostream>
#include <vector>
#include <climits>
using namespace std;


    

int minCostPath(int **input, int m, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int **arr=new int*[m];
    for(int i=0;i<m;i++)
        arr[i]=new int[n];
    
    
    arr[m-1][n-1]=input[m-1][n-1];
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(i==m-1 && j==n-1)
                continue;
            else if(i==m-1)
            {
                arr[i][j]=input[i][j]+arr[i][j+1];
            }
            else if(j==n-1)
            {
                arr[i][j]=input[i][j]+arr[i+1][j];
            }
            else
            {
                arr[i][j]=input[i][j]+min(arr[i][j+1], min(arr[i+1][j+1], arr[i+1][j]));
            }
        }
    }
    int out=arr[0][0];
    delete [] arr;
    return out;
    
}
