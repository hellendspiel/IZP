#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //used for getch(); get char from the console

int main(void)
{ 
    char seznam[] = {};
    printf("Enter your contacts:\n");
    scanf("%s", seznam);

    char input[] = {};
    printf("Enter contact name or phone:\n");
    scanf("%s", input);

    char null[2] = {'0', '+'};
    char one[1] = {'1'};
    char two[4] = {'2', 'a', 'b', 'c'};
    char three[4] = {'3', 'd', 'e', 'f'};
    char four[4] = {'4', 'g', 'h', 'i'};
    char five[4] = {'5', 'j', 'k', 'l'};
    char six[4] = {'6', 'm', 'n', 'o'};
    char seven[5] = {'7', 'p', 'q', 'r', 's'};
    char eight[4] = {'8', 't', 'u', 'v'};
    char nine[5] = {'9', 'w', 'x', 'y', 'z'};

    char *checknum;
    checknum = strchr(input, '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9');
    
//     if(checknum != NULL){
//         if(checknum == 0)
//  //           input[checknum] = null;
    

//  //   }


    return(0);
    getch();
}