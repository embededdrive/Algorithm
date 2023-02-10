#include <iostream>

using namespace std;

struct NODE
{
	int x;
	NODE* next;
};

int main()
{
	NODE a, b, c;
	NODE* head;
	
	head = &a;
	head->x = 3;
	head->next = &b;
	head->next->x = 5;
	head->next->next = &c;
	head->next->next->x = 4;

	return 0;
}