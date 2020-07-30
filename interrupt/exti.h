#ifndef EXTI_H
#define EXTI_H

#include <stdint.h>

#if defined(STM32F3)

struct EXTI_t {
	volatile uint32_t IMR1;
	volatile uint32_t EMR1;
	volatile uint32_t RTSR1;
	volatile uint32_t FTSR1;
	volatile uint32_t SWIER1;
	volatile uint32_t PR1;
	volatile uint32_t IMR2;
	volatile uint32_t EMR2;
	volatile uint32_t RTSR2;
	volatile uint32_t FTSR2;
	volatile uint32_t SWIER2;
	volatile uint32_t PR2;
};

static EXTI_t& EXTI = *(EXTI_t*)0x40010400;

#endif

#endif