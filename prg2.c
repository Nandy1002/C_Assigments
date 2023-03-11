//check vowel or consonent
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a charcter : ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("This is a Vowel\n");
    }else{
        printf("This is a consonent.\n");
    }
    return 0;
}