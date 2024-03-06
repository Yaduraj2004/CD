#include<stdio.h>
int main(){
	int whitespace_count=0, newline_count=0;
	char c;
	while((c= getchar())!=EOF)
	{
		if (c==' ') whitespace_count++;
		else if (c=='\n') newline_count++;
	}
	printf("Whitespace:%d\n Newline:%d\n",whitespace_count,newline_count);
	return 0;
}
