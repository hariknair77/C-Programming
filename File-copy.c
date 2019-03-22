# include <stdio.h>
# include <stdlib.h>
void main()
{
FILE *fp1,*fp2;
char* line[100];
fp1=fopen("Files.txt","w");
fp2=fopen("File1.txt","r");
fscanf(fp2,"%s",&line);
while (line!=EOF)
{fprintf(fp1,"%s",line);
fscanf(fp2,"%s",&line);
}
fclose(fp2);
fp2=fopen("File2.txt","r");
fscanf(fp2,"%s",&line);
while (line!=EOF
)
{fprintf(fp1,"%s",line);
fscanf(fp2,"%s",&line);
}
fclose(fp2);
fclose(fp1);
}
