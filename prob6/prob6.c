#include <stdio.h>
int main(){
    const int yearToDays = 365;
    const int dayToHours = 24;
    const int hourToSecs = 3600;
    int year = 18; 
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d ", year * yearToDays * dayToHours * hourToSecs, year * yearToDays * dayToHours, year * yearToDays, year);
    return 0;
}