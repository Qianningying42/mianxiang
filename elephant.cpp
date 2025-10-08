#include "elephant.h"
#include <iostream>

// 构造函数实现
Elephant::Elephant(std::string elephantName)
	: name(elephantName), isInRefrigerator(false) {
	std::cout << "大象 '" << name << "' 出现了！" << std::endl;
}

// 进入冰箱
void Elephant::enterRefrigerator() {
	if (isInRefrigerator) {
		std::cout << "大象 '" << name << "' 已经在冰箱里了！" << std::endl;
	}
	else {
		isInRefrigerator = true;
		std::cout << "大象 '" << name << "' 进入了冰箱！" << std::endl;
	}
}

// 离开冰箱
void Elephant::leaveRefrigerator() {
	if (!isInRefrigerator) {
		std::cout << "大象 '" << name << "' 本来就不在冰箱里！" << std::endl;
	}
	else {
		isInRefrigerator = false;
		std::cout << "大象 '" << name << "' 离开了冰箱！" << std::endl;
	}
}

// 检查是否在冰箱里
bool Elephant::getIsInRefrigerator() const {
	return isInRefrigerator;
}

// 获取大象名称
std::string Elephant::getName() const {
	return name;
}
