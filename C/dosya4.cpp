#include <stdio.h>
int main()
{
	char a[10]={'1','2','3','4','5','6','7','8','9','a'};
	FILE *fs;
	fs=fopen("Project.txt","w");
	fwrite(a,1,10,fs);
	fclose(fs);
	return 0;
} 

