#include<stdio.h>
#include<string.h>
int main() 
{
    char input_direct[100],output_direct[100],b[99999],c;
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
    while (!feof(fin))
    {
        fgets(b,99999,fin);
        //printf("%s",b);
        fputs(b,fout);
    }

    
    //fputs(b,fout);
    //printf("%s\n",b);
    printf("success");
    return 0;
}