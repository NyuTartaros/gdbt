/*
 * lst.cpp
 *  最小二乘回归树
 *  Created on: 2018年4月21日
 *      Author: NyuTartaros
 */

#include "lst.h"
#include <iostream>

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
}

/**
 * Constructor
 */
LSTNode::LSTNode(int j, double s){
	leftchild = NULL;
	rightchild = NULL;
	this->j = j;
	this->s = s;
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
void LSTNode::setLeftChild(int j, double s){
	leftchild = new LSTNode(j, s);
}

/**
 * 设置右子节点
 */
void LSTNode::setRightChild(int j, double s){
	rightchild = new LSTNode(j, s);
}

//TODO Recursive delete
/**
 * 删除以结点为根的子树
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
double LST::getLeftOutput(int j, double s, double** x, double*y){

}

/**
 * 获得右子节点的分割区间的输出
 */
double LST::getRightOutput(int j, double s, double** x, double*y){

}

/**
 * 获得左子节点的分割区间的变量集合
 */
void LST::getLeftSet(int j, double s, double** x, double* y){

}

/**
 * 获得右子节点的分割区间的变量集合
 */
void LST::getRightSet(int j, double s, double** x, double* y){

}

/**
 * 训练函数
 */
void LST::fit(double** x, double* y){

}

/**
 * 预测函数
 */
void LST::predict(double* x, double y){

}


