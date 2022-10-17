#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student //struktura student
{
	char* id;
	char* name;
	char* points;

}stud;

typedef struct uczen
{
	char* p;
	char* w;
	char* s;
	char* cz;
	char* pia;
	

}uczen;


stud tablica[500];
uczen tablica2[500];
int liczenie = 0;

int main()
{
	stud dodajlinie;
	uczen dodajucz;


	char q[200];
	char w[200];
	char e[200];
	char r[200];
	char t[200];
	char y[200];




	int powrot = 1;
	int powrotzd = 1;
	char tmp[5];
	char num[200] = " lul";
	char imie[200];
	char nazwisko[200];
	char poniedzialek[200];
	char wtorek[200];
	char sroda[200];
	char czwartek[200];
	char piatek[200];
	FILE* fptr; //dodanie studenta
	FILE* fptg; //usuniecie danych
	FILE* fptf; //obejrzenie danych
	FILE* gggg;
	FILE* gggt;
	FILE* gggp;
	FILE* ocen;
	FILE* ocenn;

	char wybor;

	char ch;
	
	int licznikocen = 0;
	int oceny;
	int ocenyyy[150];
	char linia[150];
	int ocenyy[150];
	
	int login;
	int haslo;
	printf("login i haslo nauczyciela: 123,123 || login i haslo ucznia: 321,321\n");
	printf("wpisz login:");
	scanf(" %d", &login);
	printf("wpisz haslo:");
	scanf(" %d", &haslo);


	if (login == 123 && haslo==123)
	{
		while (powrot != 0)
		{
			printf("\nco chcesz zrobic?\n[d]dodaj ucznia | [n]usun uczniow | [o]odczytaj uczniow | [r]wyjdz z programu | [u]wstaw ocene\n");
			scanf(" %c", &wybor);

			switch (wybor)
			{
			case 'd':
			{



				fptr = fopen("program.txt", "a"); printf("dodaj ucznia:\n");
				printf("numer:");
				
				scanf(" %s", num);
				fprintf(fptr, "\n%s", num);

				dodajlinie.points = malloc(sizeof(char) * strlen(e));
				strcpy(dodajlinie.points, e);


				printf("imie:");
				scanf(" %s", imie);
				fprintf(fptr, " %s", imie);


				dodajlinie.name = malloc(sizeof(char) * strlen(q));
				strcpy(dodajlinie.name, q);



				printf("nazwisko:");
				scanf(" %s", nazwisko);
				fprintf(fptr, " %s", nazwisko);
				fclose(fptr);
				


				dodajlinie.id = malloc(sizeof(char) * strlen(w));
				strcpy(dodajlinie.id, w);

				tablica[liczenie++] = dodajlinie;


				break;
			}
			case 'n':
			{fptg = fopen("program.txt", "wb"); printf("n");
			fprintf(fptg, "%s", "\nLista uczniow \nnumer: imie: nazwisko:");
			fclose(fptg);
			break;
			}
			case 'o':
			{printf("o");
			fptf = fopen("program.txt", "r");
			while (!feof(fptf))
			{
				fgets(linia, 150, fptf);
				puts(linia);

			}

			

			fclose(fptf);
			break;
			}
			case 'u':
			{int suma = 0;int srednia;
				ocenn = fopen("ocen.txt", "wb");
			printf("wpisz 4 oceny:");
			for (int i = 0; i < 4; i++)
			{

				scanf(" %d", &oceny);
				suma = suma+oceny;
				printf("suma: %d\n", suma);
				
			}srednia = suma / 4;
			printf("srednia: %d\n", srednia);
			
			fprintf(ocenn, "\n%d",srednia);
			fclose(ocenn);
			break;
			
			}
			case 'r':
			{return 0; }
			default:
			{printf("niepoprawna operacja");
			break;
			}
			}
		}

		free(dodajlinie.id);
		free(dodajlinie.name);
		free(dodajlinie.points);
		dodajlinie.id = NULL;
		dodajlinie.name = NULL;
		dodajlinie.points = NULL;

	}
	if (login == 321 && haslo == 321)
	{
		while (powrot != 0)
		{
			printf("\nco chcesz zrobic?\n[d]dodaj plan | [n]usun plan | [o]odczytaj plan | [r]wyjdz z programu | [u]sprawdz srednia\n");
			scanf(" %c", &wybor);

			switch (wybor)
			{
			case 'd':
			{
				


				gggg = fopen("uczen.txt", "a"); printf("dodaj plan w formacie(L1-L2-L3...):\n");
				printf("poniedzialek:");

				scanf(" %s", poniedzialek);
				fprintf(gggg, " poniedzial: %s \n", poniedzialek);

				dodajucz.p = malloc(sizeof(char) * strlen(r));
				strcpy(dodajucz.p, r);


				printf("wtorek:");
				scanf(" %s", wtorek);
				fprintf(gggg, " wtorek:     %s \n", wtorek);


				dodajucz.w = malloc(sizeof(char) * strlen(t));
				strcpy(dodajucz.w, t);



				printf("sroda:");
				scanf(" %s", sroda);
				fprintf(gggg, "sroda:       %s \n", sroda);
				
				fclose(gggg);



				dodajucz.s = malloc(sizeof(char) * strlen(y));
				strcpy(dodajucz.s, y);

				tablica2[liczenie++] = dodajucz;


				break;
			}
			case 'n':
			{gggp = fopen("uczen.txt", "wb");
			fprintf(gggp, "%s", " \n");
			fclose(gggp);
			break;
			}
			case 'o':
			{
			gggt = fopen("uczen.txt", "r");
			printf("	     8:00-9:00-10:00-11:00-12:00-13:00-14:00");
			while (!feof(gggt))
			{
				fgets(linia, 150, gggt);
				puts(linia);

			}



			fclose(gggt);
			break;
			}
			case 'r':
			{return 0; }
			case 'u':
			{
			ocenn = fopen("ocen.txt", "r");
			while (!feof(ocenn))
			{
				fgets(ocenyyy, 150, ocenn);
				puts(ocenyyy);

			}



			fclose(ocenn);
			break;
			
			
			
			
			}
			default:
			{printf("niepoprawna operacja");
			break;
			}




			}
		}

		free(dodajucz.p);
		free(dodajucz.w);
		free(dodajucz.s);
		dodajucz.p = NULL;
		dodajucz.w = NULL;
		dodajucz.s = NULL;

	}

	
	return 0;
}