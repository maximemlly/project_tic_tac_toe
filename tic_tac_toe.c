#include <stdlib.h>
#include <stdio.h>

void print_grid(char usedPlayer, char *grid)
{
    
    int case1 = grid[0];
    int case2 = grid[1];
    int case3 = grid[2];
    int case4 = grid[3];
    int case5 = grid[4];
    int case6 = grid[5];
    int case7 = grid[6];
    int case8 = grid[7];
    int case9 = grid[8];

    // Joueur
    if(usedPlayer == 1)
    {
        if(case1 == ' ')
        {
            case1 = 'O';
        }
        
        else
        {
            printf("Cette case est déjà utilisée !\n");
        }
    }
    
    else if(usedPlayer == 2)
    {
        if(case2 == ' ')
        {
            case2 = 'O';
        }
        else
        {
            printf("Cette case est déjà utilisée !\n");
        }
    }
    else if(usedPlayer == 3)
    {
        if(case3 == ' ')
        {
            case3 = 'O';
        }
        else
        {
            printf("Cette case est déjà utilisée !\n");
        }
    }
    else if(usedPlayer == 4)
    {
        if(case4 == ' ')
        {
            case4 = 'O';
        }
        else
        {
            printf("Cette case est déjà utilisée !\n");
        }
    }
    else if(usedPlayer == 5)
    {
        if(case5 == ' ')
        {
            case5 = 'O';
        }
        else
        {
            printf("Cette case est déjà utilisée !\n");
        }
    }
    else if(usedPlayer == 6)
    {
        if(case6 == ' ')
        {
            case6 = 'O';
        }
        else
        {
            printf("Cette case est déjà utilisée !\n");
        }
    }
    else if(usedPlayer == 7)
    {
        if(case7 == ' ')
        {
            case7 = 'O';
        }
        else
        {
            printf("Cette case est déjà utilisée !\n");
        }
    }
    else if(usedPlayer == 8)
    {
        if(case8 == ' ')
        {
            case8 = 'O';
        }
        else
        {
            printf("Cette case est déjà utilisée !\n");
        }
    }
    else if(usedPlayer == 9)
    {
        if(case9 == ' ')
        {
            case9 = 'O';
        }
        else
        {
            printf("Cette case est déjà utilisée !\n");
        }
    }
    

    printf("%c |%c |%c \n", case1, case2, case3);
    printf("--------\n");
    printf("%c |%c |%c \n", case4, case5, case6);
    printf("--------\n");
    printf("%c |%c | %c\n", case7, case8, case9);
    
}

int game(int numero) // Numéro = variable d'entrée de l'utilisateur (la case choisit), Début de la fonction pour jouer
{
    int choice;
    char grid[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    
    int win = 0;
    int loose = 0;


    
    while (win == 0)
    {
        printf("Choissez un numero de case entre 1 et 9 : ");
        scanf("%d", &choice);
        grid[choice - 1] = 'O';
        print_grid(choice, grid);

        // Conditions de victoire pour le joueur
        if(grid[0] == 'O' && grid[1] == 'O' && grid[2] == 'O')
        {
            printf("Gagné !\n");
            win = 1;
        }
        else if(grid[3] == 'O' && grid[4] == 'O' && grid[5] == 'O')
        {
            printf("Gagné !\n");
            win = 1;
        }
        else if(grid[6] == 'O' && grid[7] == 'O' && grid[8] == 'O')
        {
            printf("Gagné !\n");
            win = 1;
        }
        else if(grid[0] == 'O' && grid[4] == 'O' && grid[8] == 'O')
        {
            printf("Gagné !\n");
            win = 1;
        }
        else if(grid[2] == 'O' && grid[4] == 'O' && grid[6] == 'O')
        {
            printf("Gagné !\n");
            win = 1;
        }
        // Conditions de victoire pour le robot
        if(grid[0] == 'X' && grid[1] == 'X' && grid[2] == 'O')
        {
            printf("Perdu !\n");
            loose = 1;
        }
        else if(grid[3] == 'X' && grid[4] == 'X' && grid[5] == 'X')
        {
            printf("Perdu !\n");
            loose = 1;
        }
        else if(grid[6] == 'X' && grid[7] == 'X' && grid[8] == 'X')
        {
            printf("Perdu !\n");
            loose = 1;
        }
        else if(grid[0] == 'X' && grid[4] == 'X' && grid[8] == 'X')
        {
            printf("Perdu !\n");
            loose = 1;
        }
        else if(grid[2] == 'X' && grid[4] == 'X' && grid[6] == 'X')
        {
            printf("Perdu !\n");
            loose = 1;
        }
    }
    return(numero); 
}
