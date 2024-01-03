#include "date.h"
int main(int argc, char const *argv[])
{
    
    date_t t;
    SaisirDate(&t);
    AfficherDate(t);
    int age = CalculerAge(t);
    printf("L'age est : %d ans\n",age);

}
