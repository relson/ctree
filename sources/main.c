#include <stdio.h>
#include <dirent.h>

int walk(const char *path) {
    DIR *dir = opendir(path);
    if (!dir) {
        perror("opendir");
        return 1;
    }

    struct dirent *dp;
    while((dp = readdir(dir)) != NULL) {
        const char *name = dp->d_name;
        printf("%s\n", name);
    }
    closedir(dir);
    return 0;
}

int main(int argc, char **argv) {
   const char *path = "."; // default path is current dir

   if (argc > 1) {
       path = argv[1];
   }

   printf("path %s\n", path);

   int err = walk(path);

   return err;
}
