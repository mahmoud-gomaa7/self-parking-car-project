
#ifndef UTILS_BIT_MATH_H_
#define UTILS_BIT_MATH_H_


#define SET_BIT(REG , BITNUM) REG |= 1<<BITNUM
#define CLR_BIT(REG , BITNUM) REG &= ~(1<<BITNUM)
#define TOG_BIT(REG , BITNUM) REG ^= 1<<BITNUM
#define GET_BIT(REG , BITNUM) (REG >> BITNUM) & 1

#endif /* UTILS_BIT_MATH_H_ */
