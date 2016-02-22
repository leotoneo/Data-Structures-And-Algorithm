#include<iostream>

using namespace std;


struct Node{

	int value;
	Node* next;
	Node(int value_){ value = value_; }
};
//非递归
Node* reserve_list(Node* phead)
{
	if (phead == NULL || phead->next == NULL)
		return phead;
	Node* p_privious = phead;
	Node* p = phead->next;
	phead->next = NULL;
	while (p != NULL)
	{
		Node* p_next = p->next;
		p->next = p_privious;
		p_privious = p;
		p = p_next;
	}
	return p_privious;
}

//递归

Node* reserve_recursive(Node* phead)
{
	if (phead == NULL || phead->next == NULL)
		return phead;
	Node* second = phead->next;
	Node* new_head = reserve_recursive(second);
	second->next = phead;
	phead->next = NULL;
	return new_head;
}

int main()
{
	Node* phead = new Node(0);
	Node* head = phead;
	head->next = NULL;
	for (int i = 1; i < 6; ++i)
	{
		Node* new_node = new Node(i);
		head->next = new_node;
		new_node->next = NULL;
		head = new_node;
	}
	Node* p_new = reserve_recursive(phead);
	while (p_new)
	{
		for (int i = 0; i < 6; ++i)
		{
			cout << p_new->value << " ";
			p_new = p_new->next;
		}
		cout << endl;
	}
	
	return 0;
}
