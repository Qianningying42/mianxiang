#pragma once
#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include <string>

class Refrigerator {
private:
	std::string name;
	bool isOpen;
	bool hasElephant;

public:
	// 构造函数
	Refrigerator(std::string fridgeName);

	// 打开冰箱门
	void openDoor();

	// 关闭冰箱门
	void closeDoor();

	// 检查冰箱是否打开
	bool getIsOpen() const;

	// 放入大象
	bool putElephant();

	// 取出大象
	bool takeOutElephant();

	// 检查冰箱里是否有大象
	bool getHasElephant() const;

	// 获取冰箱名称
	std::string getName() const;
};

#endif // REFRIGERATOR_H
