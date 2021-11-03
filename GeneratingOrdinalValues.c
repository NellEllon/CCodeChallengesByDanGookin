#include <stdio.h>

char* ordinal(int v)
{
    /*Create this Function*/
    if(v%10==1)
        return "st";
    if(v%10==2)
        return "nd";
    if(v%10==3)
        return "rd";
    return "th";
}

int main()
{
    int c;
    char* o;
    for(c=1; c<=20; c++)
    {
        o = ordinal(c);
        printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\t\n",
               c, o,
               c+20, o,
               c+40, o,
               c+60, o,
               c+80, o);
    }
    return 0;
}
