#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    int a[n]; // ignore if there is a error message here
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    sort(a,a+n);
    while(m--)
    {
        int k, ans;
        cin>>k;
        ans=upper_bound(a,a+n, k)-a;
        cout<<ans<<endl;
    }
}
