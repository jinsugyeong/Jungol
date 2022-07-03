#include <stdio.h>

int fn(int a){

    if(a <= 1) return 1;
    return fn(a/2) + fn(a-1);
    
}

int main(){   
    int a;
    scanf("%d", &a);
    
    printf("%d", fn(a));
    
}
