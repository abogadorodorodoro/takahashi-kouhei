#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int Intelligence = (rand() % 20) + 1;
    int Stamina = (rand() % (20 - Intelligence)) + 1;
    int Charisma = (20 - (Intelligence + Stamina));
    printf("Intelligence   %2d \n", Intelligence);
    printf("Stamina        %2d \n",Stamina);
    printf("Charisma       %2d \n",Charisma);
    if(Intelligence > Stamina && Intelligence > Charisma){
        printf("Your roll    Mage");
    }else if(Stamina > Intelligence && Stamina > Charisma){
        printf("Your roll  Knight");
    }else{
        printf("Your roll   Thief");
    }
    return 0;
}