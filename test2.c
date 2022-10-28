#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //used for getch(); get char from the console
#include <string.h>

const int s = 3;
char *name[s] = {"Stepa Barasek", "Valer Ghost", "Tomas Prochaska"};
char *number[s] = {"+3479", "+853427", "+22367"};

//cisla do klavesnice
char zero[2] = {'0', '+'};
char one[1] = {'1'};
char two[7] = {'2', 'A', 'B', 'C', 'a', 'b', 'c'};
char three[7] = {'3', 'D', 'E', 'F', 'd', 'e', 'f'};
char four[7] = {'4', 'G', 'H', 'I', 'g', 'h', 'i'};
char five[7] = {'5', 'J', 'K', 'L', 'j', 'k', 'l'};
char six[7] = {'6', 'M', 'N', 'O', 'm', 'n', 'o'};
char seven[9] = {'7', 'P', 'Q', 'R', 'S', 'p', 'q', 'r', 's'};
char eight[7] = {'8', 'T', 'U', 'V', 't', 'u', 'v'};
char nine[9] = {'9', 'W', 'X', 'Y', 'Z', 'w', 'x', 'y', 'z'};



int main(){

    printf("Input number:\n");
    char input;
    scanf("%s", &input);

    printf();

    getch();
}
