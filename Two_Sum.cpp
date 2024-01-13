#include<bits/stdc++.h>
#define fo(type,i,k,n) for(type i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define MOD 1000000007
using namespace std;
void solve(vector<int> arr, int target)
{
    int n = arr.size();
    fo(int,i,0,n)
    {
        fo(int,j,i+1,n)
        {
            if(arr[i]+arr[j]==target)
                cout << i << "," << j << endl;    
        }
    }
}
int main()
{
    int target;
    int n; // number of elements
    cin >> n;

    vector<int> arr(n);
    fo(int, i, 0, n) {
        cin >> arr[i];
    }

    cin >> target;

    int tt = 1; 
    while(tt--)
    {
        solve(arr, target);
    }
}