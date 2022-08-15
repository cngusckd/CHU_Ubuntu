#include <unistd.h>

void ft_putstr(char *str){
	while(*str!='\0'){
		write(1,str,1);
		str++;
	}
}

char *ft_strcpy(char *s1, char *s2){ // s1 == dest , s2 == origin , orgin을 dest로 복사. 
	while(*s1!='\0'){
		*s1 = *s2;
		s1++;
		s2++;
	}	
}

int main(int argc, char *args[]){
	write(1,"바꾸기전, s1 == ",20);
	ft_putstr(args[1]);
	write(1,"\n",1);
	write(1," s2 == ",10);
	ft_putstr(args[2]);
	write(1,"\n",1);
	
	ft_strcpy(args[1],args[2]);

	write(1,"바꾼 후, s1 == ",20);
	ft_putstr(args[1]);
	write(1," s2 == ",15);
	ft_putstr(args[2]);

	return 0;
}
