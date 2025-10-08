#include "refrigerator.h"
#include "elephant.h"
#include <iostream>

// 函数声明：把大象放进冰箱的步骤
void putElephantInRefrigerator(Refrigerator& fridge, Elephant& elephant);

// 函数声明：把大象从冰箱取出的步骤
void takeElephantOutOfRefrigerator(Refrigerator& fridge, Elephant& elephant);

int main() {
	std::cout << "=== 大象进冰箱模拟器 ===" << std::endl << std::endl;

	// 创建一个冰箱和一头大象
	Refrigerator bigFridge("乔尼亚的超级大冰箱");
	Elephant dumbo("小小象");

	std::cout << std::endl << "=== 开始执行把大象放进冰箱的操作 ===" << std::endl;
	putElephantInRefrigerator(bigFridge, dumbo);

	std::cout << std::endl << "=== 检查状态 ===" << std::endl;
	std::cout << "冰箱状态：" << (bigFridge.getIsOpen() ? "打开" : "关闭") << std::endl;
	std::cout << "冰箱里有大象吗？" << (bigFridge.getHasElephant() ? "有" : "没有") << std::endl;
	std::cout << "大象在冰箱里吗？" << (dumbo.getIsInRefrigerator() ? "在" : "不在") << std::endl;

	std::cout << std::endl << "=== 把大象从冰箱里取出来 ===" << std::endl;
	takeElephantOutOfRefrigerator(bigFridge, dumbo);

	std::cout << std::endl << "=== 操作完成 ===" << std::endl;
	return 0;
}

// 实现把大象放进冰箱的步骤
void putElephantInRefrigerator(Refrigerator& fridge, Elephant& elephant) {
	// 第一步：打开冰箱门
	fridge.openDoor();

	// 第二步：把大象放进去
	if (fridge.putElephant()) {
		elephant.enterRefrigerator();
	}

	// 第三步：关上冰箱门
	fridge.closeDoor();
}

// 实现把大象从冰箱取出的步骤
void takeElephantOutOfRefrigerator(Refrigerator& fridge, Elephant& elephant) {
	// 第一步：打开冰箱门
	fridge.openDoor();

	// 第二步：把大象取出来
	if (fridge.takeOutElephant()) {
		elephant.leaveRefrigerator();
	}

	// 第三步：关上冰箱门
	fridge.closeDoor();
}
