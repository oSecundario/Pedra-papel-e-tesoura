int main(int argc, char const *argv[])
{
    
    //strcmp(strg1, strg2) == 0 
    //pedra , papel ou tesoura!

    char player[256];
    char player2[256];

    printf("player 1, sua vez...");
    scanf("%s",&player);

    printf("\nplayer 2, sua vez...");
    scanf("%s",&player2);

    printf("\nAguarde estamos calculando o resultado...\n");

    if(strcmp (player,"papel") == 0){
                if(strcmp (player2,"papel") == 0){
                    printf("\nEmpate!...");
            }else if(strcmp (player2,"tesoura") == 0){
                printf("\nTesoura corta papel, Player 2 venceu...");
            }else if(strcmp (player2,"pedra") == 0){
                printf("\nPapel embrulha pedra, Player 1 venceu");
            }else{
                printf("\nPlayer 2 jogou uma informacao invalida...");
            }
    }else if(strcmp (player,"tesoura") == 0){
                    if(strcmp (player2,"papel") == 0){
                    printf("\nA tesoura corta papel, Player 1 venceu...");
            }else if(strcmp (player2,"tesoura") == 0){
                printf("\nEmpate!...");
            }else if(strcmp (player2,"pedra") == 0){
                printf("\nPedra amassa a tesoura, Player 2 venceu");
            }else{
                printf("\nPlayer 2 jogou uma informacao invalida");
            }
    }else if(strcmp (player,"pedra") == 0){
                    if(strcmp (player2,"papel") == 0){
                    printf("\nPapel embrulha pedra, Player 2 venceu...");
            }else if(strcmp (player2,"tesoura") == 0){
                printf("\nPedra amassa tesoura, Player 1 venceu...");
            }else if(strcmp (player2,"pedra") == 0){
                printf("\nEmpate!...");
            }else{
                printf("\nPlayer 2 jogou uma informacao invalida");
            }
    }else{
        printf("\nVoce jogou uma informacao invalida!...");
    }
    return 0;
}
