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
    cout<<"\n         * Ganarás 5 puntos si la respuesta es correcta.";
    cout<<"\n         * Si no aciertas no ganas ni pierdes puntos. \n";




    cout<<"\n   [II] Elige un área específica que deseas practicar: ";
    cout<<"\n         1. Razonamiento Matemático ";
    cout<<"\n         2. Razonamiento Verbal ";
    cout<<"\n         3. Matemática I ";
    cout<<"\n         4. Matemática II ";
    cout<<"\n         5. Biología ";
    cout<<"\n         6. Física ";
    cout<<"\n         7. Química ";
    cout<<"\n         8. Economía ";
    cout<<"\n         9. Historia ";
    cout<<"\n         10. Comunicación ";
    cout<<"\n         11. Literatura ";
    cout<<"\n         12. Psicología y Filosofía ";
    cout<<"\n         13. Geografía ";
    cout<<"\n         14. Educación Cívica \n";


    cout<<"\n         Elige el número de la opción que eligió: ";

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
                    cout<<j<<". "<<"Con 195 soles se compró cuadernos de 7,8 y 13 soles, respectivamente. ¿Cuántos cuadernos se compró, si en total se compró el máximo número de cuadernos y por los menos se compró uno de cada precio?: \n\n";


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
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 años y tu edad es el triple de la edad que tenías cuando yo tenía el triple de la edad que tuviste cuando yo nací. ¿Cuántos años tiene Luciana actualmente? \n\n";


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
                    cout<<"    Respuesta correcta! Tu puntaje total son ¡"<<puntaje<<" puntos! \n\n";
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
                    cout<<j<<". "<<"En la expresión: Carlos Fernando fue a la casa de Hugo y allí vio a su padre.\n";
                    cout<<"   ¿En qué vicio de dicción se incurre? \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Solecismo",
                    "Monotonía",
                    "Cacofonía",
                    "Anfibología",
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
                    cout<<j<<". "<<"El sinónimo de MEFÍTICO es: \n\n";


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
                    cout<<j<<". "<<"El antónimo de POLIFAGIA es: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Prudencia",
                    "Restricción",
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
                    cout<<"    Respuesta correcta! Tu puntaje total son ¡"<<puntaje<<" puntos! \n\n";
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
                    cout<<j<<". "<<"Marcos se va al hospital cada 15 días, María cada 12 días y Rosa cada 18 días. Si el 26 de Mayo se encontraron los tres en el hospital. ¿Cuál será la fecha más próxima en la cual se encontrarán nuevamente los tres en el hospital? \n\n";


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
                    cout<<j<<". "<<"De un grupo de 1800 estudiantes el número de los que solo rindieron el segundo examen, es la mitad de los que rindieron solo el primer examen es el triple de los que rindieron ambos exámenes e igual al de los que no rindieron ningún examen. ¿Cuántos rindieron al menos unn examen? \n\n";


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
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 años y tu edad es el triple de la edad que tenías cuando yo tenía el triple de la edad que tuviste cuando yo nací. ¿Cuántos años tiene Luciana actualmente? \n\n";


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
                    cout<<"    Respuesta correcta! Tu puntaje total son ¡"<<puntaje<<" puntos! \n\n";
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
                    cout<<j<<". "<<"En el triángulo acutángulo ABC, se tiene las alturas AH y CQ, Si: AB, AQ=24 y CB, CH=25 Determine: AC \n\n";


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
                    cout<<j<<". "<<"Dos edificios separados por una calle de 20 m de ancho, se observan las partes más altas desde el punto medio de la calle con ángulos de elevación que son complementarios. Dtermine el producto de sus respectivas alturas. \n\n";


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
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 años y tu edad es el triple de la edad que tenías cuando yo tenía el triple de la edad que tuviste cuando yo nací. ¿Cuántos años tiene Luciana actualmente? \n\n";


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
                    cout<<"    Respuesta correcta! Tu puntaje total son ¡"<<puntaje<<" puntos! \n\n";
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
                    "Nucléolo",
                    "Núcleo",
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
                    cout<<j<<". "<<"En la relaciones biológicas interespecíficas de interacción negativa: Dos individuos luchan por la existencia, debido a que tienen el mismo nicho. Esta definición corresponde a: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Amensalismo",
                    "Comensalismo",
                    "Parasitismo",
                    "Depredación",
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
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 años y tu edad es el triple de la edad que tenías cuando yo tenía el triple de la edad que tuviste cuando yo nací. ¿Cuántos años tiene Luciana actualmente? \n\n";


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
                    cout<<"    Respuesta correcta! Tu puntaje total son ¡"<<puntaje<<" puntos! \n\n";
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
                    cout<<"    Calcule la velocidad angular mínima para que no caiga el aceite (g=10m/s2) \n\n";


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
                    cout<<j<<". "<<"Un motor eléctrico con una eficiencia de 0,8 mueve conos de hilo mediante una faja transportadora con una potencia de 20 kw durante 20 horas. Calcule la energía en kw-h que consume en dicho tiempo. \n\n";


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
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 años y tu edad es el triple de la edad que tenías cuando yo tenía el triple de la edad que tuviste cuando yo nací. ¿Cuántos años tiene Luciana actualmente? \n\n";


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
                    cout<<"    Respuesta correcta! Tu puntaje total son ¡"<<puntaje<<" puntos! \n\n";
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
                    cout<<j<<". "<<"¿Qué volumen ocupará 3 litros de un gas, si la presión cambia de 760 mm Hg a 380 mm Hg?  \n\n";


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
                    cout<<j<<". "<<"Indique el número de isómeros de cadena que presenta el compuesto de fórmula global C8H14 \n\n";


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
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 años y tu edad es el triple de la edad que tenías cuando yo tenía el triple de la edad que tuviste cuando yo nací. ¿Cuántos años tiene Luciana actualmente? \n\n";


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
                    cout<<"    Respuesta correcta! Tu puntaje total son ¡"<<puntaje<<" puntos! \n\n";
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
                    cout<<j<<". "<<"Un incremento del salario mínimo legal en 100% hará que un 25% más de estudiantes estén dispuestos a trabajar, entonces la oferta de mano de obra estuantil es: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Perfectamente inlástica",
                    "Perfectamente elástica",
                    "Inelástica",
                    "Unitaria",
                    "Elástica",
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
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 años y tu edad es el triple de la edad que tenías cuando yo tenía el triple de la edad que tuviste cuando yo nací. ¿Cuántos años tiene Luciana actualmente? \n\n";


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
                    cout<<"    Respuesta correcta! Tu puntaje total son ¡"<<puntaje<<" puntos! \n\n";
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
                    cout<<j<<". "<<"El señor de Sipán pertenece a la cultura \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Nazca",
                    "Moche",
                    "Chavín",
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
                    cout<<j<<". "<<"La aplicación de las técnicas de deshidratación de la papa y la carne en el antiguoo Perú se inicio con la cultura: \n\n";


                const int ARRAY_SIZE=5;
                srand(time(0));

                string Pregunta[ARRAY_SIZE]=
                {
                    "Tiahuanaco",
                    "Huarpa",
                    "Chavín",
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
                    cout<<j<<". "<<"Camila le dice a Luciana: La suma de nuestras edades es 46 años y tu edad es el triple de la edad que tenías cuando yo tenía el triple de la edad que tuviste cuando yo nací. ¿Cuántos años tiene Luciana actualmente? \n\n";


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
                    cout<<"    Respuesta correcta! Tu puntaje total son ¡"<<puntaje<<" puntos! \n\n";
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

