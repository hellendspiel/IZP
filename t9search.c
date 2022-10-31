#include <stdio.h>
#include <string.h> //for stlen
#include <stdbool.h>

int main(int argc, char *argv[]){
    struct seznam{
    char name[100];
    char number[100];
    int numLen;
    };
    
    struct seznam s[42];
    char pismeno;
    int pocet = 0; //number of contact
    int j = 0; //index of simbol
    bool isName = true;

    //IF for wrong input    
    if(argc > 2){
        printf("Wrong input");
    }

    //getch name and nums to struct seznam
    while ((pismeno = getchar()) != EOF){
        if(pismeno == '\n'){
            if(isName){
            s[pocet].name[j] = '\0';
            }
            else{
                s[pocet].number[j] = '\0';
                s[pocet].numLen = j - 1;
            }
            j = 0;
            if(!isName){
                pocet++;
            }
            isName = !isName;
            continue;
        }
        if(isName){
            s[pocet].name[j] = pismeno;
        }
        else{
            s[pocet].number[j] = pismeno;
        }
        j++;
    }
    
    //IF input is nothing 
    if( argc == 1){
        for(int i = 0; i < pocet; i++){
        printf("%s, %s\n", s[i].name, s[i].number);
        }
        return 0;
    }

    //Search with phone number
    char *posloupnost = argv[1];
    int poslLen = strlen(argv[1]);
    for(int i = 0; i < pocet + 1; i++){
        bool isFinded = false;
        //runing every contact
        for(int j = 0; j < s[i].numLen; j++){
            //runing every simbol in contact
            for(int k = 0; k < poslLen && j + k < s[i].numLen; k++){
                //compare simbols in contacts
                if(posloupnost[k] != s[i].number[j+k]){
                    break;
                }
                if(k == poslLen - 1){
                    isFinded = true;
                    printf("%s, %s\n", s[i].name, s[i].number);
                }
            }
            if(isFinded){
                break;
            }
        }
    }
    return 0;
}