#include <stdio.h>
#include <conio.h> //used for getch(); get char from the console
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    struct seznam{
    char name[101];
    char number[101];
    };

    struct seznam s[42];
    int i = 0;

    while(fgets(s[i].name, 101, stdin) != NULL){
        s[i].name[strspn(s[i].name, "\n")] = '\0';

        fgets(s[i].number, 101, stdin);
        s[i].number[strspn(s[i].number, "\n")] = '\0';
        
        printf("%s %s\n", s[i].name, s[i].number);
        i++;
    }

    // if(argc < 2){
    //     for(int j = 0; j < 42; j++){
    //         printf("%s %s\n", s[j].name, s[j].number);
    //     }
    // }

    return 0;
}