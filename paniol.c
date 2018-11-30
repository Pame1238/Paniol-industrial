#include <stdlib.h>
#include <stdio.h>
//#include <iostream>
//#include <conio2.h>
#include <stdbool.h>

/*FILE *doca, *docb, *docc;

using namespace std;

int main(void)
{

system("color 3F");
textbackground(15);
textcolor(15);


//letra u
gotoxy(5,5);
printf("++++\n");
gotoxy(5,6);
printf("++++\n");
gotoxy(5,7);
printf("++++\n");
gotoxy(5,8);
printf("++++\n");
gotoxy(5,9);
printf("++++\n");
gotoxy(5,10);
printf("++++\n");
gotoxy(5,11);
printf("++++\n");
gotoxy(5,12);
printf("++++\n");
gotoxy(5,13);
printf("++++++++\n");
gotoxy(5,14);
printf("++++++++\n");

gotoxy(13,5);
printf("++++\n");
gotoxy(13,6);
printf("++++\n");
gotoxy(13,7);
printf("++++\n");
gotoxy(13,8);
printf("++++\n");
gotoxy(13,9);
printf("++++\n");
gotoxy(13,10);
printf("++++\n");
gotoxy(13,11);
printf("++++\n");
gotoxy(13,12);
printf("++++\n");
gotoxy(13,13);
printf("++++\n");
gotoxy(13,14);
printf("++++\n");


//letra n
gotoxy(19,5);
printf("++++\n");
gotoxy(19,6);
printf("++++\n");
gotoxy(19,7);
printf("++++\n");
gotoxy(19,8);
printf("++++\n");
gotoxy(19,9);
printf("++++\n");
gotoxy(19,10);
printf("++++\n");
gotoxy(19,11);
printf("++++\n");
gotoxy(19,12);
printf("++++\n");
gotoxy(19,13);
printf("++++\n");
gotoxy(19,14);
printf("++++\n");


gotoxy(23,6);
printf("+\n");
gotoxy(23,7);
printf("++\n");
gotoxy(23,8);
printf("+++\n");
gotoxy(24,9);
printf("+++\n");
gotoxy(25,10);
printf("++\n");
gotoxy(26,11);
printf("+\n");

gotoxy(27,5);
printf("++++\n");
gotoxy(27,6);
printf("++++\n");
gotoxy(27,7);
printf("++++\n");
gotoxy(27,8);
printf("++++\n");
gotoxy(27,9);
printf("++++\n");
gotoxy(27,10);
printf("++++\n");
gotoxy(27,11);
printf("++++\n");
gotoxy(27,12);
printf("++++\n");
gotoxy(27,13);
printf("++++\n");
gotoxy(27,14);
printf("++++\n");

//letra v

gotoxy(34,5);
printf("++++\n");
gotoxy(34,6);
printf("++++\n");
gotoxy(34,7);
printf("++++\n");
gotoxy(34,8);
printf("++++\n");
gotoxy(34,9);
printf("++++\n");
gotoxy(34,10);
printf("++++\n");
gotoxy(34,11);
printf("++++\n");
gotoxy(35,12);
printf("++++\n");
gotoxy(35,13);
printf("++++\n");
gotoxy(36,14);
printf("++++\n");


gotoxy(42,5);
printf("++++\n");
gotoxy(42,6);
printf("++++\n");
gotoxy(42,7);
printf("++++\n");
gotoxy(42,8);
printf("++++\n");
gotoxy(42,9);
printf("++++\n");
gotoxy(42,10);
printf("++++\n");
gotoxy(42,11);
printf("++++\n");
gotoxy(41,12);
printf("++++\n");
gotoxy(41,13);
printf("++++\n");
gotoxy(40,14);
printf("++++\n");


//letra i
gotoxy(49,5);
printf("++++\n");
gotoxy(49,6);
printf("++++\n");

gotoxy(49,8);
printf("++++\n");
gotoxy(49,9);
printf("++++\n");
gotoxy(49,10);
printf("++++\n");
gotoxy(49,11);
printf("++++\n");
gotoxy(49,12);
printf("++++\n");
gotoxy(49,13);
printf("++++\n");
gotoxy(49,14);
printf("++++\n");


//letra m

gotoxy(56,5);
printf("++++\n");
gotoxy(56,6);
printf("++++\n");
gotoxy(56,7);
printf("++++");
gotoxy(56,8);
printf("++++\n");
gotoxy(56,9);
printf("++++\n");
gotoxy(56,10);
printf("++++\n");
gotoxy(56,11);
printf("++++\n");
gotoxy(56,12);
printf("++++\n");
gotoxy(56,13);
printf("++++\n");
gotoxy(56,14);
printf("++++\n");


gotoxy(60,6);
printf("+\n");
gotoxy(64,5);
printf("++++\n");
gotoxy(64,6);
printf("++++\n");
gotoxy(64,7);
printf("++++\n");
gotoxy(64,8);
printf("++++\n");
gotoxy(64,9);
printf("++++\n");
gotoxy(64,10);
printf("++++\n");
gotoxy(64,11);
printf("++++\n");
gotoxy(64,12);
printf("++++\n");
gotoxy(64,13);
printf("++++\n");
gotoxy(64,14);
printf("++++\n");

gotoxy(63,6);
printf("+\n");
gotoxy(61,7);
printf("++\n");

//letra e

gotoxy(71,5);
printf("++++\n");
gotoxy(71,6);
printf("++++\n");
gotoxy(71,7);
printf("++++\n");
gotoxy(71,8);
printf("++++\n");
gotoxy(71,9);
printf("++++\n");
gotoxy(71,10);
printf("++++\n");
gotoxy(71,11);
printf("++++\n");
gotoxy(71,12);
printf("++++\n");
gotoxy(71,13);
printf("++++\n");
gotoxy(71,14);
printf("++++\n");

gotoxy(75,5);
printf("++++++++\n");
gotoxy(75,6);
printf("++++++++\n");

gotoxy(75,9);
printf("++++++++\n");
gotoxy(75,10);
printf("++++++++\n");

gotoxy(75,13);
printf("++++++++\n");
gotoxy(75,14);
printf("++++++++\n");

gotoxy(78,25);
printf("\n\n\n");


//nombre del proyecto
//mi nombre
//y alguna que otra cosita

system("pause");
system("cls");
system("color 3F");

gotoxy(30,8);
printf("Profesor: GOMEZ Reynaldo\n\n");
gotoxy(30,10);
printf("Alumno: TORRES LUJAN, Pamela\n\n");
gotoxy(30,12);
printf("PROGRAMACION 1\n\n");

system("pause");
system("cls");
system("color 3F");

doca = fopen("Tubo alcantarillado.txt","r");
docb = fopen("Tubo 20 x 6m Alcantarillado.txt","r");
docc = fopen("Tubo PVC Alcantarillado.txt","r");


bool repite=true, tool=true;

int volver,b,c,h,j, code[10], pass=1238, opcion;
char user[30];

do{
    printf("\t\t\tSistema Pañol\n\n");
    printf("\t\t\tElija una opcion\n\n");

    printf("\t\t\t1. Consultar Materiales\n\n");
    printf("\t\t\t2. Consultar Codigo de Material\n\n");
    printf("\t\t\t3. Consultar Usuario\n\n");
    printf("\t\t\t4. Salir\n\n");
    scanf("%d",&opcion);

   switch(opcion)
   {
         case 1:
             system("cls");
             printf("\t\t\tLISTA DE MATERIALES: \n\n");
                  printf("\t\t\tElije una opcion: \n\n");
                  printf("0. Tubo alcantarillado\n");
                  printf("1. Tubo 20 x 6m Alcantarillado\n");
                  printf("2. Tubo PVC Alcantarillado\n");
                  printf("3. Accesorio Alcantarillado\n");
                  printf("4. Silla de Alcantarillado\n");
                  printf("5. Tubo 6 x 6m Alcantarillado\n");
                  printf("6. 6' x 6 metros tubo sanitario\n");
                  printf("7. Sello Elastomerico\n");
                  printf("8. Ducto 2.5 pulgada\n");
                  printf("9. Ducto flexible 4x8 aluminio\n");
                  printf("10. Salir\n");
                  scanf("%d",&h);

              do{

                switch(h)
                 {
                    case 0:
                        system("cls");
                        if(doca == NULL)
                        {
                          printf("\t\t\tError el archivo no existe\n");
                          printf("\t\t\tPresione 1 para volver 2 para salir");
                          scanf("%d",&volver);

                               if(volver == 1 )
                               {
                                    system("pause");
                                    tool = false;
                               }
                               else
                               {
                                   repite = false;
                               }
                        }
                           while((c = getc(doca)) != EOF)
                        {
                                if(c == '\n')
                                {
                                   printf("\n");
                                }
                                else
                                {
                                  printf("%c",c);
                                }
                        }
                        printf("\n\n");
                        printf("\t\t\tPresione 1 para volver, 2 para salir\n\n");
                        scanf("%d",&volver);
                        if(volver == 1)
                        {
                            tool = false;
                        }
                        else
                        {
                            return 0;
                        }

                      break;

                      case 1:
                         system("cls");
                        if(doca == NULL)
                        {
                          printf("\t\t\tError el archivo no existe\n");
                          printf("\t\t\tPresione 1 para volver 2 para salir");
                          scanf("%d",&volver);

                               if(volver == 1 )
                               {
                                    system("pause");
                                    tool = false;
                               }
                               else
                               {
                                   repite = false;
                               }
                        }
                           while((c = getc(docb)) != EOF)
                        {
                                if(c == '\n')
                                {
                                   printf("\n");
                                }
                                else
                                {
                                  printf("%c",c);
                                }
                        }
                        printf("\n\n");
                        printf("\t\t\tPresione 1 para volver, 2 para salir\n\n");
                        scanf("%d",&volver);
                        if(volver == 1)
                        {
                            tool = false;
                        }
                        else
                        {
                            return 0;
                        }

                      break;


                      case 2:
                        system("cls");
                        if(docc == NULL)
                        {
                          printf("\t\t\tError el archivo no existe\n");
                          printf("\t\t\tPresione 1 para volver 2 para salir");
                          scanf("%d",&volver);

                               if(volver == 1 )
                               {
                                    system("pause");
                                    tool = false;
                               }
                               else
                               {
                                   repite = false;
                               }
                        }
                           while((c = getc(docc)) != EOF)
                        {
                                if(c == '\n')
                                {
                                   printf("\n");
                                }
                                else
                                {
                                  printf("%c",c);
                                }
                        }
                        printf("\n\n");
                        printf("\t\t\tPresione 1 para volver, 2 para salir\n\n");
                        scanf("%d",&volver);
                        if(volver == 1)
                        {
                            tool = false;
                        }
                        else
                        {
                            return 0;
                        }
                      break;
                      case 3:
                          system("cls");
                        if("Herramientas.txt" == NULL)
                        {
                          printf("Error el archivo no existe\n");
                        }
                      break;
                      case 4:
                         system("cls");
                        if("Herramientas.txt" == NULL)
                        {
                          printf("Error el archivo no existe\n");
                        }
                      break;
                      case 5:
                          system("cls");
                        if("Herramientas.txt" == NULL)
                        {
                          printf("Error el archivo no existe\n");
                        }
                      break;
                      case 6:
                         system("cls");
                        if("Herramientas.txt" == NULL)
                        {
                          printf("Error el archivo no existe\n");
                        }
                      break;
                      case 7:
                         system("cls");
                        if("Herramientas.txt" == NULL)
                        {
                          printf("Error el archivo no existe\n");
                        }
                      break;
                      case 8:
                         system("cls");
                        if("Herramientas.txt" == NULL)
                        {
                          printf("Error el archivo no existe\n");
                        }
                      break;
                      case 9:
                         system("cls");
                        if("Herramientas.txt" == NULL)
                        {
                          printf("Error el archivo no existe\n");
                        }
                      break;
                     case 10:
                        system ("cls");
                        tool = false;
                        system ("pause");
             }
                 }while(tool);
             system("pause");
             break;

         case 2:

             system("cls");
             printf("\t\t\tIngrese el codigo del material: \n");

            for(b = 0; b<1 ; b++)
            {
                scanf("%s",&j);
                code[j]= j;

              if(j != 123)
              {
                  printf("Codigo incorrecto!\n");
              }
              else
              {
                   while((c = getc(doca)) != EOF)
                        {
                                if(c == '\n')
                                {
                                   printf("\n");
                                }
                                else
                                {
                                  printf("%c",c);
                                }
                        }
              }

            }
             system("pause");
             break;
          case 3:

             break;
         case 4:
            system("cls");

            repite = false;

            break;

   }


}while(repite);

  fclose(doca);
  fclose(docb);
  fclose(docc);
  return 0;
}
*/

void menu();
void sub_menu();

int main(){

menu();
return 0;
}

void menu(){
int opc;
bool repite = true;

do{
        printf("opcion 1\n");
        printf("opcion 2\n");
        printf("opcion 3\n");
        printf("Salir 4\n");

        scanf("%d",&opc);

    switch(opc){
    case 1:
        printf("opcion 1\n");
        sub_menu();
    break;
    case 2:
        printf("opcion 2\n");
    break;
    case 3:
        printf("opcion 3\n");
    break;
    case 4:
        repite = false;
    break;
    }
}while(repite);
}

void sub_menu(){

int opc;
bool repite = true;

do{
        printf("opcion 1\n");
        printf("opcion 2\n");
        printf("opcion 3\n");
        printf("Salir 4\n");

        scanf("%d",&opc);

    switch(opc){
    case 1:
        printf("opcion 1\n");
    break;
    case 2:
        printf("opcion 2\n");
    break;
    case 3:
        printf("opcion 3\n");
    break;
    case 4:
        repite = false;
    break;
    }
}while(repite);
}
