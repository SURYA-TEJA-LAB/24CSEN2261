#include <stdio.h>
               int main()
 {
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
  // Check if the number is prime
    for (i = 2; i <= num / 2; i++)
 {
     if (num % i == 0) {
     flag = 1;
      break;
        }
    }

          if (num == 1)
 {
        printf("%d is neither prime nor composite.\n", num);
    } 
        else if (flag == 0)
 {
        printf("%d is a prime number.\n", num);
    }
 else {
        printf("%d is not a prime number.\n", num);
    }
 return 0;
}
