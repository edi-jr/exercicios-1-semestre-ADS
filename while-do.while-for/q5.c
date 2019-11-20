#include <stdio.h>

int main(){
    int voto, op1 = 0, op2 = 0, op3 = 0, op4 = 0, op5 = 0, total = 0;
    while(voto != 6){
        system("cls");
        printf("Candidatos:\n1. Jair Rodrigues | 2. Carlos Luz | 3. Neves Rocha\n4. Nulo | 5. Branco | 6. Encerrar e ver resultado\n");
        printf("Digite seu voto: ");
        scanf("%d", &voto);
        switch (voto){
            case 1:
                op1++;
                total++;
                break;
            case 2:
                op2++;
                total++;
                break;
            case 3:
                op3++;
                total++;
                break;
            case 4:
                op4++;
                total++;
                break;
            case 5:
                op5++;
                total++;
                break;
            case 6:
                break;   
            default:
                printf("Erro.");
                break;
        }
    }
    printf("Votos por candidato: 1. Jair Rodrigues = %d | 2. Carlos Luz = %d | 3. Neves Rocha = %d\n", op1, op2, op3);
    printf("Porcentagem de votos nulos: %d%% | Porcentagem de votos brancos: %d%%\n", (op4 * 100) / total, (op5 * 100) / total);
    if(op1 > op2 && op1 > op3) printf("Candidato vencedor: Jair Rodrigues\n");
    else if(op2 > op1 && op2 > op3) printf("Candidato vencedor: Carlos Luz\n");
    else if(op3 > op1 && op3 > op2) printf("Candidato vencedor: Neves Rocha\n");
    else printf("Tivemos um empate.\n");
    
    getch();
}