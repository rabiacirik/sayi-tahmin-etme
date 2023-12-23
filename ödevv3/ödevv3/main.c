//
//  main.c
//  ödevv3
//
//  Created by Rabia Cırık on 17.11.2023.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int rastgelesayi,sayitahmini,tahminsayisi=0;
            srand(time(NULL));
            rastgelesayi=(rand()%100)+1;//bilgisayar rastgele sayı tutar
            printf("Bilgisayar sizin için 1 ile 100 arasinda bir sayi tuttu\n");
    printf("hadi tahmin etmeye çalış\n");
      
            
            while(rastgelesayi>0){
                printf("Bir sayi tahmin ediniz:");
                scanf("%d",&sayitahmini);
                tahminsayisi++;//kaç kerede tahmin ettiğini bulur
                if(sayitahmini<1 || sayitahmini>100){
                    printf("1 ile 100 arasinda demistim:) \n");
                    continue;//döngüyü başa gönderir
                }
                if(sayitahmini>rastgelesayi){
                    printf("Lütfen daha kucuk bir sayi giriniz:\n");
                }
                else if(sayitahmini<rastgelesayi){
                    printf("Lütfen daha buyuk bir sayi giriniz:\n");
                }
                else if(sayitahmini==rastgelesayi){
                    printf("Tebrikler dogru tahmin:) \n");
                    
                    break;//döngüyü bitir
                   
                }
                
                 
            }
        
       
     
        printf("tahmin sayısı=%d\n",tahminsayisi);    return 0;


    return 0;
}
