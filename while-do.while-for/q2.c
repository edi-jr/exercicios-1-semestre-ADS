#include <stdio.h>

int main(){
    float fahrenheit = 50, celsius;

    for(int i = 0; i <= 100; i++){
        celsius = ((fahrenheit - 32) * 5) / 9;
        printf("| %.0f Fahrenheit para celsius: %.2f |\n", fahrenheit, celsius);
        fahrenheit++;
    }
    getch();
}