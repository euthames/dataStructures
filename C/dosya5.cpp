#include <stdio.h>
int main()
 {
      FILE * f;
      f = fopen("myfile.txt", "w");
      fputs("Bilgisayar Kavramlari", f);
      fseek(f, 5, SEEK_SET);         //SEEK_CUR,   SEEK_END
      fputs(" Sadi", f);
      fclose(f);
      return 0;
}

