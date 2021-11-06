#include <stdio.h>
#include <string.h>
#include <conio.h>

void shuffle(char* c, char* o,int no)
{
    no++;
    char tmp[27];
    strcpy(tmp, c);
    int i,j;
    for(i=1,j=1; i<13; i+=1,j+=2)
    {
        tmp[j] = c[12+i];
        tmp[j+1] = c[i];
    }
    printf("%3d: %s\n",no,tmp);
    //getch();
    if(strcmp(tmp, o)!=0)
        shuffle(tmp, o, no);
    else
        printf("Number of Shuffle: %d",no);
}

int main()
{
    char* c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* o = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    shuffle(c, o, 0);
    return 0;
}
