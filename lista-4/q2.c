#include <stdio.h>

int main() {
    char resp;

    printf("Quanto e 2 + 2? \n");
    printf("a) 0 \n");
    printf("b) 2 \n");
    printf("c) 4 \n");
    printf("d) 6 \n");
    printf("e) 8 \n");
    scanf("%c", &resp);
    
    switch(resp) {
        case 'c':
        case 'C':
            printf("Sua resposta esta certa! \n");
            break;
        default:
            printf("Sua resposta esta errada! \n");
            break;
    }
    
    return 0;
}