challenges boucle
challenge1
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i;
    printf("Donner le nembre n : ");
    scanf("%d",&n);
    for(i=10;i>=1;i--) {
        printf("la vzleur de facteur de nombre %d * %d est : %d \n",n,i,i*n);


    }

        return 0;
    }
challenge 3
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i;
    printf("Donner le nembre n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
            if(n%i==0){
                printf("voila le nombre premier jusqu'a n%d \n",i+1);
            }



    }

        return 0;
    }

challene 4
#include <stdlib.h>
#include <math.h>

int main()
{
    int Ninv=0, n;

    printf("Donner le nembre n : ");
    scanf("%d",&n);
    while (n!=0){
        Ninv = Ninv * 10 ;
        Ninv=Ninv + n % 10 ;
        n = n / 10 ;


            }

         printf("l'inversse de %d est : %d",n,Ninv);
        return 0;
    }

challenge 5
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i;
    int somme;

    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        somme=somme+i;
    }


    printf("la somme de toute nonmbre jusqu'a n est %d est : %d",somme);







        return 0;
    }

challenge 6
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i;


    printf("Donner le nombre n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    if(n%i==0){
    printf("voila les facteurs de ce nombre  %d\n",i);
         }
    }










        return 0;
    }

challenge 15
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i;
    int f=1;

    printf("Donner le nombre n : ");
    scanf("%d",&n);
    if(n<0){
            printf("le nombre obligés positif ! ");
}else if (n==0){
    printf("le factoriale de ce nombre est 1 !");

} else {
    for(i=1;i<=n;i++){
        f=f*i;
    }
     printf("le nombre de ce nombreest %d !",f);



    }
