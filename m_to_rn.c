#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rny_string)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(200);
    int j = 0;
    for (int i = 0; i <= 200; i++)
    {
        answer[i] = rny_string[j];
        if (rny_string[j] == 'm')
        {
            answer[i] = 'r';
            answer[i + 1] = 'n';
            i++;
        }
        j++;
    }
    return answer;
}

int main(void)
{
    const char strm[] = { "masterpiece" };
    printf("%s\n", strm);
    char *answ = solution(strm);
    printf("%s", answ);
    //printf("%s", &answ); -> %s에 들어가야 하는건 char* 타입인데 & 붙이면 char** 형태가 되서 참조가 안됨
    return 0;
}

/*
rny = m a s t e r
      0 1 2 3 4 5
ans = r n a s t e r

rny 0 = ans 0/ans 1
rny 1 = ans 2
rny 2 = ans 3
*/