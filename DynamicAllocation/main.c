#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size;
   char *text = NULL;

   printf("Enter length of the text: ");
   scanf("%d", &size);
   size++; //To account for '\0'

   //text = (char *) malloc(size * sizeof(char));
   text = (char *)calloc(size, sizeof(char));

   if (text != NULL)
   {
       printf("Enter text with max length of %d characters: ",size-1);
       scanf(" ");
       gets(text);

       printf("\nInputted text is: %s\n", text);
   }

   free(text);
   text = NULL;
   return 0;
}
