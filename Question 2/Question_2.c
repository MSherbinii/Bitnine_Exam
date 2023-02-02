#include "Question_2.h"
#include<stdlib.h>


// Recursive Programming Implementation

int F_Recursive(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;
    return F_Recursive(n-3) + F_Recursive(n-2);
}

// Iterative Programming Implementation

int F_iterative(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;
    int a = 0, b = 1, c = 2, d;
    for(int i = 3; i <= n; i++){
        d = c + a;
        a = b;
        b = c;
        c = d;
    }
    return c;
}

// Dynamic Programming Implementation
int F_Dynamic(int n){
    int *f = (int *) malloc((n+1) * sizeof(int));
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for(int i = 3; i <= n; i++)
        f[i] = f[i-3] + f[i-2];
    int result = f[n];
    free(f);
    return result;
}

