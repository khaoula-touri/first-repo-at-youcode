#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20];
    char prenom[20];
    int age;
    char sexe[20];
    char email[20];

    printf("donner votre nom: \n");
    scanf("%s",&nom);
    printf("donner votre prenom: \n");
    scanf("%s",&prenom);
    printf("donner votre age: \n");
    scanf("%d",&age);
    printf("donner votre sexe: \n");
    scanf("%s",&sexe);
    printf("donner votre email: \n");
    scanf("%s",&email);
    printf("nom : %s \n ",nom );
    printf("prenom :%s \n",prenom);
    printf("age : %d \n",age);
    printf("sexe : %s \n",sexe);
    printf("email :%s \n", email);


    return 0;
}
CHALLENGE 2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c ;
    float k ;
    printf("donner la temperature c : \n");
    scanf("%f",&c);
    k = c + 273.15;
    printf("la resultat est : %.2f",k);




    return 0;
}
CHALLENGE 3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km ;
    float Yard ;
    printf("donner la temperature c : \n");
    scanf("%f",&km);
    Yard = km * 1093.61;
    printf("la resultat est : %.2f",Yard);




    return 0;
}
challenge4
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ms;
    float kmh;

    printf("donner la vitesse en kmh: \n");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("la resultat est : %.2f",ms);




    return 0;
}
challenge 5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;


    printf("donner la temperature c: \n");
    scanf("%f",&C);
    if(C<0)
        printf("solide \n");
    else if(0<=C && C<100)
        printf("liquide \n");
    else
        printf("Gaz \n");







    return 0;
}
CHALLENGE 6
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float somme;
    float moin;
    float produi;
    float devision;
    printf("donner le nembre a: \n");
    scanf("%f",&a);
    printf("donner le nembre b :\n");
    scanf("%f",&b);
    somme=a+b;
    moin=a-b;
    produi=a*b;
    devision=a/b;
    printf("somme,%f",somme);
    printf("moin,%f",moin);
    printf("produi,%f",produi);
    printf("devision,%f",devision);















    return 0;
}
CHLLENGE7
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float C;
    float m;
    printf("donner la premier nembre a: \n");
    scanf("%f",&a);
    printf("donner la dexieme nembre b :\n");
    scanf("%f",&b);
    printf("donner la nembre c :\n");
    scanf("%f",&C),
    m=(a*2+b*3+C*5)/3;
    printf("la moyennede cette nombreest : %.2f \n",m);

















    return 0;
}
challenge 8
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A;
    float B;
    float C;
    float MG;
    printf("Donner le premier nembre A : \n");
    scanf("%f",&A);
    printf("Donner le douxieme nembre B : \n");
    scanf("%f",&B);
    printf("Donner le troisieme nembre C :\n");
    scanf("%f",&C),
    MG=pow((A*B*C),(1/3));

    printf("la moyennede geomitrique cette nombrees : %.2f \n",MG);


    return 0;
}
challenge 9
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,x2,y1,y2,z1,z2;
    float Distance;
    printf("Donner le piont x1: \n");
    scanf("%f",&x1);
    printf("Donner le piont x2 : \n");
    scanf("%f",&x2);
    printf("Donner le piont y1:\n");
    scanf("%f",&y1);
    printf("Donner le piont y2:\n");
    scanf("%f",&y2);
    printf("Donner le piont z1 :\n");
    scanf("%f,&z1");
    printf("Donner le piont z2 :\n");
    scanf("%f,&z2");
    Distance=sqrt(pow((x2-x1),2)+((y2-y1),2)+pow((z2-z1),2));


    printf("la distance est  : %.2f \n",Distance);


    return 0;
}
CHALLENGE 10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r ;
    const pi=3.14;
    float volume;
    printf("Donner le rayon r : \n");
    scanf("%f",&r);
    volume = (4/3) * pi * pow(r,3);



    printf("le volume est  : %.2f \n",volume);


    return 0;
}
challenge 11
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float largeur;
    float longeur;
    float surface;
    printf("Donner largeur : \n");
    scanf("%f",&largeur);
    printf("donner longeur : \n");
    scanf("%f",&longeur);
    surface=longeur*largeur;

    printf("la surface est  : %.2f \n",surface);


    return 0;
}
challenge 12
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int NbrInverse = 0, nbr;

   printf("Entrez un nombre à inverser\n");
   scanf("%d", &nbr);

   while (nbr != 0)
   {
      NbrInverse = NbrInverse * 10;
      NbrInverse = NbrInverse + nbr%10;
      nbr = nbr/10;
   }

   printf("Le nombre en sens inverse est = %d\n", NbrInverse);

   return 0;
}







