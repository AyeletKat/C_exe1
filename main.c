#include "NumClass.h"
#include <stdio.h>

int main(){
int a;
int b;
//printf("Please enter two positive Integers: ");
if(scanf("%d %d", &a, &b)==2){//checking that both of the integers received proper values successfully
    if (b>=a){
        printf("The Armstrong numbers are:");
        for (int i=a; i<=b;i++){
            int arms = isArmstrong(i);
            if(arms == 1) printf(" %d", i);
        }
        printf("\n");
        printf("The Palindromes are:");
        for (int f=a; f<=b;f++){
            int palin = isPalindrome(f);
            if(palin == 1) printf(" %d", f);
        }
        printf("\n");
        printf("The Prime numbers are:");
        for (int g=a; g<=b;g++){
            int prim = isPrime(g);
            if(prim == 1) printf(" %d", g);
        }
        printf("\n");
        printf("The Strong numbers are:");
        for (int h=a; h<=b;h++){
            int stro = isStrong(h);
            if(stro == 1) printf(" %d", h);
        }printf ("\n");
    }

    if (b<a){
        printf("Second enterned number is bigger than first. Please re-run the program and enter those properly.");
        return 0;
    }
    return 0;
} 
}
