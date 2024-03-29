/*
 * wallfollowing_multirange_onboard.h
 *
 *  Created on: Aug 7, 2018
 *      Author: knmcguire
 */

#ifndef SRC_WALLFOLLOWING_MULTIRANGER_ONBOARD_H_
#define SRC_WALLFOLLOWING_MULTIRANGER_ONBOARD_H_
#include <stdint.h>
#include <stdbool.h>

typedef enum
{
    forward,
    hover,
} StateWF;

StateWF wallFollower(float *cmdVelX, float *cmdVelY, float *cmdAngW, float *cmdHeight, float currentHeading, float timeOuter, double yawRate);

void adjustDistanceWall(float distanceWallNew);

void wallFollowerInit(float maxForwardSpeed_ref, StateWF initState);
#endif /* SRC_WALLFOLLOWING_MULTIRANGER_ONBOARD_H_ */
