/*
 * main.h
 *
 *  Created on: Jun 13, 2024
 *      Author: vatsa_3xta8ad
 */

#ifndef MAIN_H_
#define MAIN_H_

typedef struct{
	uint32_t volatile GPIOA :1;
	uint32_t volatile GPIOB:1;
	uint32_t volatile GPIOC:1;
	uint32_t volatile GPIOD:1;
	uint32_t volatile GPIOE:1;
	uint32_t volatile GPIOF:1;
	uint32_t volatile GPIOG:1;
	uint32_t volatile GPIOH:1;
}RCC_AHBENR1;

// GPIO ALL Registers
typedef struct{
	uint32_t volatile MODER0:1;
	uint32_t volatile MODER1:1;
	uint32_t volatile MODER2:1;
	uint32_t volatile MODER3:1;
	uint32_t volatile MODER4:1;
	uint32_t volatile MODER5:1;
	uint32_t volatile MODER6:1;
	uint32_t volatile MODER7:1;
	uint32_t volatile MODER8:1;
	uint32_t volatile MODER9:1;
	uint32_t volatile MODER10:1;
	uint32_t volatile MODER11:1;
	uint32_t volatile MODER12:1;
	uint32_t volatile MODER13:1;
	uint32_t volatile MODER14:1;
	uint32_t volatile MODER15:1;
	uint32_t volatile MODE16:1;
	uint32_t volatile MODER17:1;
	uint32_t volatile MODER18:1;
	uint32_t volatile MODER19:1;
	uint32_t volatile MODER20:1;
	uint32_t volatile MODER21:1;
	uint32_t volatile MODER22:1;
	uint32_t volatile MODER23:1;
	uint32_t volatile MODER24:1;
	uint32_t volatile MODER25:1;
	uint32_t volatile MODER26:1;
	uint32_t volatile MODER27:1;
	uint32_t volatile MODER28:1;
	uint32_t volatile MODER29:1;
	uint32_t volatile MODER30:1;
	uint32_t volatile MODER31:1;
}GPIO_MODER_t;
typedef struct{
	uint32_t volatile OTYPER0:1;
	uint32_t volatile OTYPER1:1;
	uint32_t volatile OTYPER2:1;
	uint32_t volatile OTYPER3:1;
	uint32_t volatile OTYPER4:1;
	uint32_t volatile OTYPER5:1;
	uint32_t volatile OTYPER6:1;
	uint32_t volatile OTYPER7:1;
	uint32_t volatile OTYPER8:1;
	uint32_t volatile OTYPER9:1;
	uint32_t volatile OTYPER10:1;
	uint32_t volatile OTYPER11:1;
	uint32_t volatile OTYPER12:1;
	uint32_t volatile OTYPER13:1;
	uint32_t volatile OTYPER14:1;
	uint32_t volatile OTYPER15:1;

}GPIO_OTYPER_t;
typedef struct{
	uint32_t volatile SPEEDR0:1;
		uint32_t volatile SPEEDR1:1;
		uint32_t volatile SPEEDR2:1;
		uint32_t volatile SPEEDR3:1;
		uint32_t volatile SPEEDR4:1;
		uint32_t volatile SPEEDR5:1;
		uint32_t volatile SPEEDR6:1;
		uint32_t volatile SPEEDR7:1;
		uint32_t volatile SPEEDR8:1;
		uint32_t volatile SPEEDR9:1;
		uint32_t volatile SPEEDR10:1;
		uint32_t volatile SPEEDR11:1;
		uint32_t volatile SPEEDR12:1;
		uint32_t volatile SPEEDR13:1;
		uint32_t volatile SPEEDR14:1;
		uint32_t volatile SPEEDR15:1;
		uint32_t volatile SPEEDR16:1;
		uint32_t volatile SPEEDR17:1;
		uint32_t volatile SPEEDR18:1;
		uint32_t volatile SPEEDR19:1;
		uint32_t volatile SPEEDR20:1;
		uint32_t volatile SPEEDR21:1;
		uint32_t volatile SPEEDR22:1;
		uint32_t volatile SPEEDR23:1;
		uint32_t volatile SPEEDR24:1;
		uint32_t volatile SPEEDR25:1;
		uint32_t volatile SPEEDR26:1;
		uint32_t volatile SPEEDR27:1;
		uint32_t volatile SPEEDR28:1;
		uint32_t volatile SPEEDR29:1;
		uint32_t volatile SPEEDR30:1;
		uint32_t volatile SPEEDR31:1;

}GPIO_SPEEDR_t;
typedef struct{
		uint32_t volatile PUPDR0:1;
		uint32_t volatile PUPDR1:1;
		uint32_t volatile PUPDR2:1;
		uint32_t volatile PUPDR3:1;
		uint32_t volatile PUPDR4:1;
		uint32_t volatile PUPDR5:1;
		uint32_t volatile PUPDR6:1;
		uint32_t volatile PUPDR7:1;
		uint32_t volatile PUPDR8:1;
		uint32_t volatile PUPDR9:1;
		uint32_t volatile PUPDR10:1;
		uint32_t volatile PUPDR11:1;
		uint32_t volatile PUPDR12:1;
		uint32_t volatile PUPDR13:1;
		uint32_t volatile PUPDR14:1;
		uint32_t volatile PUPDR15:1;
		uint32_t volatile PUPDR16:1;
		uint32_t volatile PUPDR17:1;
		uint32_t volatile PUPDR18:1;
		uint32_t volatile PUPDR19:1;
		uint32_t volatile PUPDR20:1;
		uint32_t volatile PUPDR21:1;
		uint32_t volatile PUPDR22:1;
		uint32_t volatile PUPDR23:1;
		uint32_t volatile PUPDR24:1;
		uint32_t volatile PUPDR25:1;
		uint32_t volatile PUPDR26:1;
		uint32_t volatile PUPDR27:1;
		uint32_t volatile PUPDR28:1;
		uint32_t volatile PUPDR29:1;
		uint32_t volatile PUPDR30:1;
		uint32_t volatile PUPDR31:1;

}GPIO_PUPDR_t;
typedef struct{
	uint32_t volatile IDATA0:1;
	uint32_t volatile IDATA1:1;
	uint32_t volatile IDATA2:1;
	uint32_t volatile IDATA3:1;
	uint32_t volatile IDATA4:1;
	uint32_t volatile IDATA5:1;
	uint32_t volatile IDATA6:1;
	uint32_t volatile IDATA7:1;
	uint32_t volatile IDATA8:1;
	uint32_t volatile IDATA9:1;
	uint32_t volatile IDATA10:1;
	uint32_t volatile IDATA11:1;
	uint32_t volatile IDATA12:1;
	uint32_t volatile IDATA13:1;
	uint32_t volatile IDATA14:1;
	uint32_t volatile IDATA15:1;
}GPIO_Input_DATA_t;


