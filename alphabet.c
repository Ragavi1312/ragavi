#include <stdio.h>

int main(void) {
	char c;
    scanf("%c",&c);
    if((c>= 'a' && c<= 'z') || (c>= 'A' && c<= 'Z'))
    printf("%c is alphabet",c);
    else
    printf("%c not an alphabet",c);
	return 0;
}
