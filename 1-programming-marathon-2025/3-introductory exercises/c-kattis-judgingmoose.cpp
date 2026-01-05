#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, r, n;
    
    cin >> l >> r;
    

    if((l == r) && (l !=0 && r != 0)){
        cout << "Even " << l + r;
    }
    
    else if(l == 0 && r == 0){
        cout << "Not a moose";
    }
    else if(l != r){
        if(l > r){
            n = l -r;
            r += n;
            
            cout << "Odd " << l + r;
        }
        
        else{
            n = r - l;
            l += n;
            
            cout << "Odd " << l + r;
        }
        
    }
    return 0;
}