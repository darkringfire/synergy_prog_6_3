#include <iostream>
#include <cstring>

#define MAXL 100

int main() {
    char s[MAXL];
    int l;

    printf("\nTask 1. Enter string and print 2nd symbol\n");
    printf("Enter string:");
    gets(s);
    printf("2nd symbol: %c\n", s[1]);

    printf("\nTask 2. Print last symbol and switch 1st and last chars\n");
    printf("Enter string:");
    gets(s);
    l = strlen(s);
    printf("Last symbol: %c\n", s[l-1]);
    char t = s[0];
    s[0] = s[l-1];
    s[l-1] = t;
    printf("String with switched chars: %s\n", s);

    printf("\nTask 3. Remove char from string\n");
    printf("Enter string:");
    gets(s);
    l = strlen(s);
    int r;
    printf("Enter char number to remove:");
    scanf("%i", &r);
    for (int i = r-1; i < l; i++) {
        s[i] = s[i+1];
    }
    printf("Result string: %s\n", s);


    return 0;
}
