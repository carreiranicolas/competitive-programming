/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int X, N;
    
    int not_spent = 0;
    
    cin >> X >> N;
    
    for(int i = 0; i < N; i++){
        int spent; 
        
        cin >> spent;
        
        not_spent = (X + not_spent) - spent;
    }
    
    cout << X + not_spent;
    
    
    return 0;
}