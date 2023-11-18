int main(int a, char *args[]){
    if(a != 2)return;
    char p=args[1];
    write(1, &p,1);
}