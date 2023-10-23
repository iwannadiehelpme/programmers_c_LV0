#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* rny_string)
{
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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
    //printf("%s", &answ); -> %s�� ���� �ϴ°� char* Ÿ���ε� & ���̸� char** ���°� �Ǽ� ������ �ȵ�
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