#include <stdio.h>
#include <string.h>

// simple hash function for demo
unsigned int simple_hash(const char *str)
{
    unsigned int hash = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        hash = hash * 31 + str[i];
        i++;
    }
    return hash;
}

int main(void)
{
    char buf[256];
    printf("Please input your message: ");
    scanf("%s", buf);

    unsigned int res = simple_hash(buf);
    printf("Hash result: %u\n", res);
    return 0;
}
