#include"BST.h"
template<typename T>
void display(BST<T>& t, traversal type = IN_ORDER) {
	t.reset(type);
	while (!t.is_last(type)) {
		cout << t.get_next(type) << " ";
	}
	cout << endl;
}
int main() {
	BST<int> b;
	b.insert(50);
	b.insert(25);
	b.insert(75);
	b.insert(100);
	b.insert(80);
	b.insert(90);
	b.insert(30);
	b.insert(28);
	b.insert(10);
	b.insert(5);
	b.insert(3);
	/*cout << "IN_ORDER : ";
	display(b, IN_ORDER);
	cout << "PRE_ORDER : ";
	display(b, PRE_ORDER);
	cout << "POST_ORDER : ";
	display(b, POST_ORDER);
	cout << "LEVEL_ORDER : ";
	display(b, LEVEL_ORDER);*/
	BST<int>b2(b), b3;
	b2.erase(50);
	b3 = b2;
	b3.erase(30);
	display(b, LEVEL_ORDER);
	display(b2, LEVEL_ORDER);
	display(b3, LEVEL_ORDER);
	return 0;
}