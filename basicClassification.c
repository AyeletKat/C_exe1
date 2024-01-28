#include "NumClass.h"

// Function to check if a number is prime
int isPrime(int num) {
    // 0 and 1 are not prime numbers
    if (num < 1)
        return 0;
    if (num ==1) return 1;
    // Check for divisibility from 2 to the square root of num
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

int factorial (int fa){
    int multi=1;
    for (int p=2; p<=fa; p++){
        multi = multi * p;
    }
    return multi;
}

int isStrong(int num){
    int sum = 0;   
    int k = num;  
    int r;  
    while (k!=0){  
        r=k%10;  
        int f=factorial(r);  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==num)  return 1; 
    else return 0;  
    return 0;  
}