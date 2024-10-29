#include <stdio.h>

	int main(){
//	char ch;
	int how= 0x01;
	
	char *Newhow =(char *) &how;
	if (*Newhow){
	printf("System is Little Endian\n");
	}
	else {
	printf("System is big Endian\n");
	}
	int system =sizeof(Newhow) * 8;
	printf("the system is : %d\n",system);
	printf("the orginal adress of how: %p\n", &how);
	printf("the new adress :%p\n",&Newhow);
	
     // 	printf("Char %c" ,*Newhow); 
	
	
	}
