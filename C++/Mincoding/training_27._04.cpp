#include <iostream>

using namespace std;

struct Node {
	char ch;
	Node* next;
};

Node* head;
Node* ptr;

void addNode(char ch)
{
	if (head == NULL)
	{
		head = new Node;
		head->ch = ch;
		ptr = head;
	}
	else {
		ptr->next = new Node;
		ptr = ptr->next;
		ptr->ch = ch;
	}
}

int main()
{
	int n;

	cin >> n;

	for (int i = n; i < n+4; i++)
	{
		addNode((char)(i - 11 + 'A'));
	}

	ptr = head;

	for (int i = 0; i < 4; i++)
	{
		cout << ptr->ch;
		ptr = ptr->next;
	}

	return 0;
}