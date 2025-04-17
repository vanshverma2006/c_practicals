#include <stdio.h>
#include <string.h>


int count_substring(const char *str, const char *sub)
{
    int count = 0;
    int len_sub = strlen(sub);
    if (len_sub == 0)
        return 0;
    const char *p = str;
    while ((p = strstr(p, sub)) != NULL)
    {
        count++;
        p += len_sub;
    }
    return count;
}


int main()
{
    char str[1000], sub[1000];


    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    printf("Enter the substring to search: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = 0;
    
    int result = count_substring(str, sub);
    printf("The substring appears %d times.\n", result);
    
    return 0;
}







