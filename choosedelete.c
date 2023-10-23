#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
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
    printf("answer 마지막 값 : %c\n",answer[j]);
    */
    answer[j] = NULL;
    /*
    printf("answer 마지막 값 null로 초기화\n");
    printf("최종 출력 : %s",answer);
    */
    return answer;
}

int main(void)
{
    const char mstring[] = { "AAbasd" };
    char *ans = solution(mstring, "A");
    // 출력 : basd
    printf("%s", ans);
    return 0;
}