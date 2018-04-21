/*
 * lst.h
 *  最小二乘回归树
 *  Created on: 2018年4月21日
 *      Author: NyuTartaros
 */

#ifndef LST_H_
#define LST_H_

/**
 * 最小二乘回归树，结点类
 */
class LSTNode{
private:
	LSTNode* leftchild;
	LSTNode* rightchild;
	int j;
	// 最优变量
	double s;
	// 最优分割点
public:
	LSTNode();
	LSTNode(int j, double s);
	~LSTNode();
	LSTNode getLeftChild();
	LSTNode getRightChild();
	void setLeftChild(int j, double s);
	void setRightChild(int j, double s);
	void deleteNode();
	int getJ();
	double getS();
};

/**
 * 最小二乘回归树
 */
class LST{
private:

	LSTNode* head;
	// 头结点的指针
	/**
	 * 获得左子集的输出
	 */
	double getLeftOutput(int j, double s, double** x, double*y);
	/**
	 * 获得右子集的输出
	 */
	double getRightOutput(int j, double s, double** x, double*y);
	/**
	 * 获得左子集的样本
	 */
	void getLeftSet(int j, double s, double** x, double* y);
	/**
	 * 获得右子集的样本
	 */
	void getRightSet(int j, double s, double** x, double* y);

public:
	LST();
	~LST();
	/**
	 * 训练函数
	 */
	void fit(double** x, double* y);
	/**
	 * 预测函数
	 */
	void predict(double** x, double* y);
};


#endif /* LST_H_ */
