#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
       printf("%c is vowels",ch);
    else if(((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
    printf("%c is consonant",ch);
    else
    printf("%c is invalid",ch);
	return 0;
}
