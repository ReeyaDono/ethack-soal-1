#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void target() {
    char flag[64];
    FILE *f = fopen("flag.txt","r");
    fgets(flag,64,f);
    puts(flag);
}

int main(){
    setvbuf(stdout, NULL, _IONBF, 0);
    char buff[256];
    fgets(buff, 256, stdin);
    if (strlen(buff)<11)
        printf(buff);
    exit(0);
}
