/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>*/
//los caracteres alfabeticos en ascci van del 65 al 90 (mayusculas) y del 65+32=97 al 90+32=122 (minusculas)
char    *ft_str_is_alpha(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
    while (src[i]!=0)
    {    
        if()
        i=i+1;
    }
    dest[i] = 0;
    return (dest);
}
/*int main(int a, char *args[]){
     if(a!=4)return 0;
    char *dest=args[1];
    char *src=args[2];
    int n = atoi(args[3]);
    ft_str_is_alpha(dest, src, n);
    int i;
    i = 0;
    int s;
    while (dest[i] != '\0')
    {   
        s = dest[i];
        write(1, &s,1);
        i++;
    }  
}*/