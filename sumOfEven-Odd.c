#include <stdio.h>

int main() {
  int start, end, i, even= 0, odd = 0;
  
  printf("Enter two numbers:\n");
  printf("\nStart number: ");
  scanf("%i", &start);
  printf("End number: ");
  scanf("%i", &end);

  printf("\nValues: ");
  
  // printing entered values
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
