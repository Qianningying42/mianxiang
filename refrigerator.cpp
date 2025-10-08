#include "refrigerator.h"
#include <iostream>

// 构造函数实现
Refrigerator::Refrigerator(std::string fridgeName)
	: name(fridgeName), isOpen(false), hasElephant(false) {
	std::cout << "冰箱 '" << name << "' 已创建！" << std::endl;
}

// 打开冰箱门
void Refrigerator::openDoor() {
	if (isOpen) {
		std::cout << "冰箱 '" << name << "' 已经是打开的！" << std::endl;
	}
	else {
		isOpen = true;
		std::cout << "冰箱 '" << name << "' 被打开了！" << std::endl;
	}
}

// 关闭冰箱门
void Refrigerator::closeDoor() {
	if (!isOpen) {
		std::cout << "冰箱 '" << name << "' 已经是关闭的！" << std::endl;
	}
	else {
		isOpen = false;
		std::cout << "冰箱 '" << name << "' 被关上了！" << std::endl;
	}
}

// 检查冰箱是否打开
bool Refrigerator::getIsOpen() const {
	return isOpen;
}

// 放入大象
bool Refrigerator::putElephant() {
	if (!isOpen) {
		std::cout << "无法放入大象，冰箱 '" << name << "' 是关闭的！" << std::endl;
		return false;
	}

	if (hasElephant) {
		std::cout << "冰箱 '" << name << "' 里已经有一头大象了！" << std::endl;
		return false;
	}

	hasElephant = true;
	std::cout << "大象被成功放入冰箱 '" << name << "' 里了！" << std::endl;
	return true;
}

// 取出大象
bool Refrigerator::takeOutElephant() {
	if (!isOpen) {
		std::cout << "无法取出大象，冰箱 '" << name << "' 是关闭的！" << std::endl;
		return false;
	}

	if (!hasElephant) {
		std::cout << "冰箱 '" << name << "' 里本来就没有大象！" << std::endl;
		return false;
	}

	hasElephant = false;
	std::cout << "大象被从冰箱 '" << name << "' 里取出来了！" << std::endl;
	return true;
}

// 检查冰箱里是否有大象
bool Refrigerator::getHasElephant() const {
	return hasElephant;
}

// 获取冰箱名称
std::string Refrigerator::getName() const {
	return name;
}
