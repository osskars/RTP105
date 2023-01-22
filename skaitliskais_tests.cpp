#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    int i;
    double x, y;

    // Open the file for writing
    FILE *f = fopen("graph.dat", "w");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the data to the file
    for (i = 0; i <= 360; i++) {
        x = (double)i * PI / 180;
        y = exp(x);
        fprintf(f, "%f %f\n", x, y);
    }

    // Close the file
    fclose(f);

    printf("Data has been written to graph.dat\n");
    return 0;
}
