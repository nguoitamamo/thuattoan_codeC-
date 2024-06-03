#include<iostream>
using namespace std;
struct Node {
	int data;
    Node* next;
};
typedef Node* node;
node makenode( int x) {
	node new_node = new Node;
	new_node->data = x;
	new_node->next = NULL;
	return new_node;
}

int size(node head) {
	int cnt = 0;
	while (head != NULL) {
		head = head->next;
		cnt++;
	}
	return cnt;
}

bool Empty(node head) {
	if (size(head) == 0) {
		return true;
	}
	return false;

}
void duyet(node head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << "\n";
}
// them vào đầu dslk
void insert_first(node& head, int x) {
	node new_node = makenode(x);
	if (head == nullptr) {
		head = new_node;
	}
	else {
		new_node->next = head;
		head = new_node;

	}
}
// them vao cuoi
void insert_last(node& head, int x) {
	node new_node = makenode(x);
	if (head == nullptr) {
		head = new_node;
		return;
	}
	node p = head;
	while (p->next != nullptr) {
		p = p->next;
	}
	p->next= new_node;
	
}
// them vao vi tri pos ( bat ki
void insert_middle(node& head, int x, int pos) {
	node new_node = makenode(x);
	if (pos <= 0 || pos > size(head)) return;
	if (head == NULL) {
		insert_first(head, x);
	}
	else  if (pos == size(head)+1) {
		insert_last(head, x);
	}
	/*else { // ki thuat dung hai con tro
		node truoc = NULL;
		node sau = head;
		for (int i = 1; i < pos; i++) {
			truoc = sau;
			sau = sau->next;
		}
		new_node->next = truoc->next;
		truoc->next = new_node;
	}*/
	else {
		node p = head;
		for (int i = 1; i < pos - 1; i++) {
			p = p->next;
		}
		new_node->next = p->next;
		p->next = new_node;
	}
}

// xoa o dau
void delete_first (node& head) {
	if (head = NULL)  return;
	head = head->next;
}

// xóa ở cuối
void delete_last(node& head) {
	if (size(head) == 1) {
		head = head->next;
	}
	/*else {
		node p = head;
		for (int i = 1; i < size(head) - 1; i++) {
			p = p->next;
		}
		p->next = nullptr;
	}*/
	// có thể dùng kĩ thuật hai con trỏ
	else { // kĩ thuật hai con trỏ
		node truoc = nullptr;
		node sau = head;
		while (sau->next != nullptr) {
			truoc = sau;
			sau = sau->next;
		}
		truoc->next = sau->next;


	}
}

// xóa một vị trí bất kì index 
void delete_middle(node& head, int pos) {
	node truoc = NULL, sau = head;
	if (pos <= 0 || pos > size(head)) {
		cout << "Khong hop le\n";
		return;
	}
	for (int i = 1; i < pos; i++) {
		truoc = sau;
		sau = sau->next;
	}
	if (truoc == NULL) {
		head = NULL;
	}
	else {
		truoc->next = sau->next;
	}
}
int main()
{
	node head = NULL;

	insert_first(head, 1);
	insert_last(head , 10);
	insert_middle(head, 5, 2);
    delete_middle(head, 3);
	duyet(head);
	
	return 0;
}