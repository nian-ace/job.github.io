#include "Refrigerator.h" // 引入冰箱类

// 初始化冰箱：默认关闭，内部为空
Refrigerator::Refrigerator() : isOpen(false), contents("空的") {}

// 打开冰箱门
void Refrigerator::openDoor() {
	if (!isOpen) {
		isOpen = true;
		cout << "冰箱门已打开" << endl;
	}
	else {
		cout << "冰箱门本来就是开着的" << endl;
	}
}

// 关闭冰箱门
void Refrigerator::closeDoor() {
	if (isOpen) {
		isOpen = false;
		cout << "冰箱门已关闭" << endl;
	}
	else {
		cout << "冰箱门本来就是关着的" << endl;
	}
}

// 放入物品（仅当门打开时允许）
bool Refrigerator::putThing(const string& thing) {
	if (isOpen) {
		contents = thing;
		cout << "成功将【" << thing << "】放入冰箱" << endl;
		return true;
	}
	else {
		cout << "失败：冰箱门没打开，放不进去！" << endl;
		return false;
	}
}

// 返回当前冰箱内的物品
string Refrigerator::getContents() const {
	return contents;
}
int main() {
	// 创建冰箱对象
	Refrigerator fridge;
	// 要放入的物品
	string thing = "大象";

	cout << "=== 开始执行「把大象装进冰箱」步骤 ===" << endl;

	// 步骤1：打开冰箱门
	cout << "\n步骤1：打开冰箱门" << endl;
	fridge.openDoor();

	// 步骤2：把大象放进去
	cout << "\n步骤2：把大象放进去" << endl;
	fridge.putThing(thing);

	// 步骤3：关闭冰箱门
	cout << "\n步骤3：关闭冰箱门" << endl;
	fridge.closeDoor();

	// 验证结果
	cout << "\n=== 操作结果 ===" << endl;
	cout << "冰箱里现在有：" << fridge.getContents() << endl;

	return 0;
}