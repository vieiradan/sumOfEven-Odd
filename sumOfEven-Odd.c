#include <stdio.h>

int main() {
  int temp, start, end, i, even= 0, odd = 0;
  
  printf("Enter two numbers:\n");
  printf("\nFirst number: ");
  scanf("%i", &start);
  printf("Second number: ");
  scanf("%i", &end);
    
    if (start>end) {
      temp = start;
      start = end;
      end = temp;
    }
  
  // displaying values
  for (i=start; i<=end; i++) {
    printf("\n%i", i);
    if (i % 2==0) {
      even += i;
    }
    else if(i % 2==1) {
      odd += i;
    }
  }
  printf("\n\nSum of Even values between %i and %i is: %i", start, end, even);
  printf("\n\nSum of Odd values between %i and %i is: %i", start, end, odd);
}