typedef struct{
	uint32_t volatile ODATA0:1;
	uint32_t volatile ODATA1:1;
	uint32_t volatile ODATA2:1;
	uint32_t volatile ODATA3:1;
	uint32_t volatile ODATA4:1;
	uint32_t volatile ODATA5:1;
	uint32_t volatile ODATA6:1;
	uint32_t volatile ODATA7:1;
	uint32_t volatile ODATA8:1;
	uint32_t volatile ODATA9:1;
	uint32_t volatile ODATA10:1;
	uint32_t volatile ODATA11:1;
	uint32_t volatile ODATA12:1;
	uint32_t volatile ODATA13:1;
	uint32_t volatile ODATA14:1;
	uint32_t volatile ODATA15v;

}GPIO_Output_DATA_t;

typedef struct{
	uint32_t volatile BSRR0:1;
	uint32_t volatile BSRR1:1;
	uint32_t volatile BSRR2:1;
	uint32_t volatile BSRR3v;
	uint32_t volatile BSRR4:1;
	uint32_t volatile BSRR5v;
	uint32_t volatile BSRR6:1;
	uint32_t volatile BSRR7:1;
	uint32_t volatile BSRR8:1;
	uint32_t volatile BSRR9:1;
	uint32_t volatile BSRR10:1;
	uint32_t volatile BSRR11:1;
	uint32_t volatile BSRR12:1;
	uint32_t volatile BSRR13:1;
	uint32_t volatile BSRR14:1;
	uint32_t volatile BSRR15:1;
	uint32_t volatile BSRR16:1;
	uint32_t volatile BSRR17v;
	uint32_t volatile BSRR18v;
	uint32_t volatile BSRR19:1;
	uint32_t volatile BSRR20:1;
	uint32_t volatile BSRR21:1;
	uint32_t volatile BSRR22:1;
	uint32_t volatile BSRR23:1;
	uint32_t volatile BSRR24:1;
	uint32_t volatile BSRR25:1;
	uint32_t volatile BSRR26:1;
	uint32_t volatile BSRR27:1;
	uint32_t volatile BSRR28:1;
	uint32_t volatile BSRR29:1;
	uint32_t volatile BSRR30:1;
	uint32_t volatile BSRR31:1;
}GPIO_BSRR_t;


