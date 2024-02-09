 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   char name[100];
   char *description;

   strcpy(name, "Mehul dabhi");

   /* allocate memory dynamically */
   description = malloc( 100 * sizeof(char) );
	
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   } else {
      strcpy( description, "mehul  a DPS student in enfonnerr 4 st semth");
   }
   

  description = malloc(100 *sizeof(char));
      if(description==NULL){

  fprintf(stderr,"Error unable to allocate memory");
}
else {

strcpy(description,"\n okay  you are undrestan good boy");
}
  
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );
}
