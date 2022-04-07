class Element {
public:
	int data = 0;
	Element* prev = 0;
};
class Q {
public:
	void Push(int value);
	void Pop();
	void Сopying(Q& obj);
	void Connection(Q& obj);
	void OddAM();
	void Show();
protected:
	int size = 0;
private:
	Element* q;
};
