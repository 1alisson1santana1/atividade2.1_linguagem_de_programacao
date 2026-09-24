#include <stdio.h>

int main(void) {
    float c;
    
    printf("Celsius: ");
    scanf("%f", &c);
    
    float f = c * 9 / 5 + 32;
    
    printf("Fahrenheit: %.1f\n", f);
    
    return 0;
}
