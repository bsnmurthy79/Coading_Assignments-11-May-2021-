        //  Binary Search using Recursion
/*   n=5 
  1 2 3 4 5
Key =1

output: 0 index */ 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

int binsearch(int l, int h, int key, int a[])
{
    int mid=(l+h)/2;
    if(l>h)
    {
        return -1;
    }
    if(a[mid]==key)
    {
        return mid;
    }
    if (a[mid]>key)
    {
        return binsearch(l, mid-1, key, a);
    }
    else
    {
        return binsearch(mid+1,h,key,  a);
    }
     
}

 int main()
{
    cin>>n;
    int a[n], key;
    
    for(int i=0;i<n;i++ )
        cin>>a[i];
        
    cin>>key;
    
    cout<<binsearch(0, n-1,key, a);
 
     return 0;
}
