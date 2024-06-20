#include <stdio.h>														// including library in the program //

int count_vowels(char *str) {													// defining vowels using pointers //
  int count = 0;
  while (*str) {															// using while loop //
    if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || 				// using if condition , giving the vowels //
        *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
      count++;
    }
    str++;
  }
  return count;
}

int count_consonants(char *str) {												// defining consonants using pointers //
  int count = 0;
  while (*str) {															// using while loop //
    if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
      if (*str != 'a' && *str != 'e' && *str != 'i' && *str != 'o' && *str != 'u' && 			// using if condition //
          *str != 'A' && *str != 'E' && *str != 'I' && *str != 'O' && *str != 'U') {
        count++;
      }
    }
    str++;
  }
  return count;
}

int count_special_characters(char *str) {											// defining special characters using pointers //
  int count = 0;
  while (*str) {															// using while loop //
    if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9'))) {
      count++;
    }
    str++;
  }
  return count;
}

int count_numbers(char *str) {												// defining numbers using pointers //
  int count = 0;
  while (*str) {
    if (*str >= '0' && *str <= '9') {
      count++;
    }
    str++;
  }
  return count;
}

int main() {															// main function //
  char input_string[100];
  char *p;
  int vowels, consonants, special_characters, numbers;					

  printf("Enter the input string: ");											// printing the input of string //
  gets(input_string);
  p = input_string;

  vowels = count_vowels(p);
  consonants = count_consonants(p);												// equalising the function in the main function //
  special_characters = count_special_characters(p);
  numbers = count_numbers(p);

  printf("\n");
  printf("Vowels: ");
  for (int i = 0; i < vowels; i++) {											// printing the vowels in the input as * //
    printf("*");
  }
  printf("\n");

  printf("Consonants: ");
  for (int i = 0; i < consonants; i++) {											// printing the consonants in the input as * //
    printf("*");
  }
  printf("\n");

  printf("Special characters: ");
  for (int i = 0; i < special_characters; i++) {									// printing the special characters in the input as * //
    printf("*");
  }
  printf("\n");

  printf("Numbers: ");
  for (int i = 0; i < numbers; i++) {											// printing the numbers in the input as * //
    printf("*");
  }
  printf("\n");

  return 0;
}