#include<stdio.h>
int main(void){
    int P_HP, P_ATK, P_DEF=0;
    int E_HP, E_ATK, E_DEF=0;
    scanf("%d %d %d\n",&P_HP, &P_ATK, &P_DEF);
    scanf("%d %d %d",&E_HP, &E_ATK, &E_DEF);
    printf("Battle Start \\^_^/\n");
    for(;P_HP>0&&E_HP>0;){
        printf("The player dealt %d damage to the enemy and the enemy dealt %d damage to the player\n", P_ATK-E_DEF,E_ATK-P_DEF);
        P_HP-=E_ATK-P_DEF;
        E_HP-=P_ATK-E_DEF;
        printf("The player has %d HP left and the enemy has %d HP left\n",P_HP,E_HP);
    }
    printf("Battle End \\^_^/\n");
}

