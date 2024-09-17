
#ifndef MCAL_DIO_DIO_REG_H_
#define MCAL_DIO_DIO_REG_H_


                                   /****DIO Registers***/


/* Group A Registers */
#define PORTA  *((volatile u8*)0x3B)
#define DDRA   *((volatile u8*)0x3A)
#define PINA   *((volatile u8*)0x39)

/* Group B Registers */
#define PORTB  *((volatile u8*)0x38)
#define DDRB  *((volatile u8*)0x37)
#define PINB   *((volatile u8*)0x36)

/* Group C Registers */
#define PORTC  *((volatile u8*)0x35)
#define DDRC   *((volatile u8*)0x34)
#define PINC   *((volatile u8*)0x33)

/* Group D Registers */
#define PORTD  *((volatile u8*)0x32)
#define DDRD   *((volatile u8*)0x31)
#define PIND  *((volatile u8*)0x30)




/*External interrupts */
#define MCUCR *((volatile u8 *)0x55)
#define MCUCSR *((volatile u8 *)0x54)
#define GICR *((volatile u8 *)0x5B)
#define GIFR *((volatile u8 *)0x5A)
#define SREG *((volatile u8 *)0x5F)






/*timer 0*/
#define TCCR0 *((volatile u8 *)0x53)
#define TCNT0 *((volatile u8 *)0x52)
#define TIMSK *((volatile u8 *)0x59)
#define TIFR *((volatile u8 *)0x58)
#define OCR0 *((volatile u8 *)0x5C)
#endif /* REGISTERS_H_ */

/*Timer 1*/
#define TCCR1A *((volatile u8 *)0x4F)
#define TCCR1B *((volatile u8 *)0x4E)
#define OCR1A *((volatile u16 *)0x4A)
#define ICR1A *((volatile u16 *)0x46)
#define TCNT1 *((volatile u16 *)0x4C)
#define OCR1B *((volatile u16 *)0x48)
#define ICR1 *((volatile u16 *)0x46)



/*Timer 2*/
#define TCCR2 *((volatile u8 *)0x45)
#define TCNT2 *((volatile u8 *)0x44)
#define ASSR *((volatile u8 *)0x42)
#define OCR2 *((volatile u8 *)0x43)


#endif /* MCAL_DIO_DIO_REG_H_ */
