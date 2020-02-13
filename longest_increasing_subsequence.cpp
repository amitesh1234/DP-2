using namespace std;

 int lis(int arr[], int n) {
		
				
	/*Write your code here. 
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/
     if(n==0)
         return 0;
     int *out=new int[n];
     out[n-1]=1;
     
     for(int i=n-2;i>=0;i--)
     {
         out[i]=1;
         for(int j=i-1;j<n;j++)
         {
             if(arr[j]>arr[i])
             {
                 int max=out[j]+1;
                 if(max>out[i])
                     out[i]=max;
             }
         }
     }
     int best=out[0];
     for(int i=1;i<n;i++)
     {
         if(best<out[i])
             best=out[i];
     }
     
     delete [] out;
     return best;

 }
