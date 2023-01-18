#include <stdio.h>

int main(void) {
  printf("Ludzu ievadiet naturalu skaitli: ");

  int number;
  scanf("%d", &number);

  // Izvada skaitla binaro kodu
  printf("Skaitla %d binārais kods ir: ", number);
  for (int i = 31; i >= 0; i--) {
    printf("%d", (number >> i) & 1);
  }
  printf("\n");

  // Parvieto skaitli binaraja koda vienu poziciju pa kreisi
  int shifted_left = number << 1;
  printf("Skaitla %d binārais kods pēc vienas pozicijas kartosanas pa kreisi ir: ", shifted_left);
  for (int i = 31; i >= 0; i--) {
    printf("%d", (shifted_left >> i) & 1);
  }
  printf("\n");

  // Pārvieto skaitli binaraja koda vienu poziciju pa labi
  int shifted_right = number >> 1;
  printf("Skaitla %d binārais kods pēc vienas vienibas kartosanas pa labi ir: ", shifted_right);
  for (int i = 31; i >= 0; i--) {
    printf("%d", (shifted_right >> i) & 1);
  }
  printf("\n");

  return 0;
}
