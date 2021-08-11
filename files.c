#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "files.h"

int my_copy(FILE*a,FILE*b){
	
    long Bytes;
	char buf;  /*buffer*/

	 int ctr=0;
     while ((Bytes = fread(&buf, 1, sizeof(buf), a)) > 0){
		 
     fwrite(&buf, 1, Bytes, b);
     }
      
      return ctr;
}
	
	
	void my_size(FILE*a,FILE*b)
{	
	size_t size_a,size_b;
	
	fseek(a, 0, SEEK_END);
	size_a=ftell(a);	
	
	fseek(b, 0, SEEK_END);
	size_b=ftell(b);
	
    if(size_a==size_b)
	{
	printf("Copy done . Transfered: %lld bytes\n",size_b);
	}
	else
	{
	printf("Error copy");
}
}
 
 
		






