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
LSTNode::LSTNode(){
	leftchild = NULL;
	rightchild = NULL;
	j = NULL;
	s = NULL;
}

LSTNode::LSTNode(int j, double s){
	leftchild = NULL;
	rightchild = NULL;
	this->j = j;
	this->s = s;
}

LSTNode::~LSTNode(){
	getLeftChild().deleteNode();
	getRightChild().deleteNode();
}

LSTNode LSTNode::getLeftChild(){
	return &leftchild;
}

LSTNode LSTNode::getRightChild(){
	return &rightchild;
}

void LSTNode::setLeftChild(int j, double s){
	leftchild = new LSTNode(j, s);
}

void LSTNode::setRightChild(int j, double s){
	rightchild = new LSTNode(j, s);
}

//TODO Recursive delete
void LSTNode::deleteNode(){

}

int LSTNode::getJ(){
	return j;
}

double LSTNode::getS(){
	return s;
}



/*
 * LST Implementation
 */
LST::LST(){

}

LST::~LST(){

}

void LST::getLeftOutput(int j, double s, double** x, double*y){

}

void LST::getRightOutput(int j, double s, double** x, double*y){

}

void LST::getLeftSet(int j, double s, double** x, double* y){

}

void LST::getRightSet(int j, double s, double** x, double* y){

}

void LST::fit(double** x, double* y){

}

void LST::predict(double** x, double* y){

}


