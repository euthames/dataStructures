 #include <stdio.h>

int main(void)
{
   FILE *stream;
   stream = fopen("MYFILE.TXT", "w");
   fprintf(stream, "bilgisayar kavramlari");
   printf("dosyadaki konum: %ld\n", ftell(stream));
   fclose(stream);
   return 0;
}

