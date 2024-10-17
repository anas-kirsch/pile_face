#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "fonction-entree.c"

#define PILE 1
#define FACE 2  
#define MAX 255



int main(){
    srand(time(NULL));              

    
    int reussite = 0;
    int echec = 0;
    // printf("%d",score);
    while (echec<10){
        
        printf("[--------------- Pile ou Face ---------------] \n\n");
        printf("Pile ou Face ?\n");
        printf("1. Pile \n");
        printf("2. Face \n");
        printf("0. Quitter le jeu\n\n");
            
        char tab[MAX];
        memset(tab,0,255);
        fgets(tab,sizeof(MAX),stdin);

        int choix = atoi(tab);


        if (choix == PILE)  
        {                           
            printf("Vous faite PILE !\n");  
        }                                               
        else if (choix == FACE) 
        {                                                       
            printf("Vous faite FACE !\n"); 
        }                                                   

        if (choix == 0)    
        {                                   
            printf("vous quittez le jeu...\n"); 
            break;
        }                           

        printf("La pièce est jetée...\n");      

        printf("3\n");                          
        sleep(1);           
        printf("2\n");          
        sleep(1);       
        printf("1\n");          
        sleep(1);                               
        // fflush(stdout);             

        int coin = (float)rand()/RAND_MAX *2+1;
        // printf("%d\n",coin); 
        //  pour voir la valeur de coin et si cest P OU F

        // switch (coin)
        // {
        // case PILE:
        //     /* code */
        //     break;
        // case FACE:
            
        //     break;
        // case 0:
        //     break;
        // default:
        //     break;
        // }
        if (coin == PILE)      
        {                               
            printf("PILE !\n");
            
        }                            
        else if(coin == FACE)
        {                                                    
            printf("FACE !\n");                
        }

        if (choix == coin)
        {
            printf("C'est GAGNÉ, bien joué !\n\n");
            reussite = reussite + 1;
        }
        else if(choix != coin)
        {

            printf("C'est PERDU, dommage...\n\n");
            echec = echec +1;

        }
        
        if (reussite >= 2)
        {
            printf("réussites : %d\n",reussite);

        }
        else{
            printf("réussite : %d\n",reussite);

        }

        if (echec >= 2)
        {
            printf("echecs : %d\n\n",echec);

        }
        else{
            printf("echec : %d\n\n",echec);
        }

        
            printf("Rejouer?\n");

        // printf("Jouer encore ?\n");        

    }                       

    printf("######## GAME OVER ########\n");


    return 0;           
}               




