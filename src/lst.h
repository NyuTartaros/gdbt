/*
 * lst.h
 *  最小二乘回归树
 *  Created on: 2018年4月21日
 *      Author: NyuTartaros
 */

#ifndef LST_H_
#define LST_H_

class LSTNode{
private:
	LSTNode* leftchild;
	LSTNode* rightchild;
	int j;
	double s;
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

class LST{
private:

	LSTNode* head;
	void getLeftOutput(int j, double s, double** x, double*y);
	void getRightOutput(int j, double s, double** x, double*y);
	void getLeftSet(int j, double s, double** x, double* y);
	void getRightSet(int j, double s, double** x, double* y);

public:
	LST();
	~LST();
	void fit(double** x, double* y);
	void predict(double** x, double* y);
};


#endif /* LST_H_ */
