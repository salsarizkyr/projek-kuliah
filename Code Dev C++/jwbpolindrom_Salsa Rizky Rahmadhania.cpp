#include <stdio.h>
#include <string.h>

struct stack{
	char isi[255];
	int atas;
}s;

char kalimat[255],hasil[255];

void push(char x, struct stack){
	if(s.atas<255){
		s.atas++;
		s.isi[s.atas] = x;
	}else{
		printf("DATA FULL!!!!");
	}
}

int pop(struct stack){
	if(s.atas>0){
	hasil[s.atas] = s.isi[s.atas] ;
		s.atas--;
	}else{
		printf("DATA EMPTY!!!");
	}
}



int main(){
	int i=1;
	("%s",kalimat);
	while(i<=sizeof(kalimat)){
		push(kalimat[i],s);
		i++;
	}
	while(s.atas>0){
		pop(s);
	}
	if(strcmp(kalimat,hasil)==0){
		printf("Polindrom\n");
	}else{
		printf("Tidak polindrom");
	}
	return 0;
}
