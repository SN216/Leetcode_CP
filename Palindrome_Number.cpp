#include<bits/stdc++.h>
#define fo(type,i,k,n) for(type i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define MOD 1000000007
using namespace std;
bool solve(int x) {
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        if (reversed == x)
        {
            cout << "true";
            return true;
        }
        else
        {
            cout << "false";
            return false;
        }
    }
int main()
{
    int x;
    cin>>x;
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE 
    // freopen("input.txt", "r", stdin); 
    // #endif 
    int tt = 1 ; 
    //cin>>tt ; 
    while(tt--)
    {
        solve(x);
    }
}