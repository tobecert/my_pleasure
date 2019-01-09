#include <stdio.h>

int queue[100];
int front = 0;
int rear = 0;

void push(int num)
{
	queue[rear] = num;
	rear++;
}

void pop()
{
	queue[front] = 0;
	front++;
}

void status()
{
	for(int i = 0; i < 100; i++)
	{
		printf("%d ", queue[i]);
	}
	printf("\n");
	printf("front: %d\n", queue[front]);
	printf("rear: %d\n", queue[rear-1]);
	
}
int main()
{
	int n, num;

	while(1)
	{
		printf("메뉴: \n");
		printf("0. quit \n");
		printf("1. push \n");
		printf("2. pop \n");
		printf("3. status \n");
		scanf("%d", &n);

		if(n == 0)
		{
			printf("종료\n");
			return 0;
		}

		if(n == 1)
		{
			scanf("%d", &num);
			push(num);
		}
		if(n == 2)
		{
			pop();
		}
		if(n == 3)
		{
			status();
		}
	}
	return 0;
}
