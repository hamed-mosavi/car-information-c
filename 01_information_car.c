#include <stdio.h>

int main(void){
    char brand[]="Toyota";
    char model[]="Corolla";
    unsigned yer=2024;
    unsigned maxSpeed=220;
    float fuelTank=45.5;
    float fuelconsumption=6.5;
    float range =(fuelTank/fuelconsumption)*100;

    printf("Brand           :%s\n",brand);
    printf("Model           :%s\n",model);
    printf("Yer             :%u\n",yer);
    printf("Speed           :%u km/h\n",maxSpeed);
    printf("Fuel Tank       :%.1f L\n",fuelTank);
    printf("Fule Consumption:%.1f L/100km\n",fuelconsumption);
    printf("Range           :%2.f km/n\n", range);

    return 0;
}
