#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
//prototipi funzioni
float sommac(int a,int d,float b,char ** size);
void stampa(char * messaggio);
void esercizio();

char supporto[100];

	int c = 1;
float sommac(int a,int d,float b,char ** size){
	float result;
	result = a + b + c + d;
	if(result > 100){
	char * valore = "grande";
	*size = valore;
}
else{
	char * valore = "piccola";
	*size = valore;
}
	return result;
}
void stampa(char * messaggio){
	int a;
	int i;
	for (int x = 4;x <= 1;x++){
		printf("%s \n", "");
}
		printf("%s \n", messaggio);
}
void esercizio(){
	int x = 3;
float b = 2.2;
int a = 1;
	char *ans1,*taglia;
	int ans = 0;
	float risultato=sommac(a,x,b,&taglia);
	stampa("la somma  incrementata  è ");
		printf("%s \n", taglia);
	stampa(" ed è pari a ");
		printf("%f \n", risultato);
		printf("%s \n", "vuoi continuare? (si/no) - inserisci due volte la risposta");
		scanf("%d%s",&ans,ans1);
	   while (ans == 1){
	printf("inserisci un intero:");
	scanf("%d",&a);
	printf("inserisci un reale:");
	scanf("%f",&b);
	risultato = sommac(a,x,b,&taglia);
	stampa("la somma  incrementata  è ");
		printf("%s \n", taglia);
	stampa(" ed è pari a ");
		printf("%f \n", risultato);
	printf("vuoi continuare? (si/no):");
	scanf("%d",&ans);
}
		printf("%s \n", "");
		printf("%s \n", "ciao");
}
int main(){
esercizio();
return 0;
}
