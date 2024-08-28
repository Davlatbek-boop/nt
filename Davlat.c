#include <stdio.h>
#include "Davlatbek.h"
int main (){
    int A[100];
    int n;
    printf("N >>>");
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        printf("A[%d] >>>",i);
        scanf("%d",&A[i]);
    }
    toq(A,n);
    printf ("\ntoqlar yig'indisi = %d\n",toq_sum(A,n));
    printf ("toqlar soni = %d ta\n",toq_son(A,n));
    printf ("_________________________________________________________\n");
    juft(A,n);
    printf ("\njuftlar yig'indisi = %d\n",juft_sum(A,n));
    printf ("juftlar soni = %d ta\n",juft_son(A,n));
    printf ("_________________________________________________________\n");
    man(A,n);
    printf ("\nmanfiylar yig'indisi = %d\n",man_sum(A,n));
    printf ("manfiylar soni = %d ta\n",man_son(A,n));
    printf ("_________________________________________________________\n");
    mus(A,n);
    printf ("\nmusbatlar yig'indisi = %d\n",mus_sum(A,n));
    printf ("musbatlar soni = %d ta\n",mus_son(A,n));
    printf ("_________________________________________________________\n");
    tub(A,n);
    printf ("\ntublar yig'indisi = %d\n",tub_sum(A,n));
    printf ("tublar soni = %d ta\n",tub_son(A,n));
    printf ("_________________________________________________________\n");
}