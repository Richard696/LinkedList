#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

/* 
 * Create a template for the node
*/
struct Node 
{
	int n;
	struct Node *next;
};

class LinkedList 
{
	Node *head;
	int size;

	public:
	// Constructor
	LinkedList(int size)
	{
		// populate first node
		this->head = NULL;
		this->size = size;

		
		// int len = (size + 1) * size / 2;
		while (size --> 0)  // return the lens to zero
			head = new Node { size, head }; //Initiliaze the node
			
	}

	// destuctor
	~LinkedList()
	{
		Node *node;
		while (head != NULL) 
		{
			head = (node = head)->next;  // cool one liner
			delete node;
		}
	}


	/** User input matrix elements. */
	void input()
	{
		Node *node = head;
		for (int i = 0; i < size; i++)
		{
			cout << "Enter Node[" << i << "]:\n";
			cin >> node->n;
			node = node->next;
		}
	}

	/** Display memory representation. */
	void repr() {
		cout << ">> MEM: ";
		for (Node *node = head; node != NULL; node = node->next)
			cout << node->n << " -> ";
		cout << "NULL" << endl;
	}

	/** Display full matrix. */
	void display() {
		cout << "\n\nInputed value: \n";
		Node *node = head;
		for (int i = size; i > 0; i--, node = node->next) 
		{
			cout << node->n;
			cout << endl;
		}
	}

	/** Sum of triangular matrix. */
	LinkedList add(LinkedList &other) {
		return *this + other;
	}

	/** Overload operator for + with O(n). */
	LinkedList operator+(LinkedList &other) {
		// Assert that both matrix have the same size on debug mode
		assert(size == other.size);

		LinkedList ll(size);
		Node *node = ll.head, *node1 = head, *node2 = other.head;
		while (node != NULL) {  // all 3 linked list have same length
			node->n = node1->n + node2->n;
			node = node->next;
			node1 = node1->next;
			node2 = node2->next;
		}
		return ll;
	}
};



int main()
{
	int size;
	cout << "LinkedList Size: ";
	cin >> size;

	cout << "LinkedList A\n";
	LinkedList ll1(size);
	ll1.input();
	ll1.display();

	cout << "LinkedList B\n";
	LinkedList ll2(size);
	ll2.input();
	ll2.display();

	cout << "LinkedList C\n";
	LinkedList ll3 = ll1.add(ll2);
	ll3.display();
	ll3.repr();

	return 0;
}
