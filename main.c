#include <stdio.h>
#include <stdlib.h>
#define SIZE 101

void main(){
	FILE *act2;
	char content[SIZE];
	printf("Introdueix el teu text:\n");
	fflush(stdout);
	scanf("%[^\n]",content);
	act2 = fopen("/home/daniel/Documentos/documento.txt","w+");
	if (act2 == 0) {
		perror("Error: ");
		exit(0);
	}
	else{
		fprintf(act2,"%s", content);
	}
	fclose(act2);
}

