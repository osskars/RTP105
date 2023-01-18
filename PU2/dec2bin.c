#include <stdio.h>

int main() {
  // ievadīt skaitli
  char num;
  printf("Ievadiet skaitli: ");
  scanf("%c", &num);

  // sagatavot bināro kodu
  int binaryNum = 0;
  int i = 1;
  while (num > 0) {
    binaryNum += (num % 2) * i;
    num /= 2;
    i *= 10;
  }

  // attēlot bināro kodu
  printf("Skaitlim atbilstošais binārais kods ir: %d", binaryNum);

  return 0;
}
