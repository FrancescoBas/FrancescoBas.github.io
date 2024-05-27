//nome file: problema_calcio_BasileFrancesco.c
/*: Si metta a punto un’applicazione che gestisca una giornata di un piccolo torneo di calcio tra squadre di un istituto. 
Mediante un menù inserire:
1. I punteggi pregressi di ognuna delle 6 squadre
2. Le partite della giornata
3. I risultati della giornata
Realizzato da Basile Francesco 10/1/2022 */

#include <stdio.h>

main(){
	//Sezione dichiarativa
	int ptPri, ptSec, ptTer, ptQuar, scelta;    //Variabili di input
	int gPri, gSec, gTer, gQuar;                //Variabili di input
	char pri [20], sec [20], ter [20], quar [20];
	
	//Sezione esecutiva
	
	printf("\n\tInserisci il nome della prima squadra\n");
	scanf(" %s", &pri);
	printf("\n\tInserisci il punteggio della prima squadra\n");
	scanf("\t %d", &ptPri);
	printf("\n\tInserisci il nome della seconda squadra\n");
	scanf(" %s", &sec);
	printf("\n\tInserisci il punteggio della seconda squadra\n");
	scanf("\t %d", &ptSec);
	printf("\n\tInserisci il nome della terza squadra\n");
	scanf("\t %s", &ter);
	printf("\n\tInserisci il punteggio della terza squadra\n");
	scanf("\t %d", &ptTer);
	printf("\n\tInserisci il nome della quarta squadra\n");
	scanf("\t %s", &quar);
	printf("\n\tInserisci il punteggio della quarta squadra\n");
	scanf("\t %d", &ptQuar);
	
	printf("\n\n\n");
	printf("\t************************************************************************");
	printf("\n\t*                                                                    *");
	printf("\n\t*        	1 Punteggi di ognuna delle 6 squadre                     *");
	printf("\n\t*                                                                    *");
	printf("\n\t*        	2 Partite della giornata                                 *");
	printf("\n\t*                                                                    *");
	printf("\n\t*        	3 Risultati della giornata                               *");
	printf("\n\t*                                                                    *");
	printf("\n\t**********************************************************************");
	printf("\n\n\n");
	
	printf("\n\tCOSA SCEGLI?");
	scanf("\t %d", &scelta);
	
	if(scelta==1){
		system("CLS");
		printf("\n\tHai selezionato i punteggi delle squadre \n");
		printf("\n\tIl punteggio della prima squadra:%s %d\n\t", pri, ptPri);
		printf("\n\tIl punteggio della seconda squadra:%s %d\n\t", sec, ptSec);
		printf("\n\tIl punteggio della terza squadra:%s %d\n\t", ter, ptTer);
		printf("\n\tIl punteggio della quarta squadra:%s %d\n\t", quar, ptQuar);
	}
	if(scelta==2){
		system("CLS");
		printf("\n\tHai selezionato le partite di questa giornata \n");
	    printf("\n\tLa prima partita: \n");
		printf("\t %s", pri);
		printf("\t -");
		printf("\t %s", sec);
		 printf("\n\tLa seconda partita: \n");
		printf("\t %s", ter);
		printf("\t -");
		printf("\t %s", quar);
	}
	if(scelta==3){
		system("CLS");
		printf("\n\tHai selezionato i risultati di questa giornata \n");
		printf("\n\tInserisci il risultato della prima partita\n");
		printf("\n\t Inserisci i goal segnati da %s:", pri);
		scanf("\t %d", &gPri);
		printf("\n\t Inserisci i goal segnati da %s:", sec);
		scanf("\t %d", &gSec);
		if(gPri>gSec){
			printf("\n\tSquadra vincitrice %s:", pri);
			ptPri=ptPri+3;
		}
		else{
			if(gPri<gSec){
				printf("\n\tSquadra vincitrice %s:", sec);
				ptSec=ptSec+3;
			}
			else{
				printf("\n\tPareggio tra le squadre");
				ptPri=ptPri+1;
				ptSec=ptSec+1;
			}
		}
		printf("\n\tInserisci il risultato della seconda partita\n");
		printf("\n\t Inserisci i goal segnati da %s:", ter);
		scanf("\t %d", &gTer);
		printf("\n\t Inserisci i goal segnati da %s:", quar);
		scanf("\t %d", &gQuar);
		if(gTer>gQuar){
			printf("\n\tSquadra vincitrice %s:", ter);
			ptTer=ptTer+3;
		}
		else{
			if(gTer<gQuar){
				printf("\n\tSquadra vincitrice %s:", quar);
				ptQuar=ptQuar+3;
			}
			else{
				printf("\n\tPareggio tra le squadre");
				ptTer=ptTer+1;
				ptQuar=ptQuar+1;
			}
		}
		printf("\n\n\n");
		printf("\t************************************************************************");
		printf("\n\t                       CLASSIFICA ATTUALE:                            \n");
		printf("\t************************************************************************");
		printf("\n\n\n");
		printf("\n \tSQUADRA %s", pri);
		printf("\t POSSIEDE %d", ptPri);
		printf("\t PT");
		printf("\n \tSQUADRA %s", sec);
		printf("\t POSSIEDE %d", ptSec);
		printf("\t PT");
		printf("\n \tSQUADRA %s", ter);
		printf("\t POSSIEDE %d", ptTer);
		printf("\t PT ");
		printf("\n \tSQUADRA %s", quar);
		printf("\t POSSIEDE %d", ptQuar);
		printf("\t PT ");
		printf("\n \tLa squadra con più punti è la prima in classifica, le altre la seguono in ordine decrescente ");	

	}
		











}
