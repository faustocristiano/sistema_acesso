#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**********************************************/
/***PROGRAMA DE CONTROLE DE ACESSO**/
/**********************************************/

/** VARIÁVEIS GLOBAIS DESTE MÓDULO ****/

struct TRegistroUsuario {
    char UserId[10];
    char Senha[10];
};

/* Tabela de Usuários */
struct TRegistroUsuario TabelaUsuarios[4] = {
        {"joao","abcd"},
        {"maria","xxxx"},
        {"jose","yyyy"},
        {"lara","zzzz"},
};


char userID[20];


/** FUNÇÔES DESTE MÓDULO ****/

void mostrar_menu_entrada_usuario()
{
    printf("*******************************\n");
    printf("Entre com o seu USERID para ter acesso\n");
    printf("*******************************\n");
}

/** Função que implementa as tarefas do administrador **/

void  administrar()
{
}

/** Função que valida um usuário e abre a porta **/

int tratar_usuario()
{
    char senha[10];
    int userEncontrado = 1;
    int i, j = 0, cont=0;


    /*
        Loop para encontrar o usuário na tabela.
        Ao final do loop a variavel i conterá o índice do usuário (menos 1)(se ele estiver
        na tabela
     */
    for (i = 0; i < 4 && userEncontrado; i++) {
        if (strcmp(userID, TabelaUsuarios[i].UserId) == 0)
            userEncontrado = 0;
    }

    /* se usuário encontrado abre a porta */
    if (userEncontrado == 0)

    do
        {

        printf("Bom dia %s! Entre com a senha\n", userID);
        scanf("%s", senha);
        i--; /* o indice do sujeito é i-1 */


            for (int j = 0; j < 3; j++)
            {

                if (strcmp(senha, TabelaUsuarios[i].Senha) == 0)
                {
                    printf("Abrir porta!!!\n");
                    exit(0);
                }
                else
                {

                    cont = cont + 1;
                }
                printf("Senha Inválida, ainda possui %d\n", cont);
            }
        }while (cont < 3);

    }


void main()
{
    for(;;) {
        mostrar_menu_entrada_usuario();
        scanf("%s",userID);
        if (strcmp(userID, "admin")==0) {
            administrar();
        } else {
            tratar_usuario();
        }
    }
}