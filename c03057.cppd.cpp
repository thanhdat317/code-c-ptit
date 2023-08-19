
#include <stdio.h>
#include <string.h>

long long m(char *s)
{
    long long res = 0;
    for(int i = 0; i < strlen(s); ++i)
    {
        if(s[i] == '6') res = res * 10 + 5;
        else res = res * 10 + s[i] - '0';
    }
    return res;
}

long long M(char *s)
{
    long long res = 0;
    for(int i = 0; i < strlen(s); ++i)
    {
        if(s[i] == '5') res = res * 10 + 6;
        else res = res * 10 + s[i] - '0';
    }
    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s1[20] = {}, s2[20] = {};
        scanf("%s %s", s1, s2);
        printf("%lld %lld\n", m(s1) + m(s2), M(s1) + M(s2));
    }
    return 0;
}

