#include <stdio.h>

	int main(){


	int task [4];
	char taskc [4];
	short tasks [4];
	double taskd [4];
	  printf("integer array: \n");
	for (int i=0;i<=3;i++){
	
//	printf("integer array \n");
	printf("%p\n",&task[i]);
	}


         printf("Character array: \n");
        for (int c=0;c<=3;c++){

//      printf("Short array \n");
        printf("%p\n",&taskc[c]);
        }



         printf("Double array: \n");
        for (int d=0;d<=3;d++){

//      printf("integer array \n");
        printf("%p\n",&taskd[d]);
        }


         printf("Short array: \n");
        for (int s=0;s<=3;s++){

//      printf("integer array \n");
        printf("%p\n",&tasks[s]);
        }




	return 0;
	}
