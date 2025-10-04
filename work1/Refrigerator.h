#pragma once
#include <iostream>
using namespace std;
#ifndef REFRIGERATOR_H  // ͷ�ļ���������ֹ�ظ�����
#define REFRIGERATOR_H

#include <string>

// �����ࣺ��װ�����״̬�Ͳ���
class Refrigerator {
private:
	bool isOpen;       // ������״̬��trueΪ�򿪣�
	string contents;   // ��������Ʒ

public:
	Refrigerator();    // ���캯������ʼ������
	void openDoor();   // �򿪱�����
	void closeDoor();  // �رձ�����
	bool putThing(const string& thing);  // ������Ʒ�������Ƿ�ɹ���
	string getContents() const;          // ��ȡ��ǰ��Ʒ
};

#endif  // REFRIGERATOR_H