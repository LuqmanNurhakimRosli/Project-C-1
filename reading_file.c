#include <stdio.h>
int main()
{
  FILE *pF = fopen ("C:\\Users\\mlnr\\OneDrive - Dagang Net Technologies Sdn Bhd\\Desktop\\prototype\\text.txt" ,"r");
  char buffer[255];
  
  if(pF == NULL)
  {
    printf("Unable to open file\n");
  }
  else
  {
    while(fgets(buffer, 255, pF) != NULL)
    {
      printf("%s", buffer);
    }
  }
  
  fclose(pFa);
  
  return 0;
  
}
