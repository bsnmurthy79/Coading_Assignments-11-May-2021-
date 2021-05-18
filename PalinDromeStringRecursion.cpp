      // PALINDROME string using RECURSION
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

bool palin(int l, int r, char  *s)
{
     
    if(s[l]!=s[r])
    {
        return 0;
    }
    else if( l>=r)
    {
        return 1;
    }
  
        return palin(l+1, r-1, s);
        
   }
int main()
{
    char s[40];
    cin>>s;
    
    n=strlen(s);
    if(palin(0,n-1, s))
        cout<<"Palindrome"; 
    else
        cout<<"Not a Palindrome";

    return 0;
}
