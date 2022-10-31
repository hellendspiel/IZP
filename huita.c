#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char *sequence = argv[1];
    int sequenceLen = strlen(argv[1]);

    char contacts[42*2][100];
    //Get contacts in contacts
    char ch; 
    while ((ch = getchar()) != EOF){ //пока нахуй в stdin не кончится вся хуйня
        //Тут короче заносишь в contacts все данные
        //Кста строчка заканчивается со знаком \n 
        //А вообще если не хотите копи паст то лучше используйте функцию fgets(stdin, ...)
    }

    // Теперь надо пробежаться по всему массиву напрмер ебнуть
    for (int i = 0; i < 42*2; i+=2) //i = name; i+1 = number
    {
        //Some Compare function for name contacts[i]
        //Some compare function for number contacts[i+1]
        //if (compare is true) print contact
        //Кста иожно не ебашить отдельные функции, а все ебнуть прямо в мейне
    }
    
}

//на счет функции 
//бля я понял что надо расписать поподробнее
//с помощью фора надо прпойтись по всему входному массиву (к примеру блять номер контакта)
//и сравнивать каждый элемент с той искомой помледовательностью
// но опять же можно это ебнуть прямо в main