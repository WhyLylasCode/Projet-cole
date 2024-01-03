DuCoupEliteSchool.exe: main.c ecole.o classe.o eleve.o date.o fichier.o
	gcc main.c ecole.o classe.o eleve.o date.o fichier.o -o DuCoupEliteSchool.exe

fichier.o : fichier.c ecole.o
	gcc -c fichier.c

ecole.o : ecole.c classe.o
	gcc -c ecole.c

classe.o : classe.c eleve.o
	gcc -c classe.c

eleve.o : eleve.c date.o
	gcc -c eleve.c

date.o : date.c
	gcc -c date.c

DuCoupEliteCestMal:
	rm -f *.o