#include "NumClass.h"
//with loops!!!

// Function to calculate x raised to the power y
int power(int x, unsigned int y) {
    int result = 1;
    while (y != 0) {
        result *= x;
        y--;
    }
    return result;
}

// Function to calculate the number of digits in n
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Function to check if the number is Armstrong number
int isArmstrong(int n) {
    int count = countDigits(n);
    int temp = n, sum = 0;
    while (temp != 0) {
        int digit = temp % 10;
        sum += power(digit, count);
        temp /= 10;
    }
    return (n == sum);
}
//helping function - reverses an integer and returns it.
int reverse(int n){
  int reversed = 0, rem;
  while (n != 0) {
    rem = n % 10;
    reversed = reversed*10 + rem;
    n /= 10;
  }
  return reversed;
}
int isPalindrome(int pal){
    int rev = reverse(pal);
    if (pal==rev) return 1;
    else return 0;
}
