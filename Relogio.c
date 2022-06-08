#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int horas, minutos, segundos;
    int delay=1000;

    printf("Ajuste o tempo : \n");
    scanf("%d%d%d", &horas, &minutos, &segundos);

    if (horas > 12 || minutos>60 || segundos>60) {
        
        printf("ERRO ! \n");
        exit(0);
    }
    while (1) {

        segundos++;
        if (segundos>59) {

            minutos++;
            segundos=0;
        }
        if (minutos>59) {
            horas++;
            minutos=0;
        }
        if (horas>12) {
            horas=1;
        }
        printf("\n Relógio :");
        printf("\n %02d:%02d:%02d", horas,minutos,segundos);
        Sleep (delay);
        system("cls");
    }
}
