#include <stdio.h>

int main(void) {
    int total;
    
    printf("Total de segundos: ");
    scanf("%d", &total);
    
    int horas = total / 3600;
    int minutos = (total % 3600) / 60;
    int segundos = total % 60;
    
    printf("%dh %dmin %ds\n", horas, minutos, segundos);
    
    return 0;
}
