#include <iostream>
#include <stdlib.h> //Para generar el numero aleatorio
#include <time.h>   //Para que no sea el mismo numero aleatorio

#include <ctime>
#include <string.h>


#include <stdio.h>
#include <conio.h>

#include <string>  //Para la cadena de caracteres


#include <locale.h>  // Para poder colocar las tildes

using namespace std;

int main ()
{
    system("color 0A");

    setlocale(LC_CTYPE, "Spanish");

    int opcion, puntaje=0;







    cout<<"\n                                       ==== SIMUEXAMEN ==== \n";
    cout<<"\n   [I]   REGLAS: \n";
    cout<<"\n         * Debes ecribir la respuesta tal y como se ve en la alternativa que elegiste.";
    cout<<"\n         * Ganar�s 5 puntos si la respuesta es correcta.";
    cout<<"\n         * Si no aciertas no ganas ni pierdes puntos. \n";




    cout<<"\n   [II] Elige un �rea espec�fica que deseas practicar: ";
    cout<<"\n         1. Razonamiento Matem�tico ";
    cout<<"\n         2. Razonamiento Verbal ";
    cout<<"\n         3. Matem�tica I ";
    cout<<"\n         4. Matem�tica II ";
    cout<<"\n         5. Biolog�a ";
    cout<<"\n         6. F�sica ";
    cout<<"\n         7. Qu�mica ";
    cout<<"\n         8. Econom�a ";
    cout<<"\n         9. Historia ";
    cout<<"\n         10. Comunicaci�n ";
    cout<<"\n         11. Literatura ";
    cout<<"\n         12. Psicolog�a y Filosof�a ";
    cout<<"\n         13. Geograf�a ";
    cout<<"\n         14. Educaci�n C�vica \n";


    cout<<"\n         Elige el n�mero de la opci�n que eligi�: ";

    cin>>opcion;
    cout<<"\n";



    if(opcion==1)
    {
            for(int j=0;j<3;j++)
            {

                if(j=1)
                {
                    cout<<j<<". "<<"Calcule la siguiente suma: S= 1x3 + 3x5 + 5x7 + 7x9 + ...  Son 20 sumandos. \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "32506",
                    "10534",
                    "11460",
                    "12510",
                    "2830",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "11460";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";
                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }

                }


                if(j=2)
                {
                    cout<<j<<". "<<"Con 195 soles se compr� cuadernos de 7,8 y 13 soles, respectivamente. �Cu�ntos cuadernos se compr�, si en total se compr� el m�ximo n�mero de cuadernos y por los menos se compr� uno de cada precio?: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "23",
                    "25",
                    "26",
                    "30",
                    "24",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "26";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";

                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }



                if(j=3)
                {
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 a�os y tu edad es el triple de la edad que ten�as cuando yo ten�a el triple de la edad que tuviste cuando yo nac�. �Cu�ntos a�os tiene Luciana actualmente? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "8",
                    "18",
                    "12",
                    "24",
                    "36",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "24";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tu puntaje total son �"<<puntaje<<" puntos! \n\n";
                }
                else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }
            }
        }












        if(opcion==2)
    {
            for(int j=0;j<3;j++)
            {

                if(j=1)
                {
                    cout<<j<<". "<<"En la expresi�n: Carlos Fernando fue a la casa de Hugo y all� vio a su padre.\n";
                    cout<<"   �En qu� vicio de dicci�n se incurre? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Solecismo",
                    "Monoton�a",
                    "Cacofon�a",
                    "Anfibolog�a",
                    "Barbarismo",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "Anfibologia";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";
                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }

                }


                if(j=2)
                {
                    cout<<j<<". "<<"El sin�nimo de MEF�TICO es: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Expansivo",
                    "Insipido",
                    "Corrosivo",
                    "Inodoro",
                    "Irrespirable",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "Irrespirable";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";

                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }



                if(j=3)
                {
                    cout<<j<<". "<<"El ant�nimo de POLIFAGIA es: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Prudencia",
                    "Restricci�n",
                    "Parquedad",
                    "Anorexia",
                    "Laconismo",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "Anorexia";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tu puntaje total son �"<<puntaje<<" puntos! \n\n";
                }
                else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }
            }
        }











        if(opcion==3)
    {
            for(int j=0;j<3;j++)
            {

                if(j=1)
                {
                    cout<<j<<". "<<"Marcos se va al hospital cada 15 d�as, Mar�a cada 12 d�as y Rosa cada 18 d�as. Si el 26 de Mayo se encontraron los tres en el hospital. �Cu�l ser� la fecha m�s pr�xima en la cual se encontrar�n nuevamente los tres en el hospital? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "24desetiembre",
                    "24deoctubre",
                    "24denoviembre",
                    "22denoviembre",
                    "23desetiembre",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "22denoviembre";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";
                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }

                }


                if(j=2)
                {
                    cout<<j<<". "<<"De un grupo de 1800 estudiantes el n�mero de los que solo rindieron el segundo examen, es la mitad de los que rindieron solo el primer examen es el triple de los que rindieron ambos ex�menes e igual al de los que no rindieron ning�n examen. �Cu�ntos rindieron al menos unn examen? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "900",
                    "1000",
                    "1200",
                    "1600",
                    "1400",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "900";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";

                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }



                if(j=3)
                {
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 a�os y tu edad es el triple de la edad que ten�as cuando yo ten�a el triple de la edad que tuviste cuando yo nac�. �Cu�ntos a�os tiene Luciana actualmente? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "8",
                    "18",
                    "12",
                    "24",
                    "36",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "24";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tu puntaje total son �"<<puntaje<<" puntos! \n\n";
                }
                else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }
            }
        }










        if(opcion==4)
    {
            for(int j=0;j<3;j++)
            {

                if(j=1)
                {
                    cout<<j<<". "<<"En el tri�ngulo acut�ngulo ABC, se tiene las alturas AH y CQ, Si: AB, AQ=24 y CB, CH=25 Determine: AC \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "15",
                    "12",
                    "14",
                    "7",
                    "5",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "7";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";
                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }

                }


                if(j=2)
                {
                    cout<<j<<". "<<"Dos edificios separados por una calle de 20 m de ancho, se observan las partes m�s altas desde el punto medio de la calle con �ngulos de elevaci�n que son complementarios. Dtermine el producto de sus respectivas alturas. \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "40",
                    "60",
                    "80",
                    "100",
                    "20",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "100";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";

                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }



                if(j=3)
                {
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 a�os y tu edad es el triple de la edad que ten�as cuando yo ten�a el triple de la edad que tuviste cuando yo nac�. �Cu�ntos a�os tiene Luciana actualmente? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "8",
                    "18",
                    "12",
                    "24",
                    "36",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "24";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tu puntaje total son �"<<puntaje<<" puntos! \n\n";
                }
                else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }
            }
        }





        if(opcion==5)
    {
            for(int j=0;j<3;j++)
            {

                if(j=1)
                {
                    cout<<j<<". "<<"Las reacciones del ciclo de Krebs se realizan en la matriz del: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Aparato de golgi",
                    "Mitocondria",
                    "Ribosoma",
                    "Nucl�olo",
                    "N�cleo",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "Mitocondria";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";
                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }

                }


                if(j=2)
                {
                    cout<<j<<". "<<"En la relaciones biol�gicas interespec�ficas de interacci�n negativa: Dos individuos luchan por la existencia, debido a que tienen el mismo nicho. Esta definici�n corresponde a: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Amensalismo",
                    "Comensalismo",
                    "Parasitismo",
                    "Depredaci�n",
                    "Competencia",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "Competencia";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";

                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }



                if(j=3)
                {
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 a�os y tu edad es el triple de la edad que ten�as cuando yo ten�a el triple de la edad que tuviste cuando yo nac�. �Cu�ntos a�os tiene Luciana actualmente? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "8",
                    "18",
                    "12",
                    "24",
                    "36",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "24";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tu puntaje total son �"<<puntaje<<" puntos! \n\n";
                }
                else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }
            }
        }









        if(opcion==6)
    {
            for(int j=0;j<3;j++)
            {

                if(j=1)
                {
                    cout<<j<<". "<<"Un vaso con aceite describe un movimineto circular uniforme mediante un hilo de 2,5 m de longitud; el movimiento se realiza en un plano vertical.\n";
                    cout<<"    Calcule la velocidad angular m�nima para que no caiga el aceite (g=10m/s2) \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "1,5rad/s",
                    "1rad/s",
                    "4rad/s",
                    "3rad/s",
                    "2rad/s",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "2rad/s";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";
                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }

                }


                if(j=2)
                {
                    cout<<j<<". "<<"Un motor el�ctrico con una eficiencia de 0,8 mueve conos de hilo mediante una faja transportadora con una potencia de 20 kw durante 20 horas. Calcule la energ�a en kw-h que consume en dicho tiempo. \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "300kw-h",
                    "400kw-h",
                    "200kw-h",
                    "500kw-h",
                    "600kw-h",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "500kw-h";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";

                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }



                if(j=3)
                {
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 a�os y tu edad es el triple de la edad que ten�as cuando yo ten�a el triple de la edad que tuviste cuando yo nac�. �Cu�ntos a�os tiene Luciana actualmente? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "8",
                    "18",
                    "12",
                    "24",
                    "36",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "24";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tu puntaje total son �"<<puntaje<<" puntos! \n\n";
                }
                else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }
            }
        }







        if(opcion==7)
    {
            for(int j=0;j<3;j++)
            {

                if(j=1)
                {
                    cout<<j<<". "<<"�Qu� volumen ocupar� 3 litros de un gas, si la presi�n cambia de 760 mm Hg a 380 mm Hg?  \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "6litros",
                    "4litros",
                    "10litros",
                    "12litros",
                    "8litros",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "6litros";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";
                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }

                }


                if(j=2)
                {
                    cout<<j<<". "<<"Indique el n�mero de is�meros de cadena que presenta el compuesto de f�rmula global C8H14 \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "6",
                    "5",
                    "4",
                    "3",
                    "2",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "5";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";

                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }



                if(j=3)
                {
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 a�os y tu edad es el triple de la edad que ten�as cuando yo ten�a el triple de la edad que tuviste cuando yo nac�. �Cu�ntos a�os tiene Luciana actualmente? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "8",
                    "18",
                    "12",
                    "24",
                    "36",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "24";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tu puntaje total son �"<<puntaje<<" puntos! \n\n";
                }
                else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }
            }
        }








        if(opcion==8)
    {
            for(int j=0;j<3;j++)
            {

                if(j=1)
                {
                    cout<<j<<". "<<"Un incremento del salario m�nimo legal en 100% har� que un 25% m�s de estudiantes est�n dispuestos a trabajar, entonces la oferta de mano de obra estuantil es: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Perfectamente inl�stica",
                    "Perfectamente el�stica",
                    "Inel�stica",
                    "Unitaria",
                    "El�stica",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "Inelastica";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";
                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }

                }


                if(j=2)
                {
                    cout<<j<<". "<<"La carne de hamburguesa es un bien..... del pan y la lechuga. \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Normal",
                    "Libre",
                    "Complementario",
                    "Sustituto",
                    "Inferior",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "Complementario";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";

                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }



                if(j=3)
                {
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 a�os y tu edad es el triple de la edad que ten�as cuando yo ten�a el triple de la edad que tuviste cuando yo nac�. �Cu�ntos a�os tiene Luciana actualmente? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "8",
                    "18",
                    "12",
                    "24",
                    "36",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "24";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tu puntaje total son �"<<puntaje<<" puntos! \n\n";
                }
                else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }
            }
        }







        if(opcion==9)
    {
            for(int j=0;j<3;j++)
            {

                if(j=1)
                {
                    cout<<j<<". "<<"El se�or de Sip�n pertenece a la cultura \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Nazca",
                    "Moche",
                    "Chav�n",
                    "Tiahuanaco",
                    "Huarpa",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "Moche";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";
                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }

                }


                if(j=2)
                {
                    cout<<j<<". "<<"La aplicaci�n de las t�cnicas de deshidrataci�n de la papa y la carne en el antiguoo Per� se inicio con la cultura: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Tiahuanaco",
                    "Huarpa",
                    "Chav�n",
                    "Aymara",
                    "Nazca",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "Aymara";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tienes en total "<<puntaje<<" puntos \n\n";

                }else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }



                if(j=3)
                {
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 a�os y tu edad es el triple de la edad que ten�as cuando yo ten�a el triple de la edad que tuviste cuando yo nac�. �Cu�ntos a�os tiene Luciana actualmente? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "8",
                    "18",
                    "12",
                    "24",
                    "36",
                };

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    int index = rand() % ARRAY_SIZE;

                    string temp = Pregunta [i];
                    Pregunta [i] = Pregunta [index];
                    Pregunta [index] = temp;
                }

                for (int i=0; i<ARRAY_SIZE;i++)
                {
                    cout<<"    "<<Pregunta[i]<<endl;
                }




                char respuesta[] = "24";
                char buffer[80];

                printf ("\n    Escribe la respuesta correcta: ");
                fflush (stdout);
                scanf ("%79s",buffer);
                if (strcmp (respuesta,buffer) == 0)
                {
                    puntaje=puntaje+5;
                    cout<<"    Respuesta correcta! Tu puntaje total son �"<<puntaje<<" puntos! \n\n";
                }
                else{
                    cout<<"    Respuesta incorrecta!\n\n";
                }
                }
            }
        }












    getch();
    return 0;
}

