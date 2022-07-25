#include <stdio.h>
int main()
{
char  *NOM[12];
    int math, math1, math2;
    int i,pc, pc1, pc2;
    int elc, elc1, elc2;
    int num, num1, num2;
    int tab[4], j= 0, s;
    int coefT,somme = 0;
    float Mg, M1, M2, M3, M4;
int coef1 = 2; 
printf("entrer votre nom\n");
scanf("%c",&NOM);
    for (j= 0; j <= 20; j++)
    {
    //entre les notes
    
        printf("saisie les notes de maths\n");
        scanf("%d%d", &math1, &math2);
    M1 = ((math1 + math2) / 2) * coef1;
        printf("saisie les notes PC\n");
        scanf("%d%d", &pc1, &pc2);
         M2 = ((pc1 + pc2 )/ 2)* coef1 ;
 printf("saisie les notes elc\n");
scanf("%d%d", &elc, &elc);
 M3 = ((elc1 + elc2) / 2)* coef1 ;
         printf("saisie les notes num\n");
         scanf("%d%d", &num, &num2);
         
         //les moyennes de chaque matiere
       
       
        M4 = ((num1 + num2 )/ 2)* coef1;
         s = M1+M2+M3+M4;
        
     }
    
     
 Mg = ((s/4)* coef1) ;
        }
     
    printf("la moyenne generale est de %2f\n:",Mg);
           

    if (Mg < 10)
    {
        printf("Mediocre\n");
    }

    if (Mg == 10)
    {
        printf("passable\n");
    }

    if (Mg > 12 && Mg < 14)
    {
        printf("ASSEZ BIEN\n");
    }
    if (Mg > 14)
    {
        printf("EXCELLENT\n");
    }

    return 0;
}