#include "Refrigerator.h" // ���������

// ��ʼ�����䣺Ĭ�Ϲرգ��ڲ�Ϊ��
Refrigerator::Refrigerator() : isOpen(false), contents("�յ�") {}

// �򿪱�����
void Refrigerator::openDoor() {
	if (!isOpen) {
		isOpen = true;
		cout << "�������Ѵ�" << endl;
	}
	else {
		cout << "�����ű������ǿ��ŵ�" << endl;
	}
}

// �رձ�����
void Refrigerator::closeDoor() {
	if (isOpen) {
		isOpen = false;
		cout << "�������ѹر�" << endl;
	}
	else {
		cout << "�����ű������ǹ��ŵ�" << endl;
	}
}

// ������Ʒ�������Ŵ�ʱ����
bool Refrigerator::putThing(const string& thing) {
	if (isOpen) {
		contents = thing;
		cout << "�ɹ�����" << thing << "���������" << endl;
		return true;
	}
	else {
		cout << "ʧ�ܣ�������û�򿪣��Ų���ȥ��" << endl;
		return false;
	}
}

// ���ص�ǰ�����ڵ���Ʒ
string Refrigerator::getContents() const {
	return contents;
}
int main() {
	// �����������
	Refrigerator fridge;
	// Ҫ�������Ʒ
	string thing = "����";

	cout << "=== ��ʼִ�С��Ѵ���װ�����䡹���� ===" << endl;

	// ����1���򿪱�����
	cout << "\n����1���򿪱�����" << endl;
	fridge.openDoor();

	// ����2���Ѵ���Ž�ȥ
	cout << "\n����2���Ѵ���Ž�ȥ" << endl;
	fridge.putThing(thing);

	// ����3���رձ�����
	cout << "\n����3���رձ�����" << endl;
	fridge.closeDoor();

	// ��֤���
	cout << "\n=== ������� ===" << endl;
	cout << "�����������У�" << fridge.getContents() << endl;

	return 0;
}