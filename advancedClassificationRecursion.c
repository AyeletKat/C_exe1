#include "NumClass.h"
//Function to calculate the number of digits in an integer
int countDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}
// Function to calculate power of a number
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}

int isArmstrongRec(int n, int digits) {
    if (n == 0) return 0;
    return power(n % 10, digits) + isArmstrongRec(n / 10, digits);
}

int isArmstrong(int n) {
    int digits = countDigits(n);
    return (n == isArmstrongRec(n, digits));
}

//Recursive function to check if a number is a palindrome
int palindrome(int num, int originalNum, int digits) {
    // Base case: if num has only one digit, it's a palindrome
    if (digits <= 1)
        return 1;

    // Extracting the first and last digits
    int firstDigit = num / (int)power(10, digits - 1);
    int lastDigit = num % 10;

    // If the first and last digits are not equal, it's not a palindrome
    if (firstDigit != lastDigit)
        return 0;

    // Recursively check for the remaining digits
    return palindrome((num % (int)power(10, digits - 1)) / 10, originalNum, digits - 2);
}
int isPalindrome (int k){
    int dig = countDigits(k);
    int palind = palindrome(k, k, dig);
    if (palind==1) return 1;
    else return 0;
}

