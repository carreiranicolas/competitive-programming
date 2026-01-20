/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a, b;
    while(cin >> a >> b){ //O end of file seria isso. "Enquanto tiver o que ler"
        
        if(a > b){
            cout << a - b << endl;
        }else{
            cout << b - a << endl;
        }
        
        
    }
    

    return 0;
}