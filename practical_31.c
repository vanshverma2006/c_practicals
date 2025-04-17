#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define MAX 1000 
int main() { 
    FILE *fptr1, *fptr2; 
    char filename[100], tempFile[] = "temp.txt"; 
    char line[MAX], str1[100], str2[100]; 
    int count = 0; 
    printf("Enter the file name: "); 
    scanf("%s", filename); 
    fptr1 = fopen(filename, "r"); 
    if (fptr1 == NULL) { 
        printf("Cannot open file %s\n", filename); 
        return 1; } 
    fptr2 = fopen(tempFile, "w"); 
    if (fptr2 == NULL) { 
        printf("Cannot open temporary file.\n"); 
        fclose(fptr1); 
        return 1; 
    } 
    printf("Enter the string to find: "); 
    scanf("%s", str1); 
    printf("Enter the replacement string: "); 
    scanf("%s", str2); 
    while (fgets(line, MAX, fptr1) != NULL) { 
        char *pos, tempLine[MAX]; 
        strcpy(tempLine, line); 
        char *start = line; 
        while ((pos = strstr(start, str1)) != NULL) {         
            *pos = '\0'; 
            fprintf(fptr2, "%s%s", start, str2); 
            start = pos + strlen(str1); 
            count++; 
        } 
        fprintf(fptr2, "%s", start); 
  } 
    fclose(fptr1); 
    fclose(fptr2); 
    remove(filename); 
    rename(tempFile, filename); 
    printf("\nReplacement complete.\n"); 
    printf("Total occurrences replaced: %d\n", count); 
    return 0; 
}
