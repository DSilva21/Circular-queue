#include <stdio.h>
#include "CircularQueue.h"

int main(void)
{
	//Queue의 생성 및 초기화
	Queue q;
	QueueInit(&q);

	Enqueue(&q, 1);
	Enqueue(&q, 2);
	Enqueue(&q, 3);
	Enqueue(&q, 4);
	Enqueue(&q, 5);

	while (!QIsEmpty(&q))
		printf("%d ", Dequeue(&q));

	getch();
	return 0;
}