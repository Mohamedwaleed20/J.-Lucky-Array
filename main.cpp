#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long  n  ;
   cin >> n   ;
    long long arr[n];
    for(long long i = 0 ; i < n ;i++)
    {
         cin >> arr[i] ;
    }
    long long mn = arr[0];
    long long f = 0 ;
    for(long long i = 0 ; i < n ;i++)
    {
        if(mn>arr[i])
        {
            mn = arr[i];
        }
    }
    for(long long i = 0 ; i < n ;i++)
    {
        if(mn==arr[i])
        {
            f++;
        }
    }
    if(f%2!=0)
    {
        cout << "Lucky" ;
    }
    else
    {
        cout << "Unlucky" ;
    }

    return 0;
}
