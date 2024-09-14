#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1002];
    int sum = 0;
    arr[0] = 0;
    for(int i=1;i<=1000;i++){
        sum += i;
        if(sum%3==0){
            arr[i] = arr[i-1]+1;
        }else{
            arr[i] = arr[i-1];
        }
    }
    int t; cin >> t;
    for(int i=1;i<=t;i++){
        int a,b; cin >> a >> b;
        cout << "Case " << i << ": " << arr[b] - arr[a-1] << endl;
    }
    return 0;
}
