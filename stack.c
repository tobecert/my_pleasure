#include <stdio.h>
#include <stdlib.h>

int cnt = 0;

void push(int stack[], int value, int n)
{
	stack[cnt] = value;
	cnt++;
	
}
void pop(int stack[])
{
	cnt--;
	stack[cnt] = 0;
}
void isempty(int stack[], int n)
{
	int flag = 0;

	for(int i = 0; i < n; i++)
	{
		if(stack[i] > 0)
		{
			flag++;
		}
	}
	if(flag > 0)
	{
		printf("Not empty\n");
	}
	else
		printf("empty\n");
}
void top(int stack[])
{
	printf("top value is : %d\n", stack[cnt-1]);
}
void size()
{
	printf("stack size is: %d\n", cnt);
}
void status(int stack[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", stack[i]);
	}
}

int main(void)
{
	int n;
	int push_value, num;
	scanf("%d", &n);

	int * stack;
	
	stack = malloc(sizeof(int) * n);

	while(1)
	{
		printf("-----choose-----\n");
		printf("0.quit\n");
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.isempty\n");
		printf("4.top\n");
		printf("5.size\n");
		printf("6.status\n");

		scanf("%d", &num);

	if(num == 0)
	{
		printf("종료\n");
		return 0;
	}
	if(num == 1)
	{
		scanf("%d", &push_value);
		push(stack, push_value, n);
	}
	if(num == 2)
	{
		pop(stack);
	}
	if(num == 3)
	{
		isempty(stack, n);
	}
	if(num == 4)
	{
		top(stack);
	}
	if(num == 5)
	{
		size();
	}
	if(num == 6)
	{
		status(stack, n);
	}
	}
	free(stack);
	return 0;
}
