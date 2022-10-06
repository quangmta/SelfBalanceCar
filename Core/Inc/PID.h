/*
 * PID.h
 *
 *  Created on: Jul 28, 2021
 *      Author: nguye
 */

#ifndef INC_PID_H_
#define INC_PID_H_

typedef struct
{
 float K;
 float Kp;
 float Ki;
 float Kd;
} PidParameter;
double  PidCaculate (PidParameter PID,float iAngle, float isetPoint );
#endif /* INC_PID_H_ */
