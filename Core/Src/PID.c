#include "PID.h"
#include "stm32f1xx_hal.h"
#define speedMax 400
uint32_t timerPID=0;
float Last_error=0;
float integrated_error=0;
float pidOut=0;
double  PidCaculate (PidParameter PID,float iAngle, float isetPoint )
{
	if(iAngle>30||iAngle<-33)
	{
		pidOut=0;
		Last_error=0;
		integrated_error=0;
	}
	else
	{
		float dTerm, iTerm,pTerm;
		float dt = (float) (HAL_GetTick() - timerPID);
		timerPID = HAL_GetTick();
		float error = isetPoint -  iAngle;
		if(pidOut>10||pidOut<-10) error+=pidOut*0.015;
		if ( dt != 0) {
			dTerm =  1000*PID.Kd * (Last_error-error)/dt;
		}
		integrated_error += error * dt;
		iTerm =   PID.Ki * integrated_error/1000.0;
		if(iTerm>speedMax/2) iTerm=speedMax/2;
		else if(iTerm<-speedMax/2) iTerm=-speedMax/2;
		pTerm =   PID.Kp  * error;
		// Compute PID Output in Steps per second
		pidOut = PID.K * (pTerm + iTerm + dTerm) ;
		/*Remember something*/
		Last_error = error;
		if (pidOut>speedMax) pidOut=speedMax;
		else if(pidOut<-speedMax) pidOut=-speedMax;
		if(pidOut<5&pidOut >-5) pidOut=0;
	}
	return pidOut;
}
