#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=1;i<=t;i++){
        int n,m; cin >> n >> m;
        int prod = n*m, result;

        if(prod == 1) result = 1;
        else if(n==1 && m!=1) result = m;
        else if(n!=1 && m==1) result = n;
        else if(n == 2 && m==2) result = 4;
        else if(n==2 || m==2){
            result = (prod / 2) + (prod % 4);
        }else{
            if(prod % 2) result = (prod+1)/2;
            else result = prod/ 2;
        }

        printf("Case %d: %d\n", i,result);
    }
    return 0;
}
