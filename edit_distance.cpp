#include <iostream>
#include <vector>
#include<string>

using namespace std;

int editDistance(string s1, string s2){
    //base case
    if(s1.size()==0 || s2.size()==0)
        return max(s1.size(), s2.size());
    
    
    //recursive call
    if(s1[0]==s2[0])
        return editDistance(s1.substr(1), s2.substr(1));

    int a=editDistance(s1.substr(1), s2);
    int b=editDistance(s1.substr(1), s2.substr(1));
    int c=editDistance(s1, s2.substr(1));
    
    return 1+min(a,min(b,c));
    
}
