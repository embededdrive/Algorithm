#include <iostream>

using namespace std;

struct Node
{
	int num;
	Node* next;
};

Node nodes[4];

int main()
{
	int n;
	Node* head;
	Node* ptr;

	cin >> n;

	head = &nodes[0];
	ptr = head;

	for (int i = 1; i <= 4; i++)
	{
		ptr->num = i * n;
		if (i < 4) ptr->next = &nodes[i];
		ptr = ptr->next;
	}

	ptr = head;

	while (ptr != NULL)
	{
		cout << ptr->num << ' ';
		ptr = ptr->next;
	}

	return 0;
}