#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
typedef struct Node* node;
// cap phat mot node voi du lieu la so nguyen x( cap phat dong)
node makeNode(int x) {
	node tmp = new Node();// cap phát động cho mỗi nốt
	tmp->data = x;
	tmp->next = NULL;//(nullptr)
	return tmp; 
}
// kiem tra rỗng
bool empty(node a) {
	return a == NULL; 
}
int Size( node a) {
	int cnt = 0;
	while (a != NULL) {
		cnt++;
		a = a->next; 
	}
	return cnt;
}
// them phan tư vao đầu danh sách liên kết
void insertfirst(node &a, int x) {
	node tmp = makeNode(x);
	if (a == NULL) a = tmp;
	else {
		tmp->next = a;
		a = tmp;
	}
}
// thêm vào danh sách ở cuối
void insertlast(node& a, int x ) {
	node tmp = makeNode(x);
	if (a == NULL) a = tmp;
	else {
		node p = a;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}
// thêm vào vị trí ở giũa
void insertmiddle(node& a, int x, int pos) {
	int n = Size(a);
	if (pos <= 0 || pos > n + 1) cout << "khong hop le\n";
	if (n == 1) {
		insertfirst(a, x); return;
	}
	else if (n == pos + 1) {
		insertlast(a, x); return;
	}
	node p = a;
	for (int i = 1; i < pos - 1; i++) {
		p = p->next;
	}
	node tmp = makeNode(x);
	tmp->next = p->next;
	p->next = tmp;

}
// xóa phầ tử ở đầu
void deletefirst(node& a) {
	if (a == NULL) return;
	a = a->next;
}
// xóa phần tử ở cuối
void deletelast(node& a) {
	node truoc = NULL, sau = a;
	if (a == NULL) return;
	else {
		while (sau->next != NULL) {
			truoc = sau;
			sau = sau->next;
		}
		if (truoc == NULL) {
			a = NULL;
		}
		else {
			truoc->next = sau->next;
		}
	}

}
// xóa phần tử ở giữa 
void deletemiddle(node& a, int pos) {
	node truoc = NULL, sau = a;
	if (pos <= 0 || pos > Size(a)) {
		cout << "Khong hop le\n";
		return;
	}
	for (int i = 1; i < pos; i++) {
		truoc = sau;
		sau = sau->next;
	}
	if (truoc == NULL) {
		a = NULL;
	}
	else {
		truoc->next = sau->next;
	}
}
void in(node a) {
	cout << "--------------------------\n";
	while (a != NULL) {
		cout << a->data << " ";
		a = a->next;
	}
	cout << "\n--------------------------\n";
}
void Sort(node &a) {
	for (node b=a; b->next != NULL; b = b->next) {
		node min = b;
		for (node q = b->next; q->next != NULL; q = q->next) {
			if (b->data > q->data) {
				min = q;
			}
		}
		int tmp = min->data;
		min->data = b->data;
		b->data = tmp;
	}
}
int main()
{
	node head = NULL;
	while (1) {
		cout << "-------MENU-------\n";
		cout << "1 : chen o dau\n";
		cout << "2: chen o cuoi\n";
		cout << "3: chen o giua\n";
		cout << "4: xoa o dau\n";
		cout << "5: xoa o cuoi\n";
		cout << "6: xoa o giua\n";
		cout << "7: duyet danh sach\n";
		cout << "-------------------\n";
		int n; cout << "Nhap lua chon: "; cin >> n;
		if (n == 1) {
			int x; cin >> x;
			insertfirst(head, x);
		}
		else if (n == 2) {
			int x; cin >> x;
			insertlast(head, x);
		}
		else if (n == 3) {
			int x, y; cin >> x >> y;
			insertmiddle(head, x, y);
		}
		else if (n == 4) {
			deletefirst(head);
		}
		else if (n == 5) {
			deletelast(head);
		}
		else if (n == 6) {
			int x; cin >> x;
			deletemiddle(head, x);
		}
		else if(n==7){
			Sort(head);
		}
		else {
			in(head);
		}
	}

	return 0;
}