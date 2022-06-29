/*calc_GAUS_erwatsw_stdabw.c*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<unistd.h>
#include"staticlib_gauss.h"

int option,std_abw,erwart_wert,anzahl=100;

void help(void){
	printf("Version 0.1 Alpha \n");
	printf("Autor: Roman Rückert, Sebastian Käwel\n");
	printf("Dieses Programm, berechnet die Standardabweichung und denn Erwartungswert nach Gauß.\n");
	printf("Zur Berechung werden Zeilenweise die ersten 100 Werte in der Datei test.txt im Programmverzeichnis benutzt.\n");
	printf("Optionen: \n");
	printf("-h	Hilfe");

}

int main (int argc,char *argv[]){
       	while((option = getopt(argc, argv, "h")) != -1) 
	    	{
    	    switch(option) 
            	{ 
	case 'h':
		help();
	  	break;	
	        }
    	}
	FILE*Input_stream;
	Input_stream = fopen("zufall.txt", "r"); 
	if(Input_stream!= NULL){
		printf("Datei nicht gefunden/Kann keine Werte einlesen\n");
		exit(-1);
	}
	else{
		print_gaussian_erwartung_stdabw(anzahl,Input_stream);
	}
fclose(Input_stream);

}
