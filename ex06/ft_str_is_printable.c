//#include <unistd.h>
//los caracteres alfabeticos en ascci van del 65 al 90 (mayusculas) y del 65+32=97 al 90+32=122 (minusculas)
char    ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {    
        if (!( (32 <= str[i] && str[i] <= 126) ))         
            return (0);
        i++;
    }
    return (1);
}
/*int main(int a, char *args[]){
    if(a!=2)return 0;
    char *str=args[1];   
    int i=ft_str_is_uppercase(str)+48;
    write(1, &i,1);
}*/