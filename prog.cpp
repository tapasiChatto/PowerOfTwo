#include <bits/stdc++.h>
using namespace std;
 
/* Function to check if x is power of 2*/
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    isPowerOfTwo(n)? cout<<"Yes, a power of Two\n": cout<<"No, not a power of Two\n";
    return 0;
}
