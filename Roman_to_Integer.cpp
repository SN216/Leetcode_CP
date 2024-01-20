#include<bits/stdc++.h>
#define fo(type,i,k,n) for(type i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define MOD 1000000007
using namespace std;
int solve(string s)
{
    int n = s.size();
    int sum = 0;
    map<char, int> myMap;
    myMap['I'] = 1;
    myMap['V'] = 5;
    myMap['X'] = 10;
    myMap['L'] = 50;
    myMap['C'] = 100;
    myMap['D'] = 500;
    myMap['M'] = 1000;

    fo(int,i,0,n)
    {
        if(myMap[s[i]] < myMap[s[i+1]]){
                sum -= myMap[s[i]];
            }
            else{
                sum += myMap[s[i]];
            }
    }
        return sum;
}
int main()
{
    string s;
    cin >> s;
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE 
    // freopen("input.txt", "r", stdin); 
    // #endif 
    int tt = 1 ; 
    // cin>>tt ; 
    while(tt--)
    {
        cout << solve(s);
    }
}