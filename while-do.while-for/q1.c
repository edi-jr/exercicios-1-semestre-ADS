#include <stdio.h>

int main(){
    int id, p = 0, meId, maId;
    float mId;

    printf("Digite a idade\n[0 - SAIR]\n");
    scanf("%d", &id);
    if(id != 0){
        mId += id;
        meId = id;
        maId = id;
        p++;
        while(id != 0){
            system("cls");
            printf("Digite a idade\n[0 - SAIR]\n");
            scanf("%d", &id);
            if(id == 0) break;
            else if(id < meId){
                p++;
                meId = id;
                mId += id;
            }
            else if(id > maId){
                p++;
                maId = id;
                mId += id;
            }
            else{
                p++;
                mId += id;
            }
        }
        system("cls");
        printf("Temos um total de %d pessoas.\n", p);
        printf("A media de idade foi %.2f.\n", mId / p);
        printf("A maior idade foi %d e a menor %d.\n", maId, meId);      
    }
    getch();
}