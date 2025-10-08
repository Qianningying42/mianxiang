#pragma once
#ifndef ELEPHANT_H
#define ELEPHANT_H

#include <string>

class Elephant {
private:
	std::string name;
	bool isInRefrigerator;

public:
	// 构造函数
	Elephant(std::string elephantName);

	// 进入冰箱
	void enterRefrigerator();

	// 离开冰箱
	void leaveRefrigerator();

	// 检查是否在冰箱里
	bool getIsInRefrigerator() const;

	// 获取大象名称
	std::string getName() const;
};

#endif // ELEPHANT_H
