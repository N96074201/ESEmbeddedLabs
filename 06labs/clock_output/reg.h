#ifndef REG_H
#define REG_H

//REG OPERATIONS
#define SET_BIT(addr, bit) *((volatile uint32_t *)(addr)) |= (uint32_t)1 << bit
#define CLEAR_BIT(addr, bit) *((volatile uint32_t *)(addr)) &= ~((uint32_t)1 << bit)

//RCC
#define RCC_BASE 0x40023800

#define RCC_CFGR_OFFSET 0x08
#define MCO2_1_BIT 31
#define MCO2_0_BIT 30

#define MCO2PRE_2_BIT 29
#define MCO2PRE_1_BIT 28
#define MCO2PRE_0_BIT 27

#define RCC_AHB1ENR_OFFSET 0x30
#define GPIO_EN_BIT(port) port

//GPIO
#define GPIO_PORTA 0
#define GPIO_PORTB 1
#define GPIO_PORTC 2
#define GPIO_PORTD 3

#define GPIO_BASE(port) (0x40020000 + 0x400 * port)

#define GPIOx_MODER_OFFSET 0x00
#define MODERy_1_BIT(y) (y * 2 + 1)
#define MODERy_0_BIT(y) (y * 2)

#define GPIOx_OTYPER_OFFSET 0x04
#define OTy_BIT(y) y

#define GPIOx_OSPEEDR_OFFSET 0x08
#define OSPEEDRy_1_BIT(y) (y * 2 + 1)
#define OSPEEDRy_0_BIT(y) (y * 2)

#define GPIOx_PUPDR_OFFSET 0x0C
#define PUPDRy_1_BIT(y) (y * 2 + 1)
#define PUPDRy_0_BIT(y) (y * 2)

#define GPIOx_BSRR_OFFSET 0x18
#define BRy_BIT(y) (y * 2 + 1)
#define BSy_BIT(y) y

#define GPIO_AFRL_OFFSET 0x20

#endif