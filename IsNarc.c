#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

bool isnarc(char* str)
{
    int res = 0;
    for (size_t i = 0; i < strlen(str); ++i)
    {
        res += pow((str[i] - '0'), strlen(str));
    }
    if (res != atoi(str)) return false;
    else return true;
}

int main()
{
    char num[500];
    printf("Enter a number: ");
    scanf("%s", num);
    if (isnarc(num)) printf("The number %d is a narcissistic number\n", atoi(num));
    else printf("The number %d is not a narcissistic number\n", atoi(num));
    return 0;
}
