#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>

using namespace std;

char cumle[100];
int i=0,j=0,b=0,k=0,t=0,r=0; // De�i�kenler tam�mland�.

 main()
 {
 	setlocale(LC_ALL, "Turkish"); // T�rk�e karekter belirtildi.
 	
    printf("C�mlenizi girin =\n"); // C�mle girimesi.
    gets(cumle);
    
	j=strlen(cumle);
    for(;i<j;i++){
        
        
		if(islower(cumle[i])) k++; // K���k harf komudu
        else if(isupper(cumle[i])) b++; // B�y�k harf komudu
        else if(cumle[i]==' ') // Bo�luk sayma sayac�
        {
        	t++;
		}
		else if (cumle[i]==' ') //Rakam say�c�
		r++;
	}

    cout << "Sonuc = \n";
    printf("B�y�k Harf Say�s� = %d adet\nK���k Harf Say�s� = %d adet\nGirilen Bo�luk Say�s� = %d adet\nGirilen Rakam Say�s� = %d adet\n",b,k,t,r); // SOnu� i�in ekrana yans�tma
  
    return 0;
}
