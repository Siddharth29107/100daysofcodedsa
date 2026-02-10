#include <stdio.h>
#include <string.h>

// Recursive function to print string in reverse
void mirror(char str[], int index) {
    if (index < 0)
        return;   // Base case

    printf("%c", str[index]);
    mirror(str, index - 1);
}

int main() {
    char str[1000];

    scanf("%s", str);

    int length = strlen(str);

    mirror(str, length - 1);

    return 0;
}
