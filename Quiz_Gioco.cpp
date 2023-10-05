#include <stdio.h>

int main()
{
	int scelta;
	char nome[10];
	char risposta_corretta;
	char risposta_utente;
	
	
	//introduzione del programma
	printf("Benvenuto al Quiz Informatico!\n");
	printf("Scopo del gioco: Prova ad accumulare 3 punti rispondendo correttamente a tutte le domande.\n");
	printf("Scegli un'opzione e premi Invio\n");
	printf("1: Nuova Partita\n");
	printf("2: Esci\n");
	printf("Scelta: ");
	scanf("%d", &scelta);
	
	if(scelta==1){
	
		do{
			int punteggio=0;
			printf("Inserisci il tuo nome: ");
			scanf("%s", &nome);
	
			printf("\nDOMANDA N 1\n");
			printf("\nQuale tra le seguenti è una memoria volatile??\n\n");
			printf("a) RAM\n");
			printf("b) DVD\n");
			printf("c) CD-ROM\n\n");
			
			risposta_corretta = 'a';
	
	        printf("Risposta: ");
	        scanf("%s", &risposta_utente);
	        
	        if(risposta_corretta == risposta_utente){
	        	printf("Risposta corretta! Hai ottenuto 1 punto!\n");
	        	punteggio++;
	        	printf("Punteggio totale: %d\n\n", punteggio);
			} else {
				printf("Risposta errata...\n\n");
			}
			
			printf("DOMANDA N 2\n");
			printf("Quanti tipi di kernel esistono??\n");
			printf("a) 2\n");
			printf("b) 1\n");
			printf("c) 3\n");
			
			risposta_corretta = 'c';
	
	        printf("Risposta: ");
	        scanf("%s", &risposta_utente);
	        
	        if(risposta_corretta == risposta_utente){
	        	printf("Risposta corretta! Hai ottenuto 1 punto!\n");
	        	punteggio++;
	        	printf("Punteggio totale: %d\n\n", punteggio);
			} else {
				printf("Risposta errata...\n\n");
			}
			
			printf("DOMANDA N 3\n");
			printf("Di quale colore era il cavallo bianco di Napoleone??\n");
			printf("a) Bianco\n");
			printf("b) Striato nero\n");
			printf("c) A pois gialli\n");
			
			risposta_corretta = 'b';
	
	        printf("Risposta: \n\n");
	        scanf("%s", &risposta_utente);
	        
	        if(risposta_corretta == risposta_utente){
	        	printf("\nRisposta corretta! Hai ottenuto 1 punto!\n");
	        	punteggio++;
	        	printf("Punteggio totale: %d\n\n", punteggio);
			} else {
				printf("Risposta errata...\n\n");
			}
			
				
			if(punteggio == 3){
				printf("Complimenti, hai vinto!", nome);
			} else {
				printf("Hai perso... ma puoi sempre riprovarci!\n\n");
			}
		
			printf("Vuoi riprovarci??\n");
			printf("1) Si\n");
			printf("2) No\n");
			scanf("%d", &scelta);
		} while(scelta == 1); {
			printf("Grazie per aver giocato!");
		}
	}
		
	return 0;		
}		
	
