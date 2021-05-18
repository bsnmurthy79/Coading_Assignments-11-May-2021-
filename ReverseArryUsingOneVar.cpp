       // Reverse Array using RECURSION using single variable in function
// n=5  1 2 3 4 5
//output:  5 4 3 2 1 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

void  revarray(int l,  int a[])
{
    if(l>=n/2)
    {
        return;
    }
     swap(a[l], a[n-l-1]);
    
    revarray(l+1, a);
      
}
int main()
{
     cin>>n;
     int a[n];
     
     for(int i=0;i<n;i++)
        cin>>a[i];
        
     revarray(0, a);
     
     for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
     
     return 0;
}
