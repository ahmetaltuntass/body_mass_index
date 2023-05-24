#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main(void) {

	double kilo;
	double boy;
	double vki;


	printf("Metre cinsinden boyunuzu giriniz\n");
	scanf("%lf", &boy);
	printf("Kilonuzu giriniz\n");
	scanf("%lf", &kilo);

	vki = kilo / (boy * boy);
	
	printf("\n\nSizin vucut kitle indeksiniz %lf\n", vki);


	if (vki < 18.5) {
		printf("Ideal kilonun altindasiniz");
	}
     if (vki > 18.5 && vki < 24.9) {
		printf("Ideal kilodasiniz");
	}
	 if (vki > 25 && vki < 30) {
		 printf("Ideal kilonun cok ustundesiniz");
	 }
	 if (vki > 30 && vki < 40) {
		 printf("Ideal kilonun cok ustundesiniz (obez)");
	 }
	 if (vki > 40) {
		 printf("Ideal kilonun cok ustundesiniz (morbid obez)");
	 }
	
	 
}
