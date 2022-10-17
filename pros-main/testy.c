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

stud tablica[500];

int liczenie = 0;

int main()
{
	char q[200];
	char w[200];
	char e[200];
	char r[200];
	char t[200];
	char y[200];
	int powrot = 1;
	int powrotzd = 1;
	char tmp[5];
	char num[200];
	char imie[200];
	char nazwisko[200];
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
	char ocenyyy[150];
	char linia[150];
	int ocenyy[150];
	int login;
	int haslo;
	printf("login i haslo nauczyciela: 123,123 || login i haslo ucznia: 321,321\n");
	printf("wpisz login:");
	scanf(" %d", &login);
	printf("wpisz haslo:");
	scanf(" %d", &haslo);

	if (login == 123 && haslo == 123)
	{
		while (powrot != 0)
		{
			printf("\nco chcesz zrobic?\n[d]dodaj ucznia | [n]usun uczniow | [o]odczytaj uczniow | [r]wyjdz z programu | [u]wstaw oceny\n");
			scanf(" %c", &wybor);

			switch (wybor)
			{
			case 'd':
			{
				fptr = fopen("program.txt", "a"); printf("dodaj ucznia:\n");
				printf("numer:");

				scanf(" %s", num);
				fprintf(fptr, "\n%s", num);

				printf("imie:");
				scanf(" %s", imie);
				fprintf(fptr, " %s", imie);

				printf("nazwisko:");
				scanf(" %s", nazwisko);
				fprintf(fptr, " %s", nazwisko);
				fclose(fptr);

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
			{int suma = 0; int srednia;
			ocenn = fopen("ocen.txt", "wb");
			printf("wpisz 4 oceny:");
			for (int i = 0; i < 4; i++)
			{

				scanf(" %d", &oceny);
				suma = suma + oceny;
				printf("suma: %d\n", suma);

			}srednia = suma / 4;
			printf("srednia: %d\n", srednia);

			fprintf(ocenn, "\n%d", srednia);
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

		
	}
	if (login == 321 && haslo == 321)
	{
		while (powrot != 0)
		{
			printf("\n [r]wyjdz z programu | [u]sprawdz srednia\n");
			scanf(" %c", &wybor);

			switch (wybor)
			{
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

	}
	return 0;
}