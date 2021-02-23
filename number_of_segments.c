#include<stdio.h>
int countSegments(char * s){
    int count=0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i]==' ' || s[i+1]=='\0'){
            count++;
            }
        }
    }
    return count;
}

int main(){
    char str[50];
    scanf("%s",str);
    int n=countSegments(str);
    printf("%d",n)
}