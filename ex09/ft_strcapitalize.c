//#include <unistd.h>
//#include <stdio.h>
//los caracteres alfabeticos en ascci van del 65 al 90 (mayusculas) y del 65+32=97 al 90+32=122 (minusculas)
int amayuscula(int a){
    if(97<= a && a<=122)
    return (a - 32);
    return a;
}
int aminuscula(int a){
    if(65<= a && a<=90)
    return (a + 32);
    return a;
}
int size_of(char *str){
    int i;
    i = 0;
    while(str[i]!=0){
        i++; 
    }
    return (i);
}
/*void imprimir(char *str){
    int i,q;
    i = 0;
    while(str[i]!=0){
        q=str[i];
        write(1,&q,1);
        i++; 
    }
}*/
void    ft_strcapitalize(char *str)
{
    int i; 
    int n;
//El valor ASCII del espacio en blanco es 32.
//El valor ASCII del carácter tabulador (\t) es 9.
//El valor ASCII del carácter de nueva línea (\n) es 10.
//El valor ASCII del carácter de retorno de carro (\r) es 13.
    n = size_of(str);
    str[0]=amayuscula(str[0]);
    i = 1;
    while(i < n -1){
            printf("\n%d %d ",i, str[i]);

        if(str[i]==9 || str[i]==10 || str[i]==13 || str[i]==32){
            str[i+1]=amayuscula(str[i+1]);
        }
        else if(str[i - 1 ]!=9 && str[i - 1 ]!=10 && str[i - 1 ]!=13&& str[i - 1 ]!=32)
        {
            str[i]=aminuscula(str[i]);
        }
        i++;
    }
     
}

/*int main(int a, char *args[]){
    if(a!=2)return 0;
    char *str=args[1];   
    imprimir(str);
    imprimir("\n");

    ft_strcapitalize(str);
    imprimir(str);
    int i=0,q;
     
}*/