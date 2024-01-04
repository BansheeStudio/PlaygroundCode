#include <stdio.h>
#include <ctype.h>

int main() {
    char firstName[50], lastName[50];
    int i;

    printf("Enter your first name: ");
    for (i = 0; i < 50 && isspace((unsigned char)getchar()); i++);
    scanf("%s", firstName);

    printf("Enter your last name: ");
    for (i = 0; i < 50 && isspace((unsigned char)getchar()); i++);
    scanf("%s", lastName);

    printf("Your full name is %s %s\n", firstName, lastName);

    return 0;
}
