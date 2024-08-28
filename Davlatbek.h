// Massiv elementlarini toqlarini chiqaruvchi funksiya;
void toq(int A[],int n){
    printf("Toqlar: \n");
    for (int i=0; i<n; i++)
    {
        if (A[i]%2==1)
        {
            printf ("%d\t",A[i]);
        }
    }
}
//Massiv elementlarini toqlarini yig'indisini topish funksiyasi;
int toq_sum(int A[],int n){
    int toq_yig=0;
    for (int i=0; i<n; i++)
    {
        if (A[i]%2==1)
        {
            toq_yig+=A[i];
        }
    }
    return toq_yig;
}
//Massiv elementlarini toqlari sonini topish funksiyasi;
int toq_son(int A[],int n){
    int toq_son=0;
    for (int i=0; i<n; i++)
    {
        if (A[i]%2==1)
        {
            toq_son++;
        }
    }
    return toq_son;
}
//Massiv elemntlarini juftlarini chiqaruvchi funksiyaga;
void juft(int A[],int n){
    printf("Juftlar: \n");
    for (int i=0; i<n; i++)
    {
        if (A[i]%2==0)
        {
            printf ("%d\t",A[i]);
        }
    }
}
//Massiv elemntlarini juftlarini yig‘indisini qaytaruvchi funksiya;
int juft_sum(int A[],int n){
    int juft_yig=0;
    for (int i=0; i<n; i++)
    {
        if (A[i]%2==0)
        {
            juft_yig+=A[i];
        }
    }
    return juft_yig;
}
//Massiv elementlarini juftlarini sonini qaytaruvchi funksiya;
int juft_son (int A[],int n){
    int juft_son=0;
    for (int i=0; i<n; i++)
    {
        if (A[i]%2==0)
        {
            juft_son++;
        }
    }
    return juft_son;
}
//Massiv elemntlarini manfiylarini chiqaruvchi funksiya;
void man(int A[],int n){
    printf("manfiylari: \n");
    for (int i=0; i<n; i++)
    {
        if (A[i]<0)
        {
            printf ("%d\t",A[i]);
        }
    }
}
//Massiv elemntlarini manfiylarini yig‘indisini qaytaruvchi funksiya;
int man_sum(int A[],int n){
    int man_yig=0;
    for (int i=0; i<n; i++)
    {
        if (A[i]<0)
        {
           man_yig+=A[i];
        }
    }
    return man_yig;
}
//Massiv elemntlarini manfiylarini sonini qaytaruvchi funksiya;
int man_son(int A[],int n){
    int man_son=0;
    for (int i=0; i<n; i++)
    {
        if (A[i]<0)
        {
           man_son++;
        }
    }
    return man_son;
}
//Massiv elemntlarini musbatlarini chiqaruvchi funksiya;
void mus(int A[],int n){
    printf("musbatlari: \n");
    for (int i=0; i<n; i++)
    {
        if (A[i]>0)
        {
            printf ("%d\t",A[i]);
        }
    }
}
//Massiv elemntlarini musbatlarini yig‘indisini qaytaruvchi funksiya ;
int mus_sum(int A[],int n){
    int mus_sum=0;
    for (int i=0; i<n; i++)
    {
        if (A[i]>0)
        {
           mus_sum+=A[i];
        }
    }
    return mus_sum;
}
//Massiv elementlarini musbatlarini sonlari yig'indisini qaytaruvchi funksiya;
int mus_son(int A[],int n){
    int mus_son=0;
    for (int i=0; i<n; i++)
    {
        if (A[i]>0)
        {
           mus_son++;
        }
    }
    return mus_son;
}
//Massiv elemntlarini tublari chiqaruvchi funksiya;
void tub(int A[],int n){
    printf("tublari: \n");
    int z=0;
    for (int i=0; i<n; i++)
    {
        z=0;
        for (int j=2; j<A[i]; j++)
        {
            if (A[i]%j==0)
            {
                z=1;
                break;
            }
        }
        if (z==0)
        {
            printf("%d\t",A[i]);
        }
    }
}
//Massiv elemntlarini tublarini yig‘indisini qaytaruvchi funksiya;
int tub_sum(int A[],int n){
    int z=0,sum=0;
    for (int i=0; i<n; i++)
    {
        z=0;
        for (int j=2; j<A[i]; j++)
        {
            if (A[i]%j==0)
            {
                z=1;  
                break; 
            }
        }
        if (z==0)
        {
           sum+=A[i];
        }
    }
    return sum;
}
//Massiv elemntlarini tublarini yig‘indisini qaytaruvchi funksiya;
int tub_son(int A[],int n){
    int z=0,son=0;
    for (int i=0; i<n; i++)
    {
        z=0;
        for (int j=2; j<A[i]; j++)
        {
            if (A[i]%j==0)
            {
                z=1;   
                break;
            }
        }
        if (z==0)
        {
           son++;
        }
    }
    return son;
}