typedef struct{
	uint32_t volatile LCKR0:1;
	uint32_t volatile LCKR1:1;
	uint32_t volatile LCKR2:1;
	uint32_t volatile LCKR3:1;
	uint32_t volatile LCKR4:1;
	uint32_t volatile LCKR5:1;
	uint32_t volatile LCKR6:1;
	uint32_t volatile LCKR7:1;
	uint32_t volatile LCKR8:1;
	uint32_t volatile LCKR9:1;
	uint32_t volatile LCKR10:1;
	uint32_t volatile LCKR11:1;
	uint32_t volatile LCKR12:1;
	uint32_t volatile LCKR13:1;
	uint32_t volatile LCKR14:1;
	uint32_t volatile LCKR15:1;
	uint32_t volatile LCKR16:1;
}GPIO_LCKR_t;

typedef struct{
	uint32_t volatile AFRL0:1;
	uint32_t volatile AFRL1:1;
	uint32_t volatile AFRL2:1;
	uint32_t volatile AFRL3:1;
	uint32_t volatile AFRL4:1;
	uint32_t volatile AFRL5:1;
	uint32_t volatile AFRL6:1;
	uint32_t volatile AFRL7:1;
	uint32_t volatile AFRL8:1;
	uint32_t volatile AFRL9:1;
	uint32_t volatile AFRL10:1;
	uint32_t volatile AFRL11:1;
	uint32_t volatile AFRL12:1;
	uint32_t volatile AFRL13:1;
	uint32_t volatile AFRL14:1;
	uint32_t volatile AFRL15:1;
	uint32_t volatile AFRL16:1;
	uint32_t volatile AFRL17:1;
	uint32_t volatile AFRL18:1;
	uint32_t volatile AFRL19:1;
	uint32_t volatile AFRL20:1;
	uint32_t volatile AFRL21:1;
	uint32_t volatile AFRL22:1;
	uint32_t volatile AFRL23:1;
	uint32_t volatile AFRL24:1;
	uint32_t volatile AFRL25:1;
	uint32_t volatile AFRL26:1;
	uint32_t volatile AFRL27:1;
	uint32_t volatile AFRL28:1;
	uint32_t volatile AFRL29:1;
	uint32_t volatile AFRL30:1;
	uint32_t volatile AFRL31:1;

}GPIO_AFRL_t;

typedef struct{
	uint32_t volatile AFRH0:1;
	uint32_t volatile AFRH1:1;
	uint32_t volatile AFRH2:1;
	uint32_t volatile AFRH3:1;
	uint32_t volatile AFRH4:1;
	uint32_t volatile AFRH5:1;
	uint32_t volatile AFRH6:1;
	uint32_t volatile AFRH7:1;
	uint32_t volatile AFRH8:1;
	uint32_t volatile AFRH9:1;
	uint32_t volatile AFRH10:1;
	uint32_t volatile AFRH11:1;
	uint32_t volatile AFRH12:1;
	uint32_t volatile AFRH13:1;
	uint32_t volatile AFRH14:1;
	uint32_t volatile AFRH15:1;
	uint32_t volatile AFRH16:1;
	uint32_t volatile AFRH17:1;
	uint32_t volatile AFRH18:1;
	uint32_t volatile AFRH19:1;
	uint32_t volatile AFRH20:1;
	uint32_t volatile AFRH21:1;
	uint32_t volatile AFRH22:1;
	uint32_t volatile AFRH23:1;
	uint32_t volatile AFRH24:1;
	uint32_t volatile AFRH25:1;
	uint32_t volatile AFRH26:1;
	uint32_t volatile AFRH27:1;
	uint32_t volatile AFRH28:1;
	uint32_t volatile AFRH29:1;
	uint32_t volatile AFRH30:1;
	uint32_t volatile AFRH31:1;

}GPIO_AFRH_t;



#endif /* MAIN_H_ */
