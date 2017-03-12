#include<stdio.h>
char *readfile(FILE *fp);
void printstring(char *inputString);
int main()
{
	FILE *filePointer;
	filePointer=fopen("input.txt","r");
	char *inputString=readfile(filePointer);
	printstring(inputString);

}
void printstring(char *inputString){
	int i=0;
	//char *ch[]=inputString;
	while((*(inputString+i))!='\0'){
		char c=(*(inputString+i));
		printf("%c",c);
		i++;
	}

}


char *readfile(FILE *fp){

	char c;
	int count; 
	while((c=getc(fp))!=EOF){
	//printf("%c",c);
	count++;
	}
	char string[count+1];

	int i=0;
	rewind(fp);
	while((c=getc(fp))!=EOF){
	string[i]=c;
	i++;
	}
	string[i+1]='\0';
	char *chptr= &string[0];
	return chptr;
}
