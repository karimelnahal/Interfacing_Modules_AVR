/*
 * BIT_MATH.h
 *
 * Created: 1/13/2024 4:44:24 PM
 *  Author: karim
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/*--------------------BIT Configurations--------------------*/
#define SET_BIT(REG,BIT) REG|= (1<<BIT)

#define CLR_BIT(REG,BIT) REG&=~(1<<BIT)

#define TGL_BIT(REG,BIT) REG^= (1<<BIT)

#define GET_BIT(REG,BIT) ((REG>>BIT)&1)
/*---------------------------END---------------------------*/



#endif /* BIT_MATH_H_ */