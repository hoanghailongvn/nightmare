# include<stdio.h>
# include<stdlib.h>

int main() {
    char *a = (char *)malloc(0x10);
    char *b = (char *)malloc(0x10);
    char *c = (char *)malloc(0x10);
    free(a);
    free(b);
    free(c);
}
