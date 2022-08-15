#include <unistd.h>

void ft_putstr(char *str){
	while(*str!='\0'){
		write(1,str,1);
		str++;
	}
	write(1," ",1);
}

int main(int argc, char *args[]){
	for(int i=0;i<argc;i++)
		ft_putstr(args[i]);
	return 0;
}

