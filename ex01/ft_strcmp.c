#include <unistd.h>
char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int main(int a, char *args[]){
    if(a != 2)return 0;
    char *p=args[1];
    char *q=args[2];
    q=ft_strcpy(p, q);
    int i;

    i = 0;
    int s;
    while (q[i] != '\0')
    {   
        s = p[i];
        write(1, &s,1);
        i++;
    }  
}