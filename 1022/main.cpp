#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >>t;
    for(int i=1;i<=t;i++){
        double r, pi=2*acos(0.0);
        cin >> r;
        double circle = pi*r*r, square = 4*r*r;
        printf("Case %d: %.2f\n",i, (square-circle));
    }
    return 0;
}
