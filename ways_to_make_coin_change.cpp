
int countWaysToMakeChange(int denominations[], int numDenominations, int value){

  int **arr=new int*[numDenominations+1];
    for(int i=0;i<=numDenominations;i++)
    {
        arr[i]=new int[value+1];
    }
    for(int i=1;i<=numDenominations;i++)
        arr[i][0]=1;
    for(int j=0;j<=value;j++)
        arr[0][j]=0;
    for(int i=1;i<=numDenominations;i++)
    {
        for(int j=1;j<=value;j++)
        {
            if(j-denominations[i-1]<0)
                arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=arr[i][j-denominations[i-1]]+arr[i-1][j];
        }
    }
    /*for(int i=0;i<=numDenominations;i++)
    {
        for(int j=0;j<=value;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return arr[numDenominations][value];
}
