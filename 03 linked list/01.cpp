#include <iostream>

using namespace std;

struct elem {
	int value;
	elem * next;
};

void print_list(elem * head) {
	while (head != NULL) {
		cout << head -> value << " ";
		head = head -> next;
	}
	cout << endl;
}

int main() {
	elem * head;
	elem * p;
	head = NULL;
	int n = 6;
	for (int i = 0; i < n; i++)
	{
		p = new elem;
		p -> value = i * 2;
		p -> next = head;
		head = p;
	}

	
	cout << "List: " << endl;
	print_list(head);
	
	
	p = head;
	head = head -> next;
	delete p;
	

	
	cout << "After deleting head: " << endl;
	print_list(head);
	
	if (head -> next != NULL) {
		elem * q = head;
		p = head -> next;
		while (p -> next != NULL) {
			q = p;
			p = p -> next;
		}
		q -> next = NULL;
		delete p;
	}
	else {
		delete head;
		head = NULL;
	}
	cout << "After deleting last elem" << endl;
	print_list(head);
	
	return 0;

}