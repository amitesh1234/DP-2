#include <iostream>
using namespace std;
int knapsack(int* weights, int* values, int n, int maxWeight){

    if(n==0)
        return 0;
    if(weights[0]>maxWeight)
        return knapsack(weights+1, values+1, n-1, maxWeight);
    else
    {
        int a=knapsack(weights+1, values+1, n-1, maxWeight);
        int b=knapsack(weights+1, values+1, n-1, maxWeight-weights[0]);
        return max(a,values[0]+b);
    }
}

