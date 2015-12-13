#include <stdio.h>
int main ()
{
   FILE* fp;
   char* tag = (char* ) malloc(4);
   char* title = (char* ) malloc(31);
   char* artist = (char* ) malloc(31);
   char* album = (char* ) malloc(31);
   char* year = (char* ) malloc(5);
   char* comment = (char* ) malloc(31);

   fp = fopen("F:\\aa.mp3", "r");
   if (fp == NULL) {
      printf("File Missing\n");
      return 0;
   }
   fseek(fp, -128, 2);
   fgets(tag, 4, fp);
   if(strcmp(tag, "TAG") != 0) {
      printf("MP3 version is not ID3v1\n");
      return 0;
   }
   fgets(title, 31, fp);
   fgets(artist, 31, fp);
   fgets(album, 31, fp);
   fgets(year, 5, fp);
   fgets(comment, 31, fp);

   printf("TAG : %s\n", tag);
   printf("TITLE : %s\n", title);
   printf("ARTIST : %s\n", artist);
   printf("ALBUM : %s\n", album);
   printf("YEAR : %s\n", year);
   printf("COMMENT : %s\n", comment);
   return 0;
}
