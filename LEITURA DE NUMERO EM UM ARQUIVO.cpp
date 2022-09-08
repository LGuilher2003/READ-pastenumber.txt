#include<stdio.h>
int main(void){
	FILE *file;
	int x,y,u;
	//r-read(ler informações do arquivo,w-write(jogar um dado no arquivo),a-append
	file= fopen("C:\\Users\\Guilherme\\Desktop\\teste.txt","r");
	fscanf(file,"%i %i %i", &x, &y, &u);
	printf("%i %i %i", x,y,u);
	fclose(file);
	
	 
	return 0;
	
	
}
