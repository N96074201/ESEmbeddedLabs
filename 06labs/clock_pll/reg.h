#ifndef REG_H
#define REG_H

//REG OPERATIONS

#define UINT32_1 ((uint32_t)1)

#define READ_REG(addr) (*((volatile uint32_t *)(addr)))

#define SET_BIT(addr, bit) READ_REG(addr) |= UINT32_1 << bit
#define CLEAR_BIT(addr, bit) READ_REG(addr) &= ~(UINT32_1 << bit)

#define READ_BIT(addr, bit) ((READ_REG(addr) >> bit) & UINT32_1)

#define WRITE_BITS(addr, highest_bit, lowest_bit, data) READ_REG(addr) = (READ_REG(addr) & ~(((UINT32_1 << (highest_bit - lowest_bit + 1)) - 1) << lowest_bit)) | ((uint32_t)data << lowest_bit)

//FLASH
#define FLASH_BASE 0x????????

#define FLASH_ACR_OFFSET 0x??
#define PRFTEN_BIT ??
#define LATENCY_2_BIT ??
#define LATENCY_0_BIT ??

//RCC
#define RCC_BASE 0x40023800

#define RCC_CR_OFFSET 0x??
#define PLLRDY_BIT ??
#define PLLON_BIT ??
#define HSERDY_BIT ??
#define HSEON_BIT ??

#define RCC_PLLCFGR_OFFSET 0x??

#define PLLSRC_BIT ??

#define PLLP_1_BIT ??
#define PLLP_0_BIT ??

#define PLLN_8_BIT 14
#define PLLN_0_BIT 6

#define PLLM_5_BIT ??
#define PLLM_0_BIT ??

#define RCC_CFGR_OFFSET 0x08
#define MCO2_1_BIT 31
#define MCO2_0_BIT 30

#define MCO2PRE_2_BIT 29
#define MCO2PRE_1_BIT 28
#define MCO2PRE_0_BIT 27

#define SWS_1_BIT ??
#define SWS_0_BIT ??

#define SW_1_BIT ??
#define SW_0_BIT ??

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