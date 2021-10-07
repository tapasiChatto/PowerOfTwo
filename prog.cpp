#include <bits/stdc++.h>
using namespace std;
 
/* Function to check if x is power of 2*/
bool isPowerOfTwo(int n)
{
    if((n & (n-1))==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    isPowerOfTwo(n)? cout<<"Yes, a power of Two\n": cout<<"No, not a power of Two\n";
    return 0;
}
