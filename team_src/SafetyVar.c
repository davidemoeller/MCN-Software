/*
 * CRC.c
 *
 *  Created on: Apr 17, 2016
 *      Author: David
 */

#include "all.h"

void SafetyVar_NewValue(SafetyVar32_t *ptr, Uint32 value){

	ptr->origVal = value;
	ptr->inverseVal = ~ptr->origVal;

	return;
}

Uint32 SafetyVar_getValue(SafetyVar32_t *ptr){

	return ptr->origVal;

}

int SafetyVar_CheckValue(SafetyVar32_t *ptr){

	if ( ~ptr->inverseVal != ptr->origVal){
		return 0;
	}
	else {
		return 1;
	}
}

