#include<stdio.h>
#include<string.h>
int main() 
{
    char input_direct[100],output_direct[100],c;
    FILE *fin, *fout;
    printf("Input : ");
    scanf("%s",input_direct);
    if((fin = fopen(input_direct,"r")) == NULL)
    {
        printf("ERROR1");
        return 1;
    }
    printf("Output : ");
    scanf("%s",output_direct);
    if((fout = fopen(output_direct,"w+")) == NULL)
    {
        printf("ERROR2");
        return 2;
    }
    int i=0;
    while( (c=fgetc(fin)) != EOF)
{
 fputc(c,fout);
}
    printf("success");
    return 0;
}