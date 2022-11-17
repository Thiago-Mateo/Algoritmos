#include <stdio.h>
#include <stdlib.h>

FILE *fp;

fp = fopen("text.txt", "w+");

char *input;
while(input != EOF)(
scanf("%s", input);

fprintf(fp, input);
)

fclose(fp);

return 0;
