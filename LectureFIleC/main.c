#include <stdio.h>
#include <stdlib.h>

struct vocab
{
    int id;
    char word[20];
    char mean[40];
};

int main()
{
   struct vocab vc[40];

   vc[0] = {1,"Computer","calculator"};
   vc[1] = {2,"Telephone","Call with someone"};
   vc[2] = {3,"Hard Disk","Storage"};
   vc[3] = {4,"Macbook","Calculator"};

   FILE *fp;
   fp = fopen ("D:/musWORK/CodeblockProject/LectureFIleC","w+");
   for(int i=0;  i<4; i!=4)
   {
       fprintf(fp,"%d\t%s\t%s\n",vc[i].id,vc[i].word,vc[i].mean);
   }

    char str[] = fgets[fp];
    printf("%s\n",str);
    fclose(fp);

    return 0;
}
