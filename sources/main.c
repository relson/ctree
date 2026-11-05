#include <stdio.h>

int main(int argc, char **argv) {
   const char *path = "."; // default path is current dir

   if (argc > 1) {
       path = argv[1];
   }

   printf("path %s\n", path);

   return 0;
}
