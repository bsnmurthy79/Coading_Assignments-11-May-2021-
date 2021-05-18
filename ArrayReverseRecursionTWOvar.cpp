      // Reverse Array using RECURSION use 2 variables in function
// n=5  1 2 3 4 5
//output:  5 4 3 2 1 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

void  revarray(int l, int r, int a[])
{
    if(l>r)
    {
        return;
    }
    else
    {
        swap(a[l], a[r]);
    }
    revarray(l+1, r-1, a);
      
}
int main()
{
     cin>>n;
     int a[n];
     
     for(int i=0;i<n;i++)
        cin>>a[i];
        
     revarray(0, n-1, a);
     
     for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
     
     return 0;
}
