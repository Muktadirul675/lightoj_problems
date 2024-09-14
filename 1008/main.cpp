#include <iostream>
#include<math.h>
#include<cstdio>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=1;i<=t;i++){
        int n; cin >> n;
        int root = sqrt(n);
        if(root*root != n) root++;
        int prev_root = root-1, current_root = root,start = prev_root*prev_root+1, last = current_root*current_root;
        int x,y;
        int range = start + current_root-1;
        if(current_root % 2 == 0){
            if(n == range){
                x = current_root;
                y = current_root;
            }else if(n == start){
                y = current_root;
                x = 1;
            }else if(n == last){
                y = 1;
                x = current_root;
            }
            else if(n < range){
                y = current_root;
                x = n - start + 1;
            }else{
                x = current_root;
                y = last - n + 1;
            }
        }else{
            if(n == range){
                x = current_root;
                y = current_root;
            }else if(n == start){
                y = 1;
                x = current_root;
            }else if(n == last){
                y = current_root;
                x = 1;
            }
            else if(n < range){
                x = current_root;
                y =  n - start + 1;
            }else{
                y = current_root;
                x = last - n + 1;
            }
        }
        cout << "Case " << i << ": " << x << ' ' << y << endl;
    }
    return 0;

}
