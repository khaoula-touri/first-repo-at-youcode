challenge 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++){
       printf("%d",T[i]);
    }
   return 0;
}
chllenge 2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T [20];
    int i;
    int n;
    int nembre;
    printf("donner le nembre n" );
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf( "donner la valeur des nembre : \n" );
            scanf("%d",&T[i]);
            T[i]= nembre;
            printf("donner la valeur de nembre : %d \n",T[i]);

    }

   return 0;
}

challenge 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T [20];
    int i;
    int n;
    int nembre;
    int somme;
    printf("donner le nembre n" );
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf( "donner la valeur des nembre : \n" );
            scanf("%d",&T[i]);
            T[i]= nembre;
            somme=somme + nembre;
            printf("la somme totale de cette element est : %d \n",somme);

    }

   return 0;
}
challenge 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T [20];
    int i;
    int n;
    int nembre;
    int max=0;
    printf("donner le nembre n" );
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf( "donner la valeur des nembre : \n" );
            scanf("%d",&T[i]);
            T[i]= nembre;
            if (max<T[i]){

                max=T[i];
            }
            printf("la somme totale de cette element est : %d \n",max);

    }

   return 0;
}
challenge 5
#include <stdlib.h>
#include <math.h>

int main()
{
    int T [20];
    int i;
    int n;
    int nembre;
    int min;
    printf("donner le nembre n" );
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf( "donner la valeur des nembre : \n" );
            scanf("%d",&T[i]);
            T[i]= nembre;
            if (min<T[i]){

                min=T[i];
            }
            printf("la somme totale de cette element est : %d \n",min);

    }

   return 0;
}
challenge 6
#include <stdlib.h>
#include <math.h>

int main()
{
    int T [20];
    int i;
    int n;
    int nombre;
    int facteur;
    printf("donner le nombre n" );
    scanf("%d",&n);
    printf("Donner le facteur : ");
    scanf("%d",&facteur);
    for (i=0;i<n;i++) {
        printf("donner la valeur de nombres : ");
        scanf("%d",&nombre);
        T[i]= nombre*facteur;

    }
    for(i=0;i<n;i++) {
        printf("la valeur de facteur de nombre %d est : %d \n",i+1,T[i]);
    }


   return 0;
}
