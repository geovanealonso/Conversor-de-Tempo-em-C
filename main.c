#include <stdio.h>
#include <stdlib.h>

main(){
    for(;;){
        int tempo, horas, minutos, segundos;
        printf("Digite o tempo em segundos: ");
        scanf("%d", &tempo);
        horas = (tempo/3600);
        minutos = (tempo -(3600*horas))/60;
        segundos = (tempo -(3600*horas)-(minutos*60));
        printf("%dh %dmin %ds \n",horas,minutos,segundos);

        printf("Deseja rodar o programa novamente? S/N\n");
        getchar();
        char resp = getchar();
        if(resp=='n' || resp=='N'){
            break;
        }
    }
}
