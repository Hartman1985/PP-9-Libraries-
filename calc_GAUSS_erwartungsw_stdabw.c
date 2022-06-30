/*calc_GAUS_erwatsw_stdabw.c*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"staticlib_gauss.h"
int option,std_abw,erwart_wert,anzahl=100;


int main (int argc,char*argv[])
{

int option,std_abw,erwart_wert,anzahl=100;	
	
	
	
	
while((option = getopt(argc, argv, "h")) != -1) 
	{
    switch(option) 
	    { 
	case 'h':
		printf("Version: 0.1 Alpha\n");
		printf("Programmierer: Roman Rückert und Sebastian Käwel\n");
		printf("Das Programm erstellt eine Statistik über einen übergebene Datei mit dem Namen zufall.txt im aktuellen Verzeichnis\n");
		break;	
        	}
  	}
FILE*Input_stream;
Input_stream = fopen("zufall.txt", "r"); 
if(Input_stream== NULL){
printf("Datei nicht gefunden/Kann keine Werte einlesen\n");
exit(-1);
}
else{
		print_gaussian_erwartung_stdabw(100,Input_stream);
}
fclose(Input_stream);
return 0;
}
