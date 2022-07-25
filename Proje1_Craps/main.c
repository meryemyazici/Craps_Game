#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int zar1,zar2 ,toplam1,toplam2;

    zar1 = 1+ (rand()%6);  // zar araligi 1-6
    zar2 = 1+ (rand()%6);  // zar araligi 1-6
    toplam1=zar1+zar2;

    printf("1.zar = %d\n",zar1);
    printf("2.zar = %d\n",zar2);
    printf("PUAN = %d\n",toplam1);

    if(toplam1==7 || toplam1==11) //ilk durumda atilan zarlarin toplami 7 veya 11 ise oyunu kazanacak
    {
        printf("Kazandin\n");
    }
    else if(toplam1 ==2 || toplam1==3 || toplam1==12) //ilk durumda atilan zarlarin toplami 2,3 veya 12 ise oyunu kaybedecek
    {
        printf("Kaybettin\n");
    }
    else if(toplam1 ==4 || toplam1==5 || toplam1==6 || toplam1 ==8 || toplam1==9 || toplam1==10) // ilk durumda atilan zarlarin toplami 4-5-6-8-9-10 oldugu durumda while kosulu devreye girecek
    {
        printf("    #####  2.TUR  ##### ");

        while(toplam1!=toplam2 || toplam2!=7)  // dongu halindeki zarin toplam degeri 4-5-6-8-9-10 dan veya 7 den farkli olana kadar donecek
        {
            // while dongusunun kosulunu saglayana kadar zarlar tekrar atilacak
            zar1 = 1+ (rand()%6);  // zar araligi 1-6
            zar2 = 1+ (rand()%6);  // zar araligi 1-6
            toplam2=zar1+zar2;

            printf("\n1.zar = %d\n",zar1);
            printf("2.zar = %d\n",zar2);
            printf("Zarlarinizin toplami %d\n",toplam2);

            if(toplam2==toplam1) //toplam1 degeri ilk zarlarin toplamiydi.Dongudeki degere esit olunca duracak
            {
                printf("Birinci ve ikinci deger esit kazandin\n");
                break;
            }
            else if(toplam2==7) //dongudeki toplam deger 7 olursa donguyu bitirecek
            {
                printf("Kaybettin 7 geldi\n");
                break;
            }
        }
    }
    return 0;
}


