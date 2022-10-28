#include <stdio.h>
#include <conio.h> //used for getch(); get char from the console
#include <string.h>
#include <stdbool.h>

const unsigned int c = 3;
const unsigned int n = 10;
char array[n] = {'+', '', 'abc', 'def', 'ghi', 'jkl', 'mno', 'pqrs', 'tuv', 'wxyz'};
char name[c] = {'Stepa Barasek', 'Valer Ghost', 'Tomas Prochaska'};
char number[c] = {'+3479', '+853', '+2'};

bool controlName(char input, int i){

    int size = sizeof(input);

    char controlChar;

    for(int s = 0; s < size; s++){
        controlChar += array[input[s] - 48];
    }

        char pom = name[i];
        int controlN = 0;
        char pom2 = "";
        int o = 0;
        for (int j = 0; j < sizeof(pom); j++) {
            char liter = pom[j];
            for (int k = 0; k < sizeof(controlChar); k++) {
                char pom4 = controlChar[k];
                if (pom4 == liter) {
                    pom2 += pom4;
                    o++;
                    k = sizeof(controlChar);
                }
            }
            if(o == size) {
                j = sizeof(pom);
            }
        }
        for(int j = 0; j < sizeof(pom); j++){

            char pom3 = "";
            int l = j;

            for (int k = 0; k < size; k++){
                pom3 += pom[l];
                l++;
            }

            if(pom3 == pom2){
                return true;
            }
        }
        return false;
}

bool controlNumber(char input, int i){
        int size = sizeof(input);
        char pom = number[i];
        for (int j = 0; j < sizeof(pom); j++){
            char pom2 = "";
            int l = j;
            for (int k = 0; k < size; k++){
                pom2 += pom[l];
                l++;
            }
            if(input == pom2){
                return true;
            }
        }

    return false;
}

int main() {

    printf("Input number: ");
    char input;
    scanf("%s", input);

    for(int i = 0; i < n; i++){
        if(controlName(input, i) || controlNumber(input, i)){
            printf("%s", number[i]);
            printf("%s", name[i]);
        }
    }
    return 0;
    gethc();
}