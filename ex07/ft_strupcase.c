//#include <unistd.h>
//los caracteres alfabeticos en ascci van del 65 al 90 (mayusculas) y del 65+32=97 al 90+32=122 (minusculas)
char    ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {    
        if (!( (97 <= str[i] && str[i] <= 122) ))
            str[i]-=32;
        i++;
    }
    return (1);
}
/*int main(int a, char *args[]){
    if(a!=2)return 0;
    char *str=args[1];   
    int i=ft_strupcase(str)+48;
    write(1, &i,1);
}*/