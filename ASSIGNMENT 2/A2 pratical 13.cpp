#include <stdio.h>
int main() {
    FILE *file;
    char text[] = "Hello, this is a test file!"; 
    char buffer[100]; 
    file = fopen("example.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(file, "%s", text); 
    fclose(file); 

    file = fopen("example.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fgets(buffer, sizeof(buffer), file); 
    fclose(file); 

    printf("File Contents: %s\n", buffer);

    return 0;
}

