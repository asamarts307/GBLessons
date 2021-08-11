#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "files.h"

int main(int argc, char **argv)
{	

	char name_1[100]={ 0 };
	char name_2[100]={ 0 };
	
	FILE*f_1;
	FILE*f_2;
	
	printf("Enter filename_1 : \n");
	scanf("%s",name_1);
	
	
	printf("Enter filename_2 : \n");
	scanf("%s",name_2);


	f_1=fopen(name_1,"rb");
	
	if (f_1==NULL)
	{
		printf("ErroR %s not exist!!!\n",name_1);
		
	}
	
	
	f_2=fopen(name_2,"wb+");
	
	
	
	my_copy(f_1,f_2);
	my_size(f_1,f_2);
	
	
	fclose(f_1);
	fclose(f_2);
	return 0;
}

