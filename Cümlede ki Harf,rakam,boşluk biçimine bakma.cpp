#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>

using namespace std;

char cumle[100];
int i=0,j=0,b=0,k=0,t=0,r=0; // Deðiþkenler tamýmlandý.

 main()
 {
 	setlocale(LC_ALL, "Turkish"); // Türkçe karekter belirtildi.
 	
    printf("Cümlenizi girin =\n"); // Cümle girimesi.
    gets(cumle);
    
	j=strlen(cumle);
    for(;i<j;i++){
        
        
		if(islower(cumle[i])) k++; // Küçük harf komudu
        else if(isupper(cumle[i])) b++; // Büyük harf komudu
        else if(cumle[i]==' ') // Boþluk sayma sayacý
        {
        	t++;
		}
		else if (cumle[i]==' ') //Rakam sayýcý
		r++;
	}

    cout << "Sonuc = \n";
    printf("Büyük Harf Sayýsý = %d adet\nKüçük Harf Sayýsý = %d adet\nGirilen Boþluk Sayýsý = %d adet\nGirilen Rakam Sayýsý = %d adet\n",b,k,t,r); // SOnuç için ekrana yansýtma
  
    return 0;
}
