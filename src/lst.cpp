/*
 * lst.cpp
 *  最小二乘回归树
 *  Created on: 2018年4月21日
 *      Author: NyuTartaros
 */

#include "lst.h"
#include <iostream>
#include <vector>

using namespace std;

/*
 * SampleSet Implementation
 */
/**
 * Constructor
 */
SampleSet::SampleSet(){
	x = NULL;
	y = NULL;
}

/**
 * Constructor
 */
SampleSet::SampleSet(vector<vector<double>> x, vector<double> y){
	this->x = x;
	this->y = y;
}

/**
 * Destructor
 */
SampleSet::~SampleSet(){

}

vector<vector<double>> SampleSet::getX(){
	return x;
}

void SampleSet::setX(vector<vector<double>> x){
	this->x = x;
}

vector<double> SampleSet::getY(){
	this->y = y;
}

void SampleSet::setY(vector<double> y){
	this->y= 9;
}

/*
 * LSTNode Implementation
 */
/**
 * Constructor
 */
LSTNode::LSTNode(){
	leftchild = NULL;
	rightchild = NULL;
	j = NULL;
	s = NULL;
	cLeft = NULL;
	cRight = NULL;
}

/**
 * Constructor
 */
LSTNode::LSTNode(int j, double s, double cLeft, double cRight){
	leftchild = NULL;
	rightchild = NULL;
	this->j = j;
	this->s = s;
	this->cLeft = cLeft;
	this->cRight = cRight;
}

/**
 * Destructor
 */
LSTNode::~LSTNode(){
	getLeftChild().deleteNode();
	getRightChild().deleteNode();
}

/**
 * 获得左子树
 */
LSTNode LSTNode::getLeftChild(){
	return &leftchild;
}

/**
 * 获得右子树
 */
LSTNode LSTNode::getRightChild(){
	return &rightchild;
}

/**
 * 设置左子节点
 */
void LSTNode::setLeftChild(int j, double s, double cLeft, double cRight){
	leftchild = new LSTNode(j, s, cLeft, cRight);
}

/**
 * 设置右子节点
 */
void LSTNode::setRightChild(int j, double s, double cLeft, double cRight){
	rightchild = new LSTNode(j, s, cLeft, cRight);
}

//TODO Recursive delete
/**
 * 删除以当前结点为根的子树
 */
void LSTNode::deleteNode(){

}

/**
 * 获得当前节点的最佳变量
 */
int LSTNode::getJ(){
	return j;
}

/**
 * 获得当前节点的最佳分割点
 */
double LSTNode::getS(){
	return s;
}

/**
 * 获得当前节点左子集的输出值
 */
double LSTNode::getCLeft(){
	return cLeft;
}

/**
 * 获得当前节点右子集的输出值
 */
double LSTNode::getCRight(){
	return cRight;
}


/*
 * LST Implementation
 */
/**
 * Constructor
 */
LST::LST(){
	head = NULL;
}

/**
 * Destructor
 */
LST::~LST(){
	head->deleteNode();
}

/**
 * 获得左子节点的分割区间的输出
 */
double LST::getLeftOutput(int j, double s, vector<vector<double>> x, vector<double> y){
	int count = 0;
	double sum = 0;
	for(int i=0; i < y.size(); i++){
		if( x[i][j] <= s){
			sum += y[i];
			count++;
		}
	}
	return sum/(double)count;
}

/**
 * 获得右子节点的分割区间的输出
 */
double LST::getRightOutput(int j, double s, vector<vector<double>> x, vector<double> y){
	int count = 0;
	double sum = 0;
	for(int i=0; i <y.size(); i++){
		if( x[i][j] > s){
			sum += y[i];
			count++;
		}
	}
	return sum/(double)count;
}

/**
 * 获得左子节点的分割区间的变量集合
 */
SampleSet LST::getLeftSet(int j, double s, vector<vector<double>> x, vector<double> y){
	vector<vector<double>> xOut;
	vector<double> yOut;
	for(int i=0; i < x.size(); i++){
		if( x[i][j] <= s){
			xOut.push_back(x[i]);
			yOut.push_back(y[i]);
		}
	}
	return SampleSet(xOut, yOut);
}

/**
 * 获得右子节点的分割区间的变量集合
 */
SampleSet LST::getRightSet(int j, double s, vector<vector<double>> x, vector<double> y){
	vector<vector<double>> xOut;
	vector<double> yOut;
	for(int i=0; i < x.size(); i++){
		if( x[i][j] > s){
			xOut.push_back(x[i]);
			yOut.push_back(y[i]);
		}
	}
	return SampleSet(xOut, yOut);
}

/**
 * 训练函数
 */
void LST::fit(double** x, double* y){

}

/**
 * 预测函数
 */
double LST::predict(double* x, double y){

}


