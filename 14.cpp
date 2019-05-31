#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int z;
	int x;
	char input[]="I am a good student.";
	char *check;
	
	z=strlen(input);
	check=input;
	for(x=0;x<z;x++){
		if(*(check+x)<122&&*(check+x)>=96){
			printf("%c", *(check+x));
		}
		else if(*(check+x)<91&&*(check+x)>64){
			printf("%c", *(check+x));
		}
		else if(*(check+x)==32){
			printf("%c", *(check+x));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
} 
