#pragma once
#include <iostream>
using namespace std;
#ifndef REFRIGERATOR_H  // 头文件守卫，防止重复包含
#define REFRIGERATOR_H

#include <string>

// 冰箱类：封装冰箱的状态和操作
class Refrigerator {
private:
	bool isOpen;       // 冰箱门状态（true为打开）
	string contents;   // 冰箱内物品

public:
	Refrigerator();    // 构造函数：初始化冰箱
	void openDoor();   // 打开冰箱门
	void closeDoor();  // 关闭冰箱门
	bool putThing(const string& thing);  // 放入物品（返回是否成功）
	string getContents() const;          // 获取当前物品
};

#endif  // REFRIGERATOR_H