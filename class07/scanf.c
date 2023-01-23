#include <stdio.h>

 int main ()
{
  char str [80];
  int i;

  printf ("Enter your full name: ");
  scanf ("%79s",str);
  printf ("Enter your age: ");
  scanf ("%d",&i);
  printf ("Mr. %s , %d years old.\n",str,i);
  printf ("Enter any hexadecimal number: ");
  scanf ("%x",&i);
  printf ("You have entered %#x (%d).\n",i,i);
  printf ("Good luck Mr. %79s");
  scanf ("%79s",str);

  return 0;
}
