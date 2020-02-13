#include<iostream>
#include<cstring>
using namespace std;

int editDistance(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
    int **arr=new int *[s1.size()+1];
    
    for(int i=0;i<=s1.size();i++)
        arr[i]=new int[s2.size()+1];
    
    
    for(int i=0;i<=s1.size();i++)
        arr[i][0]=i;
    for(int i=0;i<=s2.size();i++)
        arr[0][i]=i;
    
    for(int i=1;i<=s1.size();i++)
    {
        for(int j=1;j<=s2.size();j++)
        {
            if(s1[s1.size()-i]==s2[s2.size()-j])
                arr[i][j]=arr[i-1][j-1];
            else
                arr[i][j]=1+min(arr[i][j-1], min(arr[i-1][j-1],arr[i-1][j]));
        }
    }
    return arr[s1.size()][s2.size()];

}
