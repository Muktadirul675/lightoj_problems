#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin >> t;
    for(int i=1;i<=t;i++){
        int a,b, d=19; cin >> a >> b;
        d += (a+abs(b-a)) * 4;
        printf("Case %d: %d\n", i,d);
    }
    return 0;
}
