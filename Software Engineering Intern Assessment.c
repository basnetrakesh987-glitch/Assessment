#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t){
    if (strlen (s)!= strlen(t))
        return false;

    int count[256] = {0};

    for(int i=0; s[i] != '\0'; i++){
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] !=0)
        return false;
    }
    return true;
}

int main(){
    char s[] = "listen";
    char t[] = "silent";

    if(isAnagram (s, t))
        printf("True\n");
    else
        printf("False\n");
    
    return 0;
}