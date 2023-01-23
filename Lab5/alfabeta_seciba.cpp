#include <stdio.h>
#include <string.h>

char input[100], input2[100];
char tem, min=0,max=0, vid=0, vid2=0;

int main() 
{
    int i, j;
    int mediana;
    printf("Ievadiet vārdu: ");
    scanf("%s", input);
    strcpy(input2,input);
    int garums = strlen(input);
    for (i = 0; i < garums - 1; i++) {
        for (j = i + 1; j < garums; j++) {
            if (input[i] > input[j]) {
                tem = input[i];
                input[i] = input[j];
                input[j] = tem;
            }
        }
    }
    max=input2[j-1];
    min=input2[0];
    if (garums%2==1){
        mediana=input2[garums/2+1];
    }
    if (garums%2==0){
        mediana=input2[garums/2]+input[garums/2+1];
        mediana/=2;
    }

    for(i=0 ; i<garums ; i++){
        vid+=input[i];
    }
    vid2=vid/garums;
    printf("Vārds alfabēta secībā:\n ");
    puts(input);
    printf("ascii: ");
    for (i= 0;input2[i] != '\0' ;i++){
        printf("%d ",input[i]);
    }
    printf("\nMinimālā vērtība: %d\n",min);
    printf("Maksimālā vērtība: %d\n",max);
    printf("Mediāna: %d\n",mediana);
    printf("Vidējā vērtība: %d\n",vid2);
}