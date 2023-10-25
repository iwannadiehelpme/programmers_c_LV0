#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rannum()
{
	srand(time(NULL));
	int rng = rand() % 100 + 1;
	return rng;
}

int main(void)
{
	int rng;
	rng = rannum();
	int useranswer;
	int diffi;
	int fault, chance;
	printf("난이도를 골라주세요.\n < 0 : 쉬움 / 1 : 보통 / 2 : 어려움 / 3 : 찍신 >\n");
	scanf_s("%d", &diffi);
	switch (diffi)
	{
	case 0: fault = 1, chance = 15; printf("현재 난이도 : 쉬움\n"); break;
	case 1: fault = 1, chance = 10; printf("현재 난이도 : 보통\n"); break;
	case 2:	fault = 1, chance = 5; printf("현재 난이도 : 어려움\n"); break;
	case 3: fault = 1, chance = 1; printf("현재 난이도 : 찍 신\n"); break;
	}
	printf("1에서 100 사이의 랜덤한 숫자가 생성되었습니다. 무엇일까요?\n");
	printf("숫자를 입력해보세요 : ");
	scanf_s("%d", &useranswer);
	while (1)
	{
		if (useranswer > rng)
		{
			printf("좀 더 작은 숫자를...\n");

		}
		else if (useranswer < rng)
		{
			printf("좀 더 큰 숫자를...\n");
		}
		else if (useranswer == rng)
		{
			printf("정답!");
			break;
		}
		else
		{
			printf("숫자가 아니거나 알 수 없는 오류가 발생했습니다");
		}

		fault++;

		if (fault > chance)
		{
			printf("모든 기회를 다 소진했음에도 숫자를 찾지 못했습니다. 유감인레후.");
			break;
		}
		
		printf("%d 번 시도 가능합니다.\n", (chance - fault)+1);
		printf("숫자를 입력해보세요 : ");
		scanf_s("%d", &useranswer);
	}

	return 0;
}