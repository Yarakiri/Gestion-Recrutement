#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <windows.h>

void Color(int t,int f){
  
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
  /*0 : Noir
  1 : Bleu foncé
  2 : Vert foncé
  3 : Turquoise
  4 : Rouge foncé
  5 : Violet
  6 : Vert caca d'oie
  7 : Gris clair
  8 : Gris foncé
  9 : Bleu fluo
  10 : Vert fluo
  11 : Turquoise
  12 : Rouge fluo
  13 : Violet 2
  14 : Jaune
  15 : Blanc
  Color();
  */

};

struct Soldat{
  char nom[50];
  int prix;
  int nbr;
};

typedef struct Soldat Epeiste;
typedef struct Soldat Archer;
typedef struct Soldat Cavalier;

Epeiste one = {"Niv un", 5, 1};
Epeiste two = {"Niv deux", 10, 0};
Epeiste three = {"Niv trois", 15, 0};
Epeiste four = {"Niv quatre", 20, 0};

Archer un = {"Niv un", 30, 0};
Archer deux = {"Niv deux", 40, 0};
Archer trois = {"Niv trois", 50, 0};
Archer quatre = {"Niv quatre", 60, 0};

Cavalier una = {"Niv un", 100, 0};
Cavalier dos = {"Niv deux", 200, 0};
Cavalier tres = {"Niv trois", 300, 0};
Cavalier cuatro = {"Niv quatre", 400, 0};

int main(){

  int choixJoueur;
  int choixSoldat;
  int choixEpeiste;
  int choixArcher;
  int choixCavalier;
  int choixquantite;
  int choixvue;

  int jour;
  int quantiteMax;
  int i;
  int army;

  int argenti;
  int choixReload;
  int yuan;


  i = 1;
  quantiteMax = 5;
  argenti = 20;
  army = 1;
  yuan = 50;
  jour = 1;




  while(i > 0  ){
    Color(0,11);
    printf("----JOUR %d----\n", jour);
    Color(11,0);
    Color(14,0);
    printf("Ton argent est de %d\n", yuan);
    Color(15,0);
    printf("Ta capacite max de troupes est de %d\n", quantiteMax);
    Color(3,0);
    printf("Tes soldats au sein de ton armee sont au nombre de %d\n", army);
    Color(10,0);
    printf("Que veux tu faire?\n[1]Recruter des soldats\n[2]Ameliorer ta capacite maximale de troupes\n[3]Voir ton armee\n\n");

    scanf("%d", &choixJoueur);
    switch(choixJoueur){

      case 1: //RECRUTER SOLDATS
        Color(4,0);
        printf("Que veux tu recruter?\n[1]Epeistes\n[2]Archers\n[3]Cavaliers\n");
        scanf("%d", &choixSoldat);
        switch(choixSoldat){

          case 1: //EPEISTES
          Color(11,0);
            printf("[1]%s = %d yuan\n", one.nom, one.prix);
            printf("[2]%s = %d yuan\n", two.nom, two.prix);
            printf("[3]%s = %d yuan\n", three.nom, three.prix);
            printf("[4]%s = %d yuan\n", four.nom, four.prix);
            printf("Quel epeiste veux-tu recruter?\n");
            scanf("%d", &choixEpeiste);
            switch(choixEpeiste){


              case 1:
                printf("Epeiste niv 1\n");
                if (i > quantiteMax && yuan < one.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i <= quantiteMax && yuan >= one.prix){
                  Color(14,0);
                  printf("Tu as recruter epeiste niv 1 pour %d yuan\n", one .prix);
                  yuan = yuan - one.prix;
                  army = army + 1;
                  one.prix = one.prix * 2;
                  one.nbr = one.nbr + 1;
                }
                else if (i <= quantiteMax && yuan < one.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                   
              break;

              case 2:
                printf("Epeiste niv 2\n");
                if(i > quantiteMax && yuan < two.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i <= quantiteMax && yuan >= two.prix){
                  Color(14,0);
                  printf("Tu as recruter epeiste niv 2 pour %d yuan\n", two .prix);
                  yuan = yuan - two.prix;
                  army = army + 1;
                  two.prix = two.prix * 2;
                  two.nbr = two.nbr + 1;
                }
                else if (i <= quantiteMax && yuan < two.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;

              case 3:
                printf("Epeiste niv 3\n");
                if(i > quantiteMax && yuan < three.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i <= quantiteMax && yuan >= three.prix){
                  Color(14,0);
                  printf("Tu as recruter epeiste niv 3 pour %d yuan\n", three .prix);
                  yuan = yuan - three.prix;
                  army = army + 1;
                  three.prix = three.prix * 2;
                  three.nbr = three.nbr + 1;
                }
                else if (i <= quantiteMax && yuan < three.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;

              case 4:
              printf("Epeiste niv 4\n");
                if(i> quantiteMax && yuan < four.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i <= quantiteMax && yuan >= four.prix){
                  Color(14,0);
                  printf("Tu as recruter epeiste niv 4 pour %d yuan\n", four .prix);
                  yuan = yuan - four.prix;
                  army = army + 1;
                  four.prix = four.prix * 2;
                  four.nbr = four.nbr + 1;
                }
                else if (i <= quantiteMax && yuan < four.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;
            }
          break;
        
          
          case 2: //ARCHERS

            Color(11,0);
            printf("[1]%s = %d yuan\n", un.nom, un.prix);
            printf("[2]%s = %d yuan\n", deux.nom, deux.prix);
            printf("[3]%s = %d yuan\n", trois.nom, trois.prix);
            printf("[4]%s = %d yuan\n", quatre.nom, quatre.prix);
            printf("Quel archer veux-tu recruter?\n");
            scanf("%d", &choixArcher);
            switch(choixArcher){

              case 1:
                printf("archer niv 1\n");
                if (i > quantiteMax && yuan < un.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i <= quantiteMax && yuan >= un.prix){
                  Color(14,0);
                  printf("Tu as recruter archer niv 1 pour %d yuan\n", un .prix);
                  yuan = yuan - un.prix;
                  army = army + 1;
                  un.prix = un.prix * 2;
                  un.nbr = un.nbr + 1;
                }
                else if (i <= quantiteMax && yuan < un.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }  
              break;

              case 2:
                printf("archer niv 2\n");
                if(i> quantiteMax && yuan < deux.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i<= quantiteMax && yuan >= deux.prix){
                  Color(14,0);
                  printf("Tu as recruter archer niv 2 pour %d yuan\n", deux .prix);
                  yuan = yuan - deux.prix;
                  army = army + 1;
                  deux.prix = deux.prix * 2;
                  deux.nbr = deux.nbr + 1;
                }
                else if (i<= quantiteMax && yuan < deux.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;

              case 3:
                printf("archer niv 3\n");
                if(i> quantiteMax && yuan < trois.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i<= quantiteMax && yuan >= trois.prix){
                  Color(14,0);
                  printf("Tu as recruter archer niv 3 pour %d yuan\n", trois .prix);
                  yuan = yuan - trois.prix;
                  army = army + 1;
                  trois.prix = trois.prix * 2;
                  trois.nbr = trois.nbr + 1;
                }
                else if (i<= quantiteMax && yuan < trois.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;

              case 4:
                printf("archer niv 4\n");
                if(i> quantiteMax && yuan < four.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i<= quantiteMax && yuan >= four.prix){
                  Color(14,0);
                  printf("Tu as recruter archer niv 4 pour %d yuan\n", four .prix);
                  yuan = yuan - four.prix;
                  army = army + 1;
                  quatre.prix = quatre.prix * 2;
                  quatre.nbr = quatre.nbr + 1;
                }
                else if (i<= quantiteMax && yuan < four.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;
            }
          break;
          case 3: //CAVALIER
            Color(11,0);
            printf("[1]%s = %d yuan\n", una.nom, una.prix);
            printf("[2]%s = %d yuan\n", dos.nom, dos.prix);
            printf("[3]%s = %d yuan\n", tres.nom, tres.prix);
            printf("[4]%s = %d yuan\n", cuatro.nom, cuatro.prix);
            printf("Quel cavalier veux-tu recruter?\n");
            scanf("%d", &choixCavalier);
            switch(choixCavalier){
              case 1:
                printf("cavalier niv 1\n");
                if (i> quantiteMax && yuan < una.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i<= quantiteMax && yuan >= una.prix){
                  Color(14,0);
                  printf("Tu as recruter cavalier niv 1 pour %d yuan\n", una .prix);
                  yuan = yuan - una.prix;
                  army = army + 1;
                  una.prix = una.prix * 2;
                  una.nbr = una.nbr + 1;
                }
                else if (i<= quantiteMax && yuan < una.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;

              case 2:
                printf("cavalier niv 2\n");
                if(i> quantiteMax && yuan < dos.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i<= quantiteMax && yuan >= dos.prix){
                  Color(14,0);
                  printf("Tu as recruter cavalier niv 2 pour %d yuan\n", dos .prix);
                  yuan = yuan - dos.prix;
                  army = army + 1;
                  dos.prix = dos.prix * 2;
                  dos.nbr = dos.nbr + 1;
                }
                else if (i<= quantiteMax && yuan < dos.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;

              case 3:
                printf("cavalier niv 3\n");
                if(i> quantiteMax && yuan < tres.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i<= quantiteMax && yuan >= tres.prix){
                  Color(14,0);
                  printf("Tu as recruter cavalier niv 3 pour %d yuan\n", tres .prix);
                  yuan = yuan - tres.prix;
                  army = army + 1;
                  tres.prix = tres.prix * 2;
                  tres.nbr = tres.nbr + 1;
                }
                else if (i<= quantiteMax && yuan < tres.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;

              case 4:
                printf("cavalier niv 4\n");
                if(i> quantiteMax && yuan < cuatro.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
                else if (i<= quantiteMax && yuan >= cuatro.prix){
                  Color(14,0);
                  printf("Tu as recruter cavalier niv 4 pour %d yuan\n", cuatro .prix);
                  yuan = yuan - cuatro.prix;
                  army = army + 1;
                  cuatro.prix = cuatro.prix * 2;
                  cuatro.nbr = cuatro.nbr + 1;
                }
                else if (i<= quantiteMax && yuan < cuatro.prix){
                  printf("Tu n'as pas assez d'argent\n");
                }
              break;
            }
          break;         
        } 
      break;

      case 2: // AMELIORATION CAPACITE MAX
        Color(13,0);
        printf("Pour %d yuan, Tu peux augmenter la capacite maximale de ton armee.\n Es-Tu sur de toi? [1]oui|[2]non\n", argenti);
        scanf("%d", &choixquantite);
        switch(choixquantite){
          case 1:
            if(yuan < argenti){
              printf("Tu na pas assez d'argent pour ameliorer la capacite maximale\n");
            }else if(yuan >= argenti){
              Color(14,0);
              printf("Tu viens d'augmenter la capacite maximale de troupes de ton armee. Sa capacite a augmenter de 5\n");
              yuan = yuan - argenti;
              quantiteMax = quantiteMax + 5;
            }          
          break;
        }          
        break;


        case 3: // VOIR TROUPES
        Color(13,0);
        printf("Voici vos troupes actuel :\n");
            printf("Epeiste :\n");
            printf("- %s = %d \n", one.nom, one.nbr);
            printf("- %s = %d \n", two.nom, two.nbr);
            printf("- %s = %d \n", three.nom, three.nbr);
            printf("- %s = %d \n", four.nom, four.nbr);
            printf("Archer :\n");
            printf("- %s = %d \n", un.nom, un.nbr);
            printf("- %s = %d \n", deux.nom, deux.nbr);
            printf("- %s = %d \n", trois.nom, trois.nbr);
            printf("- %s = %d \n", quatre.nom, quatre.nbr);
            printf("Cavalier :\n");
            printf("- %s = %d \n", una.nom, una.nbr);
            printf("- %s = %d \n", dos.nom, dos.nbr);
            printf("- %s = %d \n", tres.nom, tres.nbr);
            printf("- %s = %d \n", cuatro.nom, cuatro.nbr);

            printf("C'est bon? [1]oui|[2]non\n");
            scanf("%d", &choixvue);
             
      break;      
     }   

  
    jour = jour + 1;
    yuan = yuan + jour * 8;




   } 
}
    
  

