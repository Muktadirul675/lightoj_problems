#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=1;i<=t;i++){
        int sides[3]; cin >> sides[0] >> sides[1] >> sides[2];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(sides[i] < sides[j]) swap(sides[i], sides[j]);
            }
        }
        int c = sides[2] * sides[2], a = sides[0] * sides[0], b = sides[1] * sides[1];
        cout << "Case " << i << ": ";
        if(c == a+b) cout << "yes";
        else cout << "no";
        cout << endl;
    }
    return 0;
}
