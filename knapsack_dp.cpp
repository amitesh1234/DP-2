int knapsack(int* weights, int* values, int n, int maxWeight){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
  */
    if(n==0 || maxWeight==0)
        return 0;
    int **out=new int*[n+1];
    for(int i=0;i<=n;i++)
        out[i]=new int[maxWeight+1];
    for(int i=0;i<=n;i++)
    {
        out[i][0]=0;
    }
    for(int j=0;j<=maxWeight; j++)
        out[0][j]=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=maxWeight;j++)
        {
            if( weights[i-1]>j)
                out[i][j]=out[i-1][j];
            else
            {
                out[i][j]=max(out[i-1][j], values[i-1]+out[i-1][j-weights[i-1]]);
            }
        }

    }
    
    return out[n][maxWeight];

}
