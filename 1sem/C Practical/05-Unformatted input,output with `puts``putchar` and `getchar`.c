// Unformatted input/output with `puts`/`putchar` and `getchar`
#include <stdio.h>
#include <conio.h>

main () {
    char ch;
    refresh();
    puts("Enter a character");
    refresh();
    ch = getch();
    puts("\nThe given character is : ");
    putchar(ch);
    return(0);
}
