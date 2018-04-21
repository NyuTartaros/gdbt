/*
 * lst.h
 *  最小二乘回归树
 *  Created on: 2018年4月21日
 *      Author: NyuTartaros
 */

#ifndef LST_H_
#define LST_H_

class LST{
private:

public:
	LST();
	~LST();
	void fit(double** x, double* y);
	void predict(double** x, double* y);
};



#endif /* LST_H_ */
