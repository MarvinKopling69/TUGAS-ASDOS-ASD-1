#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilih; system("cls");
    printf("=====================\n");
    printf("      QUIS ASD     \n");
    printf("=====================\n");
    printf("==>");
    printf(" 1.Level 1\n");
    printf("    2.Level 2\n");
    printf("    3.Level 3\n");
    printf("    4.Exit\n");
    printf("=====================\n");
    printf("PILIH DONG:");
    scanf("\t%d", &pilih);

    switch(pilih){
    case 1:
        system("cls");
        leveli();
        getch();
        main();
        break;
    case 2:
        system("cls");
        levelii();
        getch();
        main();
        break;
    case 3:
        system("cls");
        leveliii();
        getch();
        main();
        break;
    case 4:
        system("cls");
        keluar();
        getch();
        break;
    default:
        if(pilih>4){
        system("cls");
        printf("MENU GAK ADA EGE");
        getch();
        main();
        }
    }
    return pilih;
}

void leveli()
{
    int panjang;
    int i,j;
    printf("Masukkan Panjang");
    scanf("%d", &panjang);
    for(int i=0; i<=panjang+1; i++){
        for(int j=0; j<i; j++){
            printf("%d", i-1+j);
        }
        printf("\n");
    }
}

int levelii()
{
    int i,j,k;
    printf("masukkan panjang brodiee:");
    scanf("%d",&k);
    for(int i=1; i<=k; i++){
        for(int j=1; j<=i; j++){
            printf("%d", j*i);
        }
        printf("\n");
    }
}

int leveliii()
{
    int i,j,panjang;
    printf("Masukan panjang (max 9): ");
    scanf("%d", &panjang);

    for(int i=0; i<panjang; i++){
        for(int j=i; j<panjang-1; j++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("%d", j+i);
        }
        for(int j=i; j>0; j--){
            printf("%d", j);
        }
        printf("\n");
    }


    for(int i=panjang-1; i>0; i--){
        for(int j=i; j<=panjang-1; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
                printf("%d",j);
        }
        for(int j=i-1; j>=1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
}

void keluar()
{
    printf("SORRY GAK SEMPURNA BRODIE");
}
