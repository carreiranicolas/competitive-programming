/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;


double QALY; //Inicializei aqui porque ela vai pra area data/bss e inicializa com 0

int main()
{
    int N;
    
    cin >> N;
    
    
    for(int i = 0; i < N; i++){
        double q, y;
        
        cin >> q >> y;
        
        QALY += q * y;
    }
    
    printf("%.3f", QALY);

    return 0;
}