#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string, const char* letter)
{
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len = strlen(my_string);
    char* answer = (char*)malloc((len) * sizeof(char));

    int j = 0;

    for (int i = 0; i < len; i++)
    {
        if (my_string[i] != letter[0])
        {
            answer[j] = my_string[i];
            j++;
        }
    }
    /*
    printf("%s\n",answer);
    printf("answer ������ �� : %c\n",answer[j]);
    */
    answer[j] = NULL;
    /*
    printf("answer ������ �� null�� �ʱ�ȭ\n");
    printf("���� ��� : %s",answer);
    */
    return answer;
}

int main(void)
{
    const char mstring[] = { "AAbasd" };
    char *ans = solution(mstring, "A");
    // ��� : basd
    printf("%s", ans);
    return 0;
}