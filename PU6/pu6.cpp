// --------------------------------------- //

// Funkcija bez argumenta un bez return:

void print_hello() {
    printf("Hello!\n");
}

// Funkcija ar argumentu bez return:

void print_name(char name[]) {
    printf("My name is %s.\n", name);
}

// Funkcija bez argumenta un ar return:

int get_age() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    return age;
}
// Funkcija ar argumentu un ar return:

int add_numbers(int a, int b) {
    return a + b;
}
// --------------------------------------- //