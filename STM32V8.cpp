#include <cstdint>
#include <cstddef>

namespace STM32V8 {
namespace Reg {
    constexpr uint32_t SCS_BASE            = 0xE000E000UL;
    constexpr uint32_t SCB_BASE            = SCS_BASE + 0x0D00UL;
    constexpr uint32_t NVIC_BASE           = SCS_BASE + 0x0100UL;
    constexpr uint32_t SysTick_BASE        = SCS_BASE + 0x0010UL;
    constexpr uint32_t MPU_BASE            = SCS_BASE + 0x0D90UL;
    constexpr uint32_t CoreDebug_BASE      = 0xE000EDF0UL;
    constexpr uint32_t DWT_BASE            = 0xE0001000UL;
    constexpr uint32_t TPIU_BASE           = 0xE0040000UL;
    constexpr uint32_t ETM_BASE            = 0xE0041000UL;
    constexpr uint32_t ITM_BASE            = 0xE0000000UL;
    constexpr uint32_t FPU_BASE            = 0xE000EF30UL;
    constexpr uint32_t SAU_BASE            = 0xE000EDD0UL;

    constexpr uint32_t PERIPH_BASE         = 0x40000000UL;
    constexpr uint32_t AHB1_BASE           = PERIPH_BASE + 0x00020000UL;
    constexpr uint32_t AHB2_BASE           = PERIPH_BASE + 0x08000000UL;
    constexpr uint32_t AHB3_BASE           = PERIPH_BASE + 0x18000000UL;
    constexpr uint32_t APB1_BASE           = PERIPH_BASE + 0x00000000UL;
    constexpr uint32_t APB2_BASE           = PERIPH_BASE + 0x00010000UL;
    constexpr uint32_t APB3_BASE           = PERIPH_BASE + 0x18010000UL;

    constexpr uint32_t FLASH_R_BASE        = AHB1_BASE + 0x3C00UL;
    constexpr uint32_t RCC_BASE            = AHB1_BASE + 0x3800UL;
    constexpr uint32_t PWR_BASE            = APB1_BASE + 0x7000UL;
    constexpr uint32_t RTC_BASE            = APB1_BASE + 0x2800UL;
    constexpr uint32_t TAMP_BASE           = APB1_BASE + 0x2900UL;
    constexpr uint32_t DBGMCU_BASE         = 0xE0044000UL;
    constexpr uint32_t RNG_BASE            = AHB2_BASE + 0x060800UL;
    constexpr uint32_t HASH_BASE           = AHB2_BASE + 0x060400UL;
    constexpr uint32_t CRYP_BASE           = AHB2_BASE + 0x060200UL;
    constexpr uint32_t SAES_BASE           = AHB2_BASE + 0x060C00UL;
    constexpr uint32_t GPIOA_BASE          = AHB2_BASE + 0x0000UL;
    constexpr uint32_t GPIOB_BASE          = AHB2_BASE + 0x0400UL;
    constexpr uint32_t GPIOC_BASE          = AHB2_BASE + 0x0800UL;
    constexpr uint32_t GPIOD_BASE          = AHB2_BASE + 0x0C00UL;
    constexpr uint32_t GPIOE_BASE          = AHB2_BASE + 0x1000UL;
    constexpr uint32_t GPIOF_BASE          = AHB2_BASE + 0x1400UL;
    constexpr uint32_t GPIOG_BASE          = AHB2_BASE + 0x1800UL;
    constexpr uint32_t GPIOH_BASE          = AHB2_BASE + 0x1C00UL;
    constexpr uint32_t GPIOI_BASE          = AHB2_BASE + 0x2000UL;
    constexpr uint32_t GPIOJ_BASE          = AHB2_BASE + 0x2400UL;
    constexpr uint32_t GPIOK_BASE          = AHB2_BASE + 0x2800UL;
    constexpr uint32_t USART1_BASE         = APB2_BASE + 0x1000UL;
    constexpr uint32_t USART2_BASE         = APB1_BASE + 0x4400UL;
    constexpr uint32_t USART3_BASE         = APB1_BASE + 0x4800UL;
    constexpr uint32_t UART4_BASE          = APB1_BASE + 0x4C00UL;
    constexpr uint32_t UART5_BASE          = APB1_BASE + 0x5000UL;
    constexpr uint32_t USART6_BASE         = APB2_BASE + 0x1400UL;
    constexpr uint32_t UART7_BASE          = APB1_BASE + 0x7800UL;
    constexpr uint32_t UART8_BASE          = APB1_BASE + 0x7C00UL;
    constexpr uint32_t LPUART1_BASE        = APB3_BASE + 0x0000UL;
    constexpr uint32_t SPI1_BASE           = APB2_BASE + 0x3000UL;
    constexpr uint32_t SPI2_BASE           = APB1_BASE + 0x3800UL;
    constexpr uint32_t SPI3_BASE           = APB1_BASE + 0x3C00UL;
    constexpr uint32_t SPI4_BASE           = APB2_BASE + 0x3400UL;
    constexpr uint32_t SPI5_BASE           = APB2_BASE + 0x5000UL;
    constexpr uint32_t SPI6_BASE           = APB2_BASE + 0x5400UL;
    constexpr uint32_t I2C1_BASE           = APB1_BASE + 0x5400UL;
    constexpr uint32_t I2C2_BASE           = APB1_BASE + 0x5800UL;
    constexpr uint32_t I2C3_BASE           = APB1_BASE + 0x5C00UL;
    constexpr uint32_t I2C4_BASE           = APB1_BASE + 0x6000UL;
    constexpr uint32_t I3C1_BASE           = APB1_BASE + 0x6400UL;
    constexpr uint32_t I3C2_BASE           = APB1_BASE + 0x6800UL;
    constexpr uint32_t CAN1_BASE           = APB1_BASE + 0x6400UL;
    constexpr uint32_t CAN2_BASE           = APB1_BASE + 0x6800UL;
    constexpr uint32_t CAN3_BASE           = APB1_BASE + 0x6C00UL;
    constexpr uint32_t ADC1_BASE           = APB2_BASE + 0x2000UL;
    constexpr uint32_t ADC2_BASE           = APB2_BASE + 0x2100UL;
    constexpr uint32_t ADC3_BASE           = APB2_BASE + 0x2200UL;
    constexpr uint32_t DAC1_BASE           = APB1_BASE + 0x7400UL;
    constexpr uint32_t COMP1_BASE          = APB2_BASE + 0x0200UL;
    constexpr uint32_t OPAMP1_BASE         = APB2_BASE + 0x0300UL;
    constexpr uint32_t EXTI_BASE           = APB2_BASE + 0x0400UL;
    constexpr uint32_t SYSCFG_BASE         = APB2_BASE + 0x0000UL;
    constexpr uint32_t VREFBUF_BASE        = APB2_BASE + 0x0300UL;
    constexpr uint32_t CRC_BASE            = AHB1_BASE + 0x3000UL;
    constexpr uint32_t BDMA_BASE           = AHB1_BASE + 0x5400UL;
    constexpr uint32_t MDMA_BASE           = AHB1_BASE + 0x5200UL;
    constexpr uint32_t DMA1_BASE           = AHB1_BASE + 0x6000UL;
    constexpr uint32_t DMA2_BASE           = AHB1_BASE + 0x6400UL;
    constexpr uint32_t DMA3_BASE           = AHB1_BASE + 0x6800UL;
    constexpr uint32_t TIM1_BASE           = APB2_BASE + 0x2C00UL;
    constexpr uint32_t TIM2_BASE           = APB1_BASE + 0x0000UL;
    constexpr uint32_t TIM3_BASE           = APB1_BASE + 0x0400UL;
    constexpr uint32_t TIM4_BASE           = APB1_BASE + 0x0800UL;
    constexpr uint32_t TIM5_BASE           = APB1_BASE + 0x0C00UL;
    constexpr uint32_t TIM6_BASE           = APB1_BASE + 0x1000UL;
    constexpr uint32_t TIM7_BASE           = APB1_BASE + 0x1400UL;
    constexpr uint32_t TIM8_BASE           = APB2_BASE + 0x3400UL;
    constexpr uint32_t TIM9_BASE           = APB2_BASE + 0x4000UL;
    constexpr uint32_t TIM10_BASE          = APB2_BASE + 0x4400UL;
    constexpr uint32_t TIM11_BASE          = APB2_BASE + 0x4800UL;
    constexpr uint32_t TIM12_BASE          = APB1_BASE + 0x1800UL;
    constexpr uint32_t TIM13_BASE          = APB1_BASE + 0x1C00UL;
    constexpr uint32_t TIM14_BASE          = APB1_BASE + 0x2000UL;
    constexpr uint32_t TIM15_BASE          = APB2_BASE + 0x4C00UL;
    constexpr uint32_t TIM16_BASE          = APB2_BASE + 0x5000UL;
    constexpr uint32_t TIM17_BASE          = APB2_BASE + 0x5400UL;
    constexpr uint32_t LPTIM1_BASE         = APB1_BASE + 0x2400UL;
    constexpr uint32_t LPTIM2_BASE         = APB1_BASE + 0x2500UL;
    constexpr uint32_t LPTIM3_BASE         = APB1_BASE + 0x2600UL;
    constexpr uint32_t LPTIM4_BASE         = APB1_BASE + 0x2700UL;
    constexpr uint32_t LPTIM5_BASE         = APB3_BASE + 0x0400UL;
    constexpr uint32_t WWDG_BASE           = APB1_BASE + 0x2C00UL;
    constexpr uint32_t IWDG_BASE           = APB1_BASE + 0x3000UL;
    constexpr uint32_t SAI1_BASE           = APB2_BASE + 0x5800UL;
    constexpr uint32_t SAI2_BASE           = APB2_BASE + 0x5C00UL;
    constexpr uint32_t SPDIFRX_BASE        = APB1_BASE + 0x3400UL;
    constexpr uint32_t HDMI_CEC_BASE       = APB1_BASE + 0x3800UL;
    constexpr uint32_t ETH_BASE            = AHB1_BASE + 0x8000UL;
    constexpr uint32_t USB_OTG_FS_BASE     = AHB1_BASE + 0xA000UL;
    constexpr uint32_t USB_OTG_HS_BASE     = AHB1_BASE + 0x20000UL;
    constexpr uint32_t UCPD1_BASE          = APB1_BASE + 0x7C00UL;
    constexpr uint32_t UCPD2_BASE          = APB1_BASE + 0x7E00UL;
    constexpr uint32_t FDCAN1_BASE         = APB1_BASE + 0x6400UL;
    constexpr uint32_t FDCAN2_BASE         = APB1_BASE + 0x6800UL;
    constexpr uint32_t FDCAN3_BASE         = APB1_BASE + 0x6C00UL;
    constexpr uint32_t OCTOSPI1_BASE       = AHB3_BASE + 0x0000UL;
    constexpr uint32_t OCTOSPI2_BASE       = AHB3_BASE + 0x1000UL;
    constexpr uint32_t OTFDEC1_BASE        = AHB3_BASE + 0x2000UL;
    constexpr uint32_t OTFDEC2_BASE        = AHB3_BASE + 0x2100UL;
    constexpr uint32_t FMC_BASE            = AHB3_BASE + 0x4000UL;
    constexpr uint32_t SDMMC1_BASE         = AHB1_BASE + 0x2C00UL;
    constexpr uint32_t SDMMC2_BASE         = AHB1_BASE + 0x2E00UL;
    constexpr uint32_t DCMI_BASE           = AHB2_BASE + 0x50000UL;
    constexpr uint32_t PSSI_BASE           = AHB2_BASE + 0x50004UL;
    constexpr uint32_t GFXMMU_BASE         = AHB2_BASE + 0x57000UL;
    constexpr uint32_t GPU2D_BASE          = AHB2_BASE + 0x58000UL;
    constexpr uint32_t JPEG_BASE           = AHB2_BASE + 0x59000UL;
    constexpr uint32_t GFXLT_BASE          = AHB2_BASE + 0x5A000UL;
    constexpr uint32_t DSID_BASE           = AHB2_BASE + 0x5B000UL;
    constexpr uint32_t LTDC_BASE           = AHB2_BASE + 0x5C000UL;
    constexpr uint32_t DSI_BASE            = AHB2_BASE + 0x5D000UL;

    constexpr uint32_t FLASH_BASE          = 0x08000000UL;
    constexpr uint32_t FLASH_END           = 0x08400000UL;
    constexpr uint32_t FLASH_SIZE          = FLASH_END - FLASH_BASE;
    constexpr uint32_t SRAM1_BASE          = 0x20000000UL;
    constexpr uint32_t SRAM1_END           = 0x200A0000UL;
    constexpr uint32_t SRAM2_BASE          = 0x200A0000UL;
    constexpr uint32_t SRAM2_END           = 0x200C0000UL;
    constexpr uint32_t SRAM3_BASE          = 0x200C0000UL;
    constexpr uint32_t SRAM3_END           = 0x20180000UL;
    constexpr uint32_t SRAM_TOTAL          = SRAM3_END - SRAM1_BASE;
    constexpr uint32_t OTP_BASE            = 0x1FFF7000UL;
    constexpr uint32_t OTP_END             = 0x1FFF7A0FUL;
    constexpr uint32_t SYSTEM_MEM_BASE     = 0x1FF00000UL;
    constexpr uint32_t SYSTEM_MEM_END      = 0x1FF1FFFFUL;

    struct SCB_Type {
        volatile uint32_t CPUID;
        volatile uint32_t ICSR;
        volatile uint32_t VTOR;
        volatile uint32_t AIRCR;
        volatile uint32_t SCR;
        volatile uint32_t CCR;
        volatile uint32_t SHPR1;
        volatile uint32_t SHPR2;
        volatile uint32_t SHPR3;
        volatile uint32_t SHCSR;
        volatile uint32_t CFSR;
        volatile uint32_t HFSR;
        volatile uint32_t DFSR;
        volatile uint32_t MMFAR;
        volatile uint32_t BFAR;
        volatile uint32_t AFSR;
    };
    static_assert(offsetof(SCB_Type, VTOR) == 0x08);
    static_assert(offsetof(SCB_Type, AIRCR) == 0x0C);
    static_assert(offsetof(SCB_Type, SHCSR) == 0x24);

    struct NVIC_Type {
        volatile uint32_t ISER[16];
        volatile uint32_t ICER[16];
        volatile uint32_t ISPR[16];
        volatile uint32_t ICPR[16];
        volatile uint32_t IABR[16];
        volatile uint32_t ITNS[16];
        volatile uint32_t IP[124];
    };

    struct CoreDebug_Type {
        volatile uint32_t DHCSR;
        volatile uint32_t DCRSR;
        volatile uint32_t DCRDR;
        volatile uint32_t DEMCR;
    };

    struct DWT_Type {
        volatile uint32_t CTRL;
        volatile uint32_t CYCCNT;
        volatile uint32_t CPICNT;
        volatile uint32_t EXCCNT;
        volatile uint32_t SLEEPCNT;
        volatile uint32_t LSUCNT;
        volatile uint32_t FOLDCNT;
        volatile uint32_t PCSR;
        volatile uint32_t COMP0;
        volatile uint32_t MASK0;
        volatile uint32_t FUNCTION0;
        volatile uint32_t RSVD0;
        volatile uint32_t COMP1;
        volatile uint32_t MASK1;
        volatile uint32_t FUNCTION1;
        volatile uint32_t RSVD1;
        volatile uint32_t COMP2;
        volatile uint32_t MASK2;
        volatile uint32_t FUNCTION2;
        volatile uint32_t RSVD2;
        volatile uint32_t COMP3;
        volatile uint32_t MASK3;
        volatile uint32_t FUNCTION3;
        volatile uint32_t RSVD3;
    };

    struct DBGMCU_Type {
        volatile const uint32_t IDCODE;
        volatile uint32_t CR;
        volatile uint32_t APB1FZR1;
        volatile uint32_t APB1FZR2;
        volatile uint32_t APB2FZR;
        volatile uint32_t APB3FZR;
        volatile uint32_t AHB1FZR;
        volatile uint32_t AHB2FZR;
        volatile uint32_t AHB3FZR;
    };

    struct FLASH_Type {
        volatile uint32_t ACR;
        volatile uint32_t KEYR;
        volatile uint32_t OPTKEYR;
        volatile uint32_t SR;
        volatile uint32_t CR;
        volatile uint32_t OPTCR;
        volatile uint32_t OPTCR1;
        volatile uint32_t OPTCR2;
        volatile uint32_t CCR;
        volatile uint32_t PRAR_CUR;
        volatile uint32_t PRAR_PRG;
        volatile uint32_t SCAR_CUR;
        volatile uint32_t SCAR_PRG;
        volatile uint32_t WPSN_CUR;
        volatile uint32_t WPSN_PRG;
        volatile uint32_t BOOT_CUR;
        volatile uint32_t BOOT_PRG;
        volatile uint32_t CRCCR;
        volatile uint32_t CRCSADDR;
        volatile uint32_t CRCEADDR;
        volatile uint32_t CRCDATAR;
        volatile uint32_t ECC_FA;
        volatile uint32_t OPTR;
        volatile uint32_t PLISR;
        volatile uint32_t PLICR;
        volatile uint32_t RSVD[38];
    };
    static_assert(offsetof(FLASH_Type, OPTCR) == 0x14);

    struct RCC_Type {
        volatile uint32_t CR;
        volatile uint32_t ICSCR;
        volatile uint32_t CFGR;
        volatile uint32_t PLL1CFGR;
        volatile uint32_t PLL2CFGR;
        volatile uint32_t PLL3CFGR;
        volatile uint32_t CIER;
        volatile uint32_t CIFR;
        volatile uint32_t CICR;
        volatile uint32_t AHB1RSTR;
        volatile uint32_t AHB2RSTR;
        volatile uint32_t AHB3RSTR;
        volatile uint32_t APB1RSTR1;
        volatile uint32_t APB1RSTR2;
        volatile uint32_t APB2RSTR;
        volatile uint32_t APB3RSTR;
        volatile uint32_t AHB1ENR;
        volatile uint32_t AHB2ENR;
        volatile uint32_t AHB3ENR;
        volatile uint32_t APB1ENR1;
        volatile uint32_t APB1ENR2;
        volatile uint32_t APB2ENR;
        volatile uint32_t APB3ENR;
        volatile uint32_t AHB1LPENR;
        volatile uint32_t AHB2LPENR;
        volatile uint32_t AHB3LPENR;
        volatile uint32_t APB1LPENR1;
        volatile uint32_t APB1LPENR2;
        volatile uint32_t APB2LPENR;
        volatile uint32_t APB3LPENR;
        volatile uint32_t BDCR;
        volatile uint32_t CSR;
        volatile uint32_t RSVD[2];
        volatile uint32_t D1CFGR;
        volatile uint32_t D2CFGR;
        volatile uint32_t D3CFGR;
        volatile uint32_t RSVD2;
        volatile uint32_t D1CCIPR;
        volatile uint32_t D2CCIP1R;
        volatile uint32_t D2CCIP2R;
        volatile uint32_t D3CCIPR;
        volatile uint32_t RSVD3;
        volatile uint32_t D1AMR;
        volatile uint32_t D3AMR;
        volatile uint32_t RSVD4[4];
        volatile uint32_t C1RSR;
        volatile uint32_t RSVD5[3];
        volatile uint32_t C1AHB1ENR;
        volatile uint32_t C1AHB2ENR;
        volatile uint32_t C1AHB3ENR;
        volatile uint32_t C1APB1ENR1;
        volatile uint32_t C1APB1ENR2;
        volatile uint32_t C1APB2ENR;
        volatile uint32_t C1APB3ENR;
        volatile uint32_t RSVD6[2];
        volatile uint32_t C1AHB1LPENR;
        volatile uint32_t C1AHB2LPENR;
        volatile uint32_t C1AHB3LPENR;
        volatile uint32_t C1APB1LPENR1;
        volatile uint32_t C1APB1LPENR2;
        volatile uint32_t C1APB2LPENR;
        volatile uint32_t C1APB3LPENR;
    };

    struct PWR_Type {
        volatile uint32_t CR1;
        volatile uint32_t CSR1;
        volatile uint32_t CR2;
        volatile uint32_t CSR2;
        volatile uint32_t CR3;
        volatile uint32_t CPUCR;
        volatile uint32_t RSVD[3];
        volatile uint32_t D3CR;
        volatile uint32_t D3CR2;
        volatile uint32_t RSVD2[2];
        volatile uint32_t WKUPCR;
        volatile uint32_t WKUPFR;
        volatile uint32_t WKUPEPR;
        volatile uint32_t IORETENR;
        volatile uint32_t IOCLRFR;
        volatile uint32_t RSVD3[8];
        volatile uint32_t PRIVCFGR;
        volatile uint32_t PRIVCFGR2;
    };

    struct RTC_Type {
        volatile uint32_t TR;
        volatile uint32_t DR;
        volatile uint32_t SSR;
        volatile uint32_t ICSR;
        volatile uint32_t PRER;
        volatile uint32_t WUTR;
        volatile uint32_t CR;
        volatile uint32_t WPR;
        volatile uint32_t CALR;
        volatile uint32_t SHIFTR;
        volatile uint32_t TSTR;
        volatile uint32_t TSDR;
        volatile uint32_t TSSSR;
        volatile uint32_t RSVD;
        volatile uint32_t ALRMAR;
        volatile uint32_t ALRMASSR;
        volatile uint32_t ALRMBR;
        volatile uint32_t ALRMBSSR;
        volatile uint32_t RSVD2[2];
        volatile uint32_t BKP0R;
        volatile uint32_t BKP1R;
        volatile uint32_t BKP2R;
        volatile uint32_t BKP3R;
        volatile uint32_t BKP4R;
        volatile uint32_t BKP5R;
        volatile uint32_t BKP6R;
        volatile uint32_t BKP7R;
        volatile uint32_t BKP8R;
        volatile uint32_t BKP9R;
        volatile uint32_t BKP10R;
        volatile uint32_t BKP11R;
        volatile uint32_t BKP12R;
        volatile uint32_t BKP13R;
        volatile uint32_t BKP14R;
        volatile uint32_t BKP15R;
        volatile uint32_t BKP16R;
        volatile uint32_t BKP17R;
        volatile uint32_t BKP18R;
        volatile uint32_t BKP19R;
        volatile uint32_t BKP20R;
        volatile uint32_t BKP21R;
        volatile uint32_t BKP22R;
        volatile uint32_t BKP23R;
        volatile uint32_t BKP24R;
        volatile uint32_t BKP25R;
        volatile uint32_t BKP26R;
        volatile uint32_t BKP27R;
        volatile uint32_t BKP28R;
        volatile uint32_t BKP29R;
        volatile uint32_t BKP30R;
        volatile uint32_t BKP31R;
    };

    struct TAMP_Type {
        volatile uint32_t CR1;
        volatile uint32_t CR2;
        volatile uint32_t FLTCR;
        volatile uint32_t ATCR1;
        volatile uint32_t ATCR2;
        volatile uint32_t ATSEEDR;
        volatile uint32_t ATOR;
        volatile uint32_t ATMSR;
        volatile uint32_t ATCOLR;
        volatile uint32_t RSVD[7];
        volatile uint32_t IER;
        volatile uint32_t SR;
        volatile uint32_t MISR;
        volatile uint32_t SMISR;
        volatile uint32_t SCR;
        volatile uint32_t RSVD2[3];
        volatile uint32_t PRIVCFGR;
    };

    struct RNG_Type {
        volatile uint32_t CR;
        volatile uint32_t SR;
        volatile uint32_t DR;
        volatile uint32_t HTCR;
        volatile uint32_t RSVD[4];
        volatile uint32_t SCR;
        volatile uint32_t STAR;
    };

    struct GPIO_Type {
        volatile uint32_t MODER;
        volatile uint32_t OTYPER;
        volatile uint32_t OSPEEDR;
        volatile uint32_t PUPDR;
        volatile uint32_t IDR;
        volatile uint32_t ODR;
        volatile uint32_t BSRR;
        volatile uint32_t LCKR;
        volatile uint32_t AFR[2];
        volatile uint32_t BRR;
        volatile uint32_t HSLVR;
        volatile uint32_t SECCFGR;
    };

    struct USART_Type {
        volatile uint32_t CR1;
        volatile uint32_t CR2;
        volatile uint32_t CR3;
        volatile uint32_t BRR;
        volatile uint32_t GTPR;
        volatile uint32_t RTOR;
        volatile uint32_t RQR;
        volatile uint32_t ISR;
        volatile uint32_t ICR;
        volatile uint32_t RDR;
        volatile uint32_t TDR;
        volatile uint32_t PRESC;
    };

    struct EXTI_Type {
        volatile uint32_t RTSR1;
        volatile uint32_t FTSR1;
        volatile uint32_t SWIER1;
        volatile uint32_t PR1;
        volatile uint32_t RTSR2;
        volatile uint32_t FTSR2;
        volatile uint32_t SWIER2;
        volatile uint32_t PR2;
        volatile uint32_t RTSR3;
        volatile uint32_t FTSR3;
        volatile uint32_t SWIER3;
        volatile uint32_t PR3;
        volatile uint32_t C1IMR1;
        volatile uint32_t C1EMR1;
        volatile uint32_t C1IMR2;
        volatile uint32_t C1EMR2;
        volatile uint32_t C1IMR3;
        volatile uint32_t C1EMR3;
    };

    struct SYSCFG_Type {
        volatile uint32_t MEMRMP;
        volatile uint32_t CFGR;
        volatile uint32_t EXTICR[4];
        volatile uint32_t SCSR;
        volatile uint32_t CFGR2;
        volatile uint32_t SWPR;
        volatile uint32_t SKR;
        volatile uint32_t SWPR2;
        volatile uint32_t RSSCMDR;
        volatile uint32_t RSSCMDR2;
        volatile uint32_t RSSSR;
        volatile uint32_t ECCNMIR;
        volatile uint32_t CCCSR;
        volatile uint32_t CCVALR;
        volatile uint32_t CCCR;
        volatile uint32_t ADCALT;
        volatile uint32_t RSVD[47];
        volatile uint32_t UR0;
        volatile uint32_t UR1;
        volatile uint32_t UR2;
        volatile uint32_t UR3;
        volatile uint32_t UR4;
        volatile uint32_t UR5;
        volatile uint32_t UR6;
        volatile uint32_t UR7;
        volatile uint32_t UR8;
        volatile uint32_t UR9;
        volatile uint32_t UR10;
        volatile uint32_t UR11;
        volatile uint32_t UR12;
        volatile uint32_t UR13;
        volatile uint32_t UR14;
        volatile uint32_t UR15;
        volatile uint32_t UR16;
        volatile uint32_t UR17;
    };

    struct MPU_Type {
        volatile uint32_t TYPE;
        volatile uint32_t CTRL;
        volatile uint32_t RNR;
        volatile uint32_t RBAR;
        volatile uint32_t RASR;
        volatile uint32_t RBAR_A1;
        volatile uint32_t RASR_A1;
        volatile uint32_t RBAR_A2;
        volatile uint32_t RASR_A2;
        volatile uint32_t RBAR_A3;
        volatile uint32_t RASR_A3;
    };

    struct SAU_Type {
        volatile uint32_t CTRL;
        volatile uint32_t TYPE;
        volatile uint32_t RNR;
        volatile uint32_t RBAR;
        volatile uint32_t RLAR;
        volatile uint32_t SFSR;
        volatile uint32_t SFAR;
    };

    struct CRC_Type {
        volatile uint32_t DR;
        volatile uint32_t IDR;
        volatile uint32_t CR;
        volatile uint32_t INIT;
        volatile uint32_t POL;
    };

    struct IWDG_Type {
        volatile uint32_t KR;
        volatile uint32_t PR;
        volatile uint32_t RLR;
        volatile uint32_t SR;
        volatile uint32_t WINR;
        volatile uint32_t EWCR;
    };

    struct WWDG_Type {
        volatile uint32_t CR;
        volatile uint32_t CFR;
        volatile uint32_t SR;
    };

    struct DAC_Type {
        volatile uint32_t CR;
        volatile uint32_t SWTRIGR;
        volatile uint32_t DHR12R1;
        volatile uint32_t DHR12L1;
        volatile uint32_t DHR8R1;
        volatile uint32_t DHR12R2;
        volatile uint32_t DHR12L2;
        volatile uint32_t DHR8R2;
        volatile uint32_t DHR12RD;
        volatile uint32_t DHR12LD;
        volatile uint32_t DHR8RD;
        volatile uint32_t DOR1;
        volatile uint32_t DOR2;
        volatile uint32_t SR;
        volatile uint32_t CCR;
        volatile uint32_t MCR;
        volatile uint32_t SHSR1;
        volatile uint32_t SHSR2;
        volatile uint32_t SHHR;
        volatile uint32_t SHRR;
    };

    struct ADC_Type {
        volatile uint32_t ISR;
        volatile uint32_t IER;
        volatile uint32_t CR;
        volatile uint32_t CFGR;
        volatile uint32_t CFGR2;
        volatile uint32_t SMPR1;
        volatile uint32_t SMPR2;
        volatile uint32_t TR1;
        volatile uint32_t TR2;
        volatile uint32_t TR3;
        volatile uint32_t SQR1;
        volatile uint32_t SQR2;
        volatile uint32_t SQR3;
        volatile uint32_t SQR4;
        volatile uint32_t DR;
        volatile uint32_t JSQR;
        volatile uint32_t OFR1;
        volatile uint32_t OFR2;
        volatile uint32_t OFR3;
        volatile uint32_t OFR4;
        volatile uint32_t JDR1;
        volatile uint32_t JDR2;
        volatile uint32_t JDR3;
        volatile uint32_t JDR4;
        volatile uint32_t AWD2CR;
        volatile uint32_t AWD3CR;
        volatile uint32_t DIFSEL;
        volatile uint32_t CALFACT;
        volatile uint32_t CALFACT2;
        volatile uint32_t RSVD[141];
        volatile uint32_t CSR;
        volatile uint32_t CCR;
        volatile uint32_t CDR;
    };

    struct COMP_Type {
        volatile uint32_t CSR;
    };

    struct VREFBUF_Type {
        volatile uint32_t CSR;
        volatile uint32_t CCR;
    };

    struct OPAMP_Type {
        volatile uint32_t CSR;
        volatile uint32_t OTR;
        volatile uint32_t LPOTR;
    };

    struct HASH_Type {
        volatile uint32_t CR;
        volatile uint32_t DIN;
        volatile uint32_t STR;
        volatile uint32_t HR[8];
        volatile uint32_t IMR;
        volatile uint32_t SR;
        volatile uint32_t CSR[54];
        volatile uint32_t HASH_HR[8];
    };

    struct CRYP_Type {
        volatile uint32_t CR;
        volatile uint32_t SR;
        volatile uint32_t DIN;
        volatile uint32_t DOUT;
        volatile uint32_t DMACR;
        volatile uint32_t IMSCR;
        volatile uint32_t RISR;
        volatile uint32_t MISR;
        volatile uint32_t K0LR;
        volatile uint32_t K0RR;
        volatile uint32_t K1LR;
        volatile uint32_t K1RR;
        volatile uint32_t K2LR;
        volatile uint32_t K2RR;
        volatile uint32_t K3LR;
        volatile uint32_t K3RR;
        volatile uint32_t IV0LR;
        volatile uint32_t IV0RR;
        volatile uint32_t IV1LR;
        volatile uint32_t IV1RR;
        volatile uint32_t RSVD[4];
        volatile uint32_t CCMCSR;
        volatile uint32_t CCMCDIR;
        volatile uint32_t RSVD2[204];
        volatile uint32_t CSR[32];
    };

    struct SAES_Type {
        volatile uint32_t CR;
        volatile uint32_t SR;
        volatile uint32_t DINR;
        volatile uint32_t DOUTR;
        volatile uint32_t KEYR0;
        volatile uint32_t KEYR1;
        volatile uint32_t KEYR2;
        volatile uint32_t KEYR3;
        volatile uint32_t KEYR4;
        volatile uint32_t KEYR5;
        volatile uint32_t KEYR6;
        volatile uint32_t KEYR7;
        volatile uint32_t IVR0;
        volatile uint32_t IVR1;
        volatile uint32_t IVR2;
        volatile uint32_t IVR3;
        volatile uint32_t CSR0;
        volatile uint32_t CSR1;
        volatile uint32_t CSR2;
        volatile uint32_t CSR3;
        volatile uint32_t DINR2;
        volatile uint32_t DINR3;
        volatile uint32_t DOUTR2;
        volatile uint32_t DOUTR3;
    };

    struct OTFDEC_Type {
        volatile uint32_t CR;
        volatile uint32_t SR;
        volatile uint32_t PCCR;
        volatile uint32_t PRIVCFGR;
        volatile uint32_t RSVD[4];
        volatile uint32_t R1CFGR;
        volatile uint32_t R1STARTADDR;
        volatile uint32_t R1ENDADDR;
        volatile uint32_t R1NONCER0;
        volatile uint32_t R1NONCER1;
        volatile uint32_t R1KEYR0;
        volatile uint32_t R1KEYR1;
        volatile uint32_t R1KEYR2;
        volatile uint32_t R1KEYR3;
        volatile uint32_t RSVD2[7];
        volatile uint32_t R2CFGR;
        volatile uint32_t R2STARTADDR;
        volatile uint32_t R2ENDADDR;
        volatile uint32_t R2NONCER0;
        volatile uint32_t R2NONCER1;
        volatile uint32_t R2KEYR0;
        volatile uint32_t R2KEYR1;
        volatile uint32_t R2KEYR2;
        volatile uint32_t R2KEYR3;
        volatile uint32_t RSVD3[7];
        volatile uint32_t R3CFGR;
        volatile uint32_t R3STARTADDR;
        volatile uint32_t R3ENDADDR;
        volatile uint32_t R3NONCER0;
        volatile uint32_t R3NONCER1;
        volatile uint32_t R3KEYR0;
        volatile uint32_t R3KEYR1;
        volatile uint32_t R3KEYR2;
        volatile uint32_t R3KEYR3;
        volatile uint32_t RSVD4[7];
        volatile uint32_t R4CFGR;
        volatile uint32_t R4STARTADDR;
        volatile uint32_t R4ENDADDR;
        volatile uint32_t R4NONCER0;
        volatile uint32_t R4NONCER1;
        volatile uint32_t R4KEYR0;
        volatile uint32_t R4KEYR1;
        volatile uint32_t R4KEYR2;
        volatile uint32_t R4KEYR3;
    };

    struct FDCAN_Type {
        volatile uint32_t CREL;
        volatile uint32_t ENDN;
        volatile uint32_t RSVD;
        volatile uint32_t DBTP;
        volatile uint32_t TEST;
        volatile uint32_t RWD;
        volatile uint32_t CCCR;
        volatile uint32_t NBTP;
        volatile uint32_t TSCC;
        volatile uint32_t TSCV;
        volatile uint32_t TOCC;
        volatile uint32_t TOCV;
        volatile uint32_t RSVD2[4];
        volatile uint32_t ECR;
        volatile uint32_t PSR;
        volatile uint32_t TDCR;
        volatile uint32_t RSVD3;
        volatile uint32_t IR;
        volatile uint32_t IE;
        volatile uint32_t ILS;
        volatile uint32_t ILE;
        volatile uint32_t RSVD4[8];
        volatile uint32_t RXGFC;
        volatile uint32_t XIDAM;
        volatile uint32_t HPMS;
        volatile uint32_t RSVD5;
        volatile uint32_t RXF0S;
        volatile uint32_t RXF0A;
        volatile uint32_t RXF1S;
        volatile uint32_t RXF1A;
        volatile uint32_t RSVD6[8];
        volatile uint32_t TXBC;
        volatile uint32_t TXFQS;
        volatile uint32_t TXBRP;
        volatile uint32_t TXBAR;
        volatile uint32_t TXBCR;
        volatile uint32_t TXBTO;
        volatile uint32_t TXBCF;
        volatile uint32_t TXBTIE;
        volatile uint32_t TXBCIE;
        volatile uint32_t TXEFS;
        volatile uint32_t TXEFA;
        volatile uint32_t RSVD7[2];
        volatile uint32_t CKDIV;
        volatile uint32_t RSVD8[43];
        volatile uint32_t XIDFC;
        volatile uint32_t XIDFS;
        volatile uint32_t XIDFF;
        volatile uint32_t RSVD9;
        volatile uint32_t SIDFC;
        volatile uint32_t SIDFS;
        volatile uint32_t SIDFF;
        volatile uint32_t RSVD10;
        volatile uint32_t FLTP;
        volatile uint32_t RSVD11[7];
        volatile uint32_t TTTMC;
        volatile uint32_t TTRMC;
        volatile uint32_t TTOCF;
        volatile uint32_t TTMLM;
        volatile uint32_t TURCF;
        volatile uint32_t TTOCN;
        volatile uint32_t TTGTP;
        volatile uint32_t TTTMK;
        volatile uint32_t TTIR;
        volatile uint32_t TTIE;
        volatile uint32_t TILS;
        volatile uint32_t TTOST;
        volatile uint32_t TURNA;
        volatile uint32_t TTLGT;
        volatile uint32_t TTCTC;
        volatile uint32_t TTCPT;
        volatile uint32_t TTFTS;
        volatile uint32_t RSVD12[17];
        volatile uint32_t TXBR[18];
        volatile uint32_t RXESC;
        volatile uint32_t TXESC;
        volatile uint32_t RWD;
        volatile uint32_t RSVD13[2];
        volatile uint32_t CRCR;
        volatile uint32_t RSVD14[5];
        volatile uint32_t FLS;
        volatile uint32_t FLS;
        volatile uint32_t RSVD15[2];
        volatile uint32_t EFC;
        volatile uint32_t RSVD16[2];
        volatile uint32_t TEC;
        volatile uint32_t REC;
        volatile uint32_t RSVD17[2];
        volatile uint32_t BTR;
        volatile uint32_t BTR;
        volatile uint32_t RSVD18[2];
        volatile uint32_t ILE;
        volatile uint32_t RSVD19[3];
        volatile uint32_t IR;
        volatile uint32_t RSVD20[3];
        volatile uint32_t IE;
        volatile uint32_t RSVD21[3];
        volatile uint32_t ILS;
        volatile uint32_t RSVD22[3];
    };

    struct LPTIM_Type {
        volatile uint32_t ISR;
        volatile uint32_t ICR;
        volatile uint32_t IER;
        volatile uint32_t CFGR;
        volatile uint32_t CR;
        volatile uint32_t CMP;
        volatile uint32_t ARR;
        volatile uint32_t CNT;
        volatile uint32_t CFGR2;
        volatile uint32_t RSVD[2];
        volatile uint32_t DTR;
        volatile uint32_t RSVD2[2];
        volatile uint32_t CMP2;
        volatile uint32_t CMP3;
        volatile uint32_t CMP4;
        volatile uint32_t RSVD3[4];
        volatile uint32_t RCMP0;
        volatile uint32_t RCMP1;
        volatile uint32_t RCMP2;
        volatile uint32_t RCMP3;
    };

    struct TIM_Type {
        volatile uint32_t CR1;
        volatile uint32_t CR2;
        volatile uint32_t SMCR;
        volatile uint32_t DIER;
        volatile uint32_t SR;
        volatile uint32_t EGR;
        volatile uint32_t CCMR1;
        volatile uint32_t CCMR2;
        volatile uint32_t CCER;
        volatile uint32_t CNT;
        volatile uint32_t PSC;
        volatile uint32_t ARR;
        volatile uint32_t RCR;
        volatile uint32_t CCR1;
        volatile uint32_t CCR2;
        volatile uint32_t CCR3;
        volatile uint32_t CCR4;
        volatile uint32_t BDTR;
        volatile uint32_t DCR;
        volatile uint32_t DMAR;
        volatile uint32_t OR1;
        volatile uint32_t CCMR3;
        volatile uint32_t CCR5;
        volatile uint32_t CCR6;
        volatile uint32_t AF1;
        volatile uint32_t AF2;
        volatile uint32_t TISEL;
    };

    struct SPI_Type {
        volatile uint32_t CR1;
        volatile uint32_t CR2;
        volatile uint32_t SR;
        volatile uint32_t DR;
        volatile uint32_t CRCPR;
        volatile uint32_t RXCRCR;
        volatile uint32_t TXCRCR;
        volatile uint32_t I2SCFGR;
        volatile uint32_t I2SPR;
    };

    struct I2C_Type {
        volatile uint32_t CR1;
        volatile uint32_t CR2;
        volatile uint32_t OAR1;
        volatile uint32_t OAR2;
        volatile uint32_t TIMINGR;
        volatile uint32_t TIMEOUTR;
        volatile uint32_t ISR;
        volatile uint32_t ICR;
        volatile uint32_t PECR;
        volatile uint32_t RXDR;
        volatile uint32_t TXDR;
    };

    struct I3C_Type {
        volatile uint32_t CR;
        volatile uint32_t ISR;
        volatile uint32_t IER;
        volatile uint32_t ECR;
        volatile uint32_t SIR;
        volatile uint32_t SDR;
        volatile uint32_t RDR;
        volatile uint32_t TDR;
        volatile uint32_t RSR;
        volatile uint32_t TSR;
        volatile uint32_t IBCR;
        volatile uint32_t IBMR;
        volatile uint32_t IBMR;
        volatile uint32_t DMACR;
        volatile uint32_t DMATXDLAR;
        volatile uint32_t DMATXDLR;
        volatile uint32_t DMARXDLAR;
        volatile uint32_t DMARXDLR;
        volatile uint32_t DMATXDLR;
        volatile uint32_t DMARXDLR;
        volatile uint32_t CFGR;
        volatile uint32_t CFGR2;
        volatile uint32_t AVAL0;
        volatile uint32_t AVAL1;
        volatile uint32_t DYNADDR;
        volatile uint32_t MAXLT;
        volatile uint32_t RSVD[2];
        volatile uint32_t DEVR0;
        volatile uint32_t DEVR1;
        volatile uint32_t DEVR2;
        volatile uint32_t DEVR3;
        volatile uint32_t DEVR4;
        volatile uint32_t DEVR5;
        volatile uint32_t DEVR6;
        volatile uint32_t DEVR7;
        volatile uint32_t DEVR8;
        volatile uint32_t DEVR9;
        volatile uint32_t DEVR10;
        volatile uint32_t DEVR11;
        volatile uint32_t DEVR12;
        volatile uint32_t DEVR13;
        volatile uint32_t DEVR14;
        volatile uint32_t DEVR15;
    };

    struct SDMMC_Type {
        volatile uint32_t POWER;
        volatile uint32_t CLKCR;
        volatile uint32_t ARG;
        volatile uint32_t CMD;
        volatile uint32_t RESPCMD;
        volatile uint32_t RESP1;
        volatile uint32_t RESP2;
        volatile uint32_t RESP3;
        volatile uint32_t RESP4;
        volatile uint32_t DTIMER;
        volatile uint32_t DLEN;
        volatile uint32_t DCTRL;
        volatile uint32_t DCOUNT;
        volatile uint32_t STA;
        volatile uint32_t ICR;
        volatile uint32_t MASK;
        volatile uint32_t ACKTIMER;
        volatile uint32_t RSVD[3];
        volatile uint32_t IDMACTRL;
        volatile uint32_t IDMACTXADDR;
        volatile uint32_t IDMACRXADDR;
        volatile uint32_t IDMACTXDESC;
        volatile uint32_t IDMACRXDESC;
        volatile uint32_t RSVD2[83];
        volatile uint32_t FIFO;
    };

    struct ETH_Type {
        volatile uint32_t MACCR;
        volatile uint32_t MACFFR;
        volatile uint32_t MACHTHR;
        volatile uint32_t MACHTLR;
        volatile uint32_t MACMIIAR;
        volatile uint32_t MACMIIDR;
        volatile uint32_t MACFCR;
        volatile uint32_t MACVLANTR;
        volatile uint32_t RSVD[2];
        volatile uint32_t MACRWUFFR;
        volatile uint32_t MACPMTCSR;
        volatile uint32_t MACSR;
        volatile uint32_t MACIMR;
        volatile uint32_t MACA0HR;
        volatile uint32_t MACA0LR;
        volatile uint32_t MACA1HR;
        volatile uint32_t MACA1LR;
        volatile uint32_t MACA2HR;
        volatile uint32_t MACA2LR;
        volatile uint32_t MACA3HR;
        volatile uint32_t MACA3LR;
        volatile uint32_t RSVD2[40];
        volatile uint32_t MMCCR;
        volatile uint32_t MMCRIR;
        volatile uint32_t MMCTIR;
        volatile uint32_t MMCRIMR;
        volatile uint32_t MMCTIMR;
        volatile uint32_t RSVD3[14];
        volatile uint32_t MMCTGFSCCR;
        volatile uint32_t MMCTGFMSCCR;
        volatile uint32_t RSVD4[5];
        volatile uint32_t MMCTGFCR;
        volatile uint32_t RSVD5[10];
        volatile uint32_t MMCRFCECR;
        volatile uint32_t MMCRFAECR;
        volatile uint32_t RSVD6[10];
        volatile uint32_t MMCRGUFCR;
        volatile uint32_t RSVD7[335];
        volatile uint32_t DMABMR;
        volatile uint32_t DMATPDR;
        volatile uint32_t DMARPDR;
        volatile uint32_t DMARDLAR;
        volatile uint32_t DMATDLAR;
        volatile uint32_t DMASR;
        volatile uint32_t DMAOMR;
        volatile uint32_t DMAIER;
        volatile uint32_t DMAMFBOCR;
        volatile uint32_t DMARSWTR;
        volatile uint32_t RSVD8[8];
        volatile uint32_t DMACHTDR;
        volatile uint32_t DMACHRDR;
        volatile uint32_t DMACHTBAR;
        volatile uint32_t DMACHRBAR;
    };

    struct USB_OTG_GlobalType {
        volatile uint32_t GOTGCTL;
        volatile uint32_t GOTGINT;
        volatile uint32_t GAHBCFG;
        volatile uint32_t GUSBCFG;
        volatile uint32_t GRSTCTL;
        volatile uint32_t GINTSTS;
        volatile uint32_t GINTMSK;
        volatile uint32_t GRXSTSR;
        volatile uint32_t GRXSTSP;
        volatile uint32_t GRXFSIZ;
        volatile uint32_t DIEPTXF0;
        volatile uint32_t HNPTXSTS;
        volatile uint32_t RSVD[2];
        volatile uint32_t GCCFG;
        volatile uint32_t CID;
        volatile uint32_t RSVD2[3];
        volatile uint32_t GHWCFG1;
        volatile uint32_t GHWCFG2;
        volatile uint32_t GHWCFG3;
        volatile uint32_t GHWCFG4;
        volatile uint32_t GLPMCFG;
        volatile uint32_t GPWRDN;
        volatile uint32_t GDFIFOCFG;
        volatile uint32_t RSVD3[23];
        volatile uint32_t HPTXFSIZ;
        volatile uint32_t DIEPTXF[15];
    };

    struct OCTOSPI_Type {
        volatile uint32_t CR;
        volatile uint32_t DCR1;
        volatile uint32_t DCR2;
        volatile uint32_t DCR3;
        volatile uint32_t DCR4;
        volatile uint32_t SR;
        volatile uint32_t FCR;
        volatile uint32_t DLR;
        volatile uint32_t AR;
        volatile uint32_t ABR;
        volatile uint32_t DR;
        volatile uint32_t PSMKR;
        volatile uint32_t PSMAR;
        volatile uint32_t PIR;
        volatile uint32_t CCR;
        volatile uint32_t CCR;
        volatile uint32_t CCR;
        volatile uint32_t CCR;
        volatile uint32_t TCR;
        volatile uint32_t IR;
        volatile uint32_t LPTR;
        volatile uint32_t WPCCR;
        volatile uint32_t WPTCR;
        volatile uint32_t WPIR;
        volatile uint32_t WPABR;
        volatile uint32_t WCCR;
        volatile uint32_t WTCR;
        volatile uint32_t WIR;
        volatile uint32_t WABR;
        volatile uint32_t MCCR;
        volatile uint32_t MTCR;
        volatile uint32_t MIR;
        volatile uint32_t MAR;
        volatile uint32_t MDR;
        volatile uint32_t RSVD[12];
        volatile uint32_t HWCFGR;
        volatile uint32_t VERR;
        volatile uint32_t IPIDR;
        volatile uint32_t SIDR;
    };

    struct FMC_Type {
        volatile uint32_t BTCR[8];
        volatile uint32_t PCR;
        volatile uint32_t SR;
        volatile uint32_t PMEM;
        volatile uint32_t PATT;
        volatile uint32_t RSVD;
        volatile uint32_t ECCR;
        volatile uint32_t RSVD2[27];
        volatile uint32_t BWTR[7];
        volatile uint32_t RSVD3[192];
        volatile uint32_t SDRCR[2];
        volatile uint32_t SDTR[2];
        volatile uint32_t SDCMR;
        volatile uint32_t SDRTR;
        volatile uint32_t SDSR;
    };

    struct DMA_Type {
        volatile uint32_t LISR;
        volatile uint32_t HISR;
        volatile uint32_t LIFCR;
        volatile uint32_t HIFCR;
        volatile struct {
            volatile uint32_t CR;
            volatile uint32_t NDTR;
            volatile uint32_t PAR;
            volatile uint32_t M0AR;
            volatile uint32_t M1AR;
            volatile uint32_t FCR;
        } S[8];
    };

    struct MDMA_Type {
        volatile uint32_t GISR0;
        volatile uint32_t GISR1;
        volatile uint32_t GTC;
        volatile uint32_t RSVD[5];
        volatile uint32_t GCR;
        volatile uint32_t RSVD2[247];
        volatile struct {
            volatile uint32_t CR;
            volatile uint32_t CR2;
            volatile uint32_t CBNDTR;
            volatile uint32_t CSAR;
            volatile uint32_t CDAR;
            volatile uint32_t CBRUR;
            volatile uint32_t CLAR;
            volatile uint32_t CTBR;
            volatile uint32_t SR;
            volatile uint32_t FCR;
            volatile uint32_t BRUR;
            volatile uint32_t LAR;
            volatile uint32_t TBR;
            volatile uint32_t MAR;
            volatile uint32_t MDR;
            volatile uint32_t RSVD[16];
        } C[16];
    };

    struct BDMA_Type {
        volatile uint32_t ISR;
        volatile uint32_t IFCR;
        volatile struct {
            volatile uint32_t CCR;
            volatile uint32_t CNDTR;
            volatile uint32_t CPAR;
            volatile uint32_t CM0AR;
            volatile uint32_t CM1AR;
        } C[8];
    };

    struct DCMI_Type {
        volatile uint32_t CR;
        volatile uint32_t SR;
        volatile uint32_t RIS;
        volatile uint32_t IER;
        volatile uint32_t MIS;
        volatile uint32_t ICR;
        volatile uint32_t ESCR;
        volatile uint32_t ESUR;
        volatile uint32_t CWSTRTR;
        volatile uint32_t CWSIZER;
        volatile uint32_t DR;
    };

    struct PSSI_Type {
        volatile uint32_t CR;
        volatile uint32_t SR;
        volatile uint32_t RIS;
        volatile uint32_t IER;
        volatile uint32_t MIS;
        volatile uint32_t ICR;
        volatile uint32_t DR;
        volatile uint32_t RSVD[249];
        volatile uint32_t HWCFGR;
        volatile uint32_t VERR;
        volatile uint32_t IPIDR;
        volatile uint32_t SIDR;
    };

    struct GPU2D_Type {
        volatile uint32_t CR;
        volatile uint32_t SR;
        volatile uint32_t RSVD;
        volatile uint32_t FGPFCCR;
        volatile uint32_t FGCOLR;
        volatile uint32_t FGCMAR;
        volatile uint32_t RSVD2[3];
        volatile uint32_t BGPFCCR;
        volatile uint32_t BGCOLR;
        volatile uint32_t BGCMAR;
        volatile uint32_t RSVD3[3];
        volatile uint32_t OPFCCR;
        volatile uint32_t OCOLR;
        volatile uint32_t OCMAR;
        volatile uint32_t RSVD4;
        volatile uint32_t OPOR;
        volatile uint32_t OPWR;
        volatile uint32_t RSVD5[2];
        volatile uint32_t FGMAR;
        volatile uint32_t FGOR;
        volatile uint32_t RSVD6[2];
        volatile uint32_t BGMAR;
        volatile uint32_t BGOR;
        volatile uint32_t RSVD7[2];
        volatile uint32_t OMAR;
        volatile uint32_t RSVD8[21];
        volatile uint32_t GPFCCR;
        volatile uint32_t GPCOLR;
        volatile uint32_t GPCMAR;
        volatile uint32_t GPOR;
        volatile uint32_t GPWR;
        volatile uint32_t GPMAR;
        volatile uint32_t RSVD9[2];
        volatile uint32_t GPOR2;
        volatile uint32_t RSVD10[2];
        volatile uint32_t SIDR;
    };

    struct LTDC_Type {
        volatile uint32_t SSCR;
        volatile uint32_t BPCR;
        volatile uint32_t AWCR;
        volatile uint32_t TWCR;
        volatile uint32_t GCR;
        volatile uint32_t GSR;
        volatile uint32_t GC1R;
        volatile uint32_t GC2R;
        volatile uint32_t SRC;
        volatile uint32_t BCCR;
        volatile uint32_t IER;
        volatile uint32_t ISR;
        volatile uint32_t ICR;
        volatile uint32_t LIPCR;
        volatile uint32_t CPSR;
        volatile uint32_t CDSR;
        volatile uint32_t RSVD[2];
        volatile uint32_t BFCR;
        volatile uint32_t RSVD2[47];
        volatile struct {
            volatile uint32_t CR;
            volatile uint32_t WHPCR;
            volatile uint32_t WVPCR;
            volatile uint32_t CKCR;
            volatile uint32_t PFCR;
            volatile uint32_t CACR;
            volatile uint32_t DCCR;
            volatile uint32_t BFCR;
            volatile uint32_t CFBAR;
            volatile uint32_t CFBLR;
            volatile uint32_t CFBLNR;
            volatile uint32_t AFCR;
            volatile uint32_t RSVD[3];
            volatile uint32_t CLUTWR;
        } LAYER[2];
    };

namespace STM32V8::Reg {

struct DSI_Type {
    volatile uint32_t CR;
    volatile uint32_t SWCR;
    volatile uint32_t WCFGR;
    volatile uint32_t WIER;
    volatile uint32_t WISR;
    volatile uint32_t WIFCR;
    volatile uint32_t WPCR[18];
    volatile uint32_t CLCR;
    volatile uint32_t CLTCR;
    volatile uint32_t DLTCR;
    volatile uint32_t PCTLR;
    volatile uint32_t PCCONFR;
    volatile uint32_t PUCR;
    volatile uint32_t TTCR;
    volatile uint32_t TXVC0R;
    volatile uint32_t TXVC1R;
    volatile uint32_t TXVC2R;
    volatile uint32_t TXVC3R;
    volatile uint32_t TXVC4R;
    volatile uint32_t TXVC5R;
    volatile uint32_t TXVC6R;
    volatile uint32_t TXVC7R;
    volatile uint32_t TXVC8R;
    volatile uint32_t TXVC9R;
    volatile uint32_t TXVC10R;
    volatile uint32_t TXVC11R;
    volatile uint32_t TXVC12R;
    volatile uint32_t TXVC13R;
    volatile uint32_t TXVC14R;
    volatile uint32_t TXVC15R;
    volatile uint32_t VVACR;
    volatile uint32_t VVHACR;
    volatile uint32_t VVPCR;
    volatile uint32_t VVCCR;
    volatile uint32_t VLCR;
    volatile uint32_t LCCR;
    volatile uint32_t LPMCR;
    volatile uint32_t LPCR;
    volatile uint32_t LPMCCR;
    volatile uint32_t VHSACR;
    volatile uint32_t VHBPCR;
    volatile uint32_t VLACR;
    volatile uint32_t VHNPCR;
    volatile uint32_t VHPCCR;
    volatile uint32_t VSECR;
    volatile uint32_t VSCCR;
    volatile uint32_t BTAAR;
    volatile uint32_t BLLR;
    volatile uint32_t BCR;
    volatile uint32_t IER;
    volatile uint32_t ISR0;
    volatile uint32_t ISR1;
    volatile uint32_t FIR0;
    volatile uint32_t FIR1;
    volatile uint32_t TCCR0;
    volatile uint32_t TCCR1;
    volatile uint32_t TCCR2;
    volatile uint32_t TCCR3;
    volatile uint32_t TCCR4;
    volatile uint32_t TCCR5;
    volatile uint32_t PSCR;
    volatile uint32_t UGSR;
    volatile uint32_t UGCR;
    volatile uint32_t SHDW;
    volatile uint32_t DLTESR;
    volatile uint32_t CCR;
    volatile uint32_t PCR;
    volatile uint32_t GVCIDR;
    volatile uint32_t MCR;
    volatile uint32_t VMCR;
    volatile uint32_t VPCR;
    volatile uint32_t VCCR;
    volatile uint32_t VNPCR;
    volatile uint32_t VHSR;
    volatile uint32_t VHBPR;
    volatile uint32_t VLR;
    volatile uint32_t VHR;
    volatile uint32_t GPDR;
    volatile uint32_t GPSR;
    volatile uint32_t GPR0;
    volatile uint32_t GPR1;
    volatile uint32_t GPR2;
    volatile uint32_t GPR3;
    volatile uint32_t GPR4;
    volatile uint32_t GPR5;
    volatile uint32_t GPR6;
    volatile uint32_t GPR7;
    volatile uint32_t GPR8;
    volatile uint32_t GPR9;
    volatile uint32_t GPR10;
    volatile uint32_t GPR11;
    volatile uint32_t GPR12;
    volatile uint32_t GPR13;
    volatile uint32_t GPR14;
    volatile uint32_t GPR15;
    volatile uint32_t GPR16;
    volatile uint32_t GPR17;
    volatile uint32_t GPR18;
    volatile uint32_t GPR19;
    volatile uint32_t GPR20;
    volatile uint32_t GPR21;
    volatile uint32_t GPR22;
    volatile uint32_t GPR23;
    volatile uint32_t GPR24;
    volatile uint32_t GPR25;
    volatile uint32_t GPR26;
    volatile uint32_t GPR27;
    volatile uint32_t GPR28;
    volatile uint32_t GPR29;
    volatile uint32_t GPR30;
    volatile uint32_t GPR31;
    volatile uint32_t HWCFGR;
    volatile uint32_t VERR;
    volatile uint32_t IPIDR;
    volatile uint32_t SIDR;
};
static_assert(offsetof(DSI_Type, CR)      == 0x000);
static_assert(offsetof(DSI_Type, WPCR[0]) == 0x018);
static_assert(offsetof(DSI_Type, CLCR)    == 0x060);
static_assert(offsetof(DSI_Type, TCCR0)   == 0x140);
static_assert(sizeof(DSI_Type)            == 0x25C);

struct JPEG_Type {
    volatile uint32_t CR;
    volatile uint32_t SR;
    volatile uint32_t DIN;
    volatile uint32_t DOUT;
    volatile uint32_t QMEMR[64];
    volatile uint32_t HUFFMEMR[544];
    volatile uint32_t CMEMR[512];
    volatile uint32_t OFR;
    volatile uint32_t LR;
    volatile uint32_t CVR;
    volatile uint32_t ESCR;
    volatile uint32_t ESUR;
    volatile uint32_t RSVD[2];
    volatile uint32_t HWCFGR;
    volatile uint32_t VERR;
    volatile uint32_t IPIDR;
    volatile uint32_t SIDR;
};
static_assert(offsetof(JPEG_Type, QMEMR[0]) == 0x010);
static_assert(offsetof(JPEG_Type, OFR)      == 0xCC0);

struct GFXMMU_Type {
    volatile uint32_t CR;
    volatile uint32_t SR;
    volatile uint32_t FCR;
    volatile uint32_t IER;
    volatile uint32_t B0CR;
    volatile uint32_t B0LAR;
    volatile uint32_t B0HDFR;
    volatile uint32_t B0VDFR;
    volatile uint32_t B0AOFR;
    volatile uint32_t B1CR;
    volatile uint32_t B1LAR;
    volatile uint32_t B1HDFR;
    volatile uint32_t B1VDFR;
    volatile uint32_t B1AOFR;
    volatile uint32_t B2CR;
    volatile uint32_t B2LAR;
    volatile uint32_t B2HDFR;
    volatile uint32_t B2VDFR;
    volatile uint32_t B2AOFR;
    volatile uint32_t B3CR;
    volatile uint32_t B3LAR;
    volatile uint32_t B3HDFR;
    volatile uint32_t B3VDFR;
    volatile uint32_t B3AOFR;
    volatile uint32_t RSVD[4];
    volatile uint32_t HWCFGR;
    volatile uint32_t VERR;
    volatile uint32_t IPIDR;
    volatile uint32_t SIDR;
};
static_assert(offsetof(GFXMMU_Type, B0CR) == 0x010);

struct DSID_Type {
    volatile uint32_t CR;
    volatile uint32_t CFGR;
    volatile uint32_t SR;
    volatile uint32_t IER;
    volatile uint32_t M0CR;
    volatile uint32_t M0DAR;
    volatile uint32_t M0SAR;
    volatile uint32_t M0ISR;
    volatile uint32_t M0IER;
    volatile uint32_t M0FCR;
    volatile uint32_t M1CR;
    volatile uint32_t M1DAR;
    volatile uint32_t M1SAR;
    volatile uint32_t M1ISR;
    volatile uint32_t M1IER;
    volatile uint32_t M1FCR;
    volatile uint32_t RSVD[48];
    volatile uint32_t HWCFGR;
    volatile uint32_t VERR;
    volatile uint32_t IPIDR;
    volatile uint32_t SIDR;
};

struct HASH_Type {
    volatile uint32_t CR;
    volatile uint32_t DIN;
    volatile uint32_t STR;
    volatile uint32_t HR[8];
    volatile uint32_t IMR;
    volatile uint32_t SR;
    volatile uint32_t CSR[54];
    volatile uint32_t HASH_HR[8];
};
static_assert(offsetof(HASH_Type, HR[0]) == 0x00C);

struct CRYP_Type {
    volatile uint32_t CR;
    volatile uint32_t SR;
    volatile uint32_t DIN;
    volatile uint32_t DOUT;
    volatile uint32_t DMACR;
    volatile uint32_t IMSCR;
    volatile uint32_t RISR;
    volatile uint32_t MISR;
    volatile uint32_t K0LR;
    volatile uint32_t K0RR;
    volatile uint32_t K1LR;
    volatile uint32_t K1RR;
    volatile uint32_t K2LR;
    volatile uint32_t K2RR;
    volatile uint32_t K3LR;
    volatile uint32_t K3RR;
    volatile uint32_t IV0LR;
    volatile uint32_t IV0RR;
    volatile uint32_t IV1LR;
    volatile uint32_t IV1RR;
    volatile uint32_t RSVD[4];
    volatile uint32_t CCMCSR;
    volatile uint32_t CCMCDIR;
    volatile uint32_t RSVD2[204];
    volatile uint32_t CSR[32];
};

struct SAES_Type {
    volatile uint32_t CR;
    volatile uint32_t SR;
    volatile uint32_t DINR;
    volatile uint32_t DOUTR;
    volatile uint32_t KEYR0;
    volatile uint32_t KEYR1;
    volatile uint32_t KEYR2;
    volatile uint32_t KEYR3;
    volatile uint32_t KEYR4;
    volatile uint32_t KEYR5;
    volatile uint32_t KEYR6;
    volatile uint32_t KEYR7;
    volatile uint32_t IVR0;
    volatile uint32_t IVR1;
    volatile uint32_t IVR2;
    volatile uint32_t IVR3;
    volatile uint32_t CSR0;
    volatile uint32_t CSR1;
    volatile uint32_t CSR2;
    volatile uint32_t CSR3;
    volatile uint32_t DINR2;
    volatile uint32_t DINR3;
    volatile uint32_t DOUTR2;
    volatile uint32_t DOUTR3;
};
static_assert(offsetof(SAES_Type, KEYR0) == 0x010);

struct OTFDEC_Type {
    volatile uint32_t CR;
    volatile uint32_t SR;
    volatile uint32_t PCCR;
    volatile uint32_t PRIVCFGR;
    volatile uint32_t RSVD[4];
    volatile uint32_t R1CFGR;
    volatile uint32_t R1STARTADDR;
    volatile uint32_t R1ENDADDR;
    volatile uint32_t R1NONCER0;
    volatile uint32_t R1NONCER1;
    volatile uint32_t R1KEYR0;
    volatile uint32_t R1KEYR1;
    volatile uint32_t R1KEYR2;
    volatile uint32_t R1KEYR3;
    volatile uint32_t RSVD2[7];
    volatile uint32_t R2CFGR;
    volatile uint32_t R2STARTADDR;
    volatile uint32_t R2ENDADDR;
    volatile uint32_t R2NONCER0;
    volatile uint32_t R2NONCER1;
    volatile uint32_t R2KEYR0;
    volatile uint32_t R2KEYR1;
    volatile uint32_t R2KEYR2;
    volatile uint32_t R2KEYR3;
    volatile uint32_t RSVD3[7];
    volatile uint32_t R3CFGR;
    volatile uint32_t R3STARTADDR;
    volatile uint32_t R3ENDADDR;
    volatile uint32_t R3NONCER0;
    volatile uint32_t R3NONCER1;
    volatile uint32_t R3KEYR0;
    volatile uint32_t R3KEYR1;
    volatile uint32_t R3KEYR2;
    volatile uint32_t R3KEYR3;
    volatile uint32_t RSVD4[7];
    volatile uint32_t R4CFGR;
    volatile uint32_t R4STARTADDR;
    volatile uint32_t R4ENDADDR;
    volatile uint32_t R4NONCER0;
    volatile uint32_t R4NONCER1;
    volatile uint32_t R4KEYR0;
    volatile uint32_t R4KEYR1;
    volatile uint32_t R4KEYR2;
    volatile uint32_t R4KEYR3;
    volatile uint32_t RSVD5[7];
    volatile uint32_t R5CFGR;
    volatile uint32_t R5STARTADDR;
    volatile uint32_t R5ENDADDR;
    volatile uint32_t R5NONCER0;
    volatile uint32_t R5NONCER1;
    volatile uint32_t R5KEYR0;
    volatile uint32_t R5KEYR1;
    volatile uint32_t R5KEYR2;
    volatile uint32_t R5KEYR3;
    volatile uint32_t RSVD6[7];
    volatile uint32_t R6CFGR;
    volatile uint32_t R6STARTADDR;
    volatile uint32_t R6ENDADDR;
    volatile uint32_t R6NONCER0;
    volatile uint32_t R6NONCER1;
    volatile uint32_t R6KEYR0;
    volatile uint32_t R6KEYR1;
    volatile uint32_t R6KEYR2;
    volatile uint32_t R6KEYR3;
};
static_assert(offsetof(OTFDEC_Type, R1CFGR) == 0x020);

struct HDP_Type {
    volatile uint32_t CR;
    volatile uint32_t PR;
    volatile uint32_t MUXR;
    volatile uint32_t VALR;
    volatile uint32_t SR;
    volatile uint32_t IER;
    volatile uint32_t ICFR;
    volatile uint32_t RSVD[9];
    volatile uint32_t PRIVCFGR;
};

struct TZSC_Type {
    volatile uint32_t CR;
    volatile uint32_t SDCR;
    volatile uint32_t SR;
    volatile uint32_t IER;
    volatile uint32_t FCR;
    volatile uint32_t RSVD[3];
    volatile uint32_t BGCR;
    volatile uint32_t BGOR;
    volatile uint32_t RSVD2[2];
    volatile uint32_t RGCR[9];
    volatile uint32_t RGOR[9];
    volatile uint32_t RSVD3[46];
    volatile uint32_t PRIVCFGR;
};

struct TZIC_Type {
    volatile uint32_t CR;
    volatile uint32_t SR;
    volatile uint32_t IER;
    volatile uint32_t FCR;
    volatile uint32_t RSVD[12];
    volatile uint32_t PRIVCFGR;
};

struct BSEC_Type {
    volatile uint32_t OTPWLOCKR;
    volatile uint32_t OTPWLOCKSR;
    volatile uint32_t OTPWLOCKCR;
    volatile uint32_t RSVD;
    volatile uint32_t OTPDSWLOCKR;
    volatile uint32_t OTPDSWLOCKSR;
    volatile uint32_t OTPDSWLOCKCR;
    volatile uint32_t RSVD2;
    volatile uint32_t OTPSWLOCKR;
    volatile uint32_t OTPSWLOCKSR;
    volatile uint32_t OTPSWLOCKCR;
    volatile uint32_t RSVD3;
    volatile uint32_t OTPCTL;
    volatile uint32_t OTPADDR;
    volatile uint32_t OTPWDATA;
    volatile uint32_t OTPRDATA;
    volatile uint32_t OTPSR;
    volatile uint32_t OTPICR;
    volatile uint32_t OTPIER;
    volatile uint32_t RSVD4[9];
    volatile uint32_t SCR;
    volatile uint32_t SR;
    volatile uint32_t IER;
    volatile uint32_t FCR;
    volatile uint32_t WADR;
    volatile uint32_t WDATA;
    volatile uint32_t RADR;
    volatile uint32_t RDATA;
    volatile uint32_t RSVD5[8];
    volatile uint32_t JTAGIN;
    volatile uint32_t JTAGOUT;
    volatile uint32_t RSVD6[2];
    volatile uint32_t EPOCH;
    volatile uint32_t UID[3];
    volatile uint32_t STVER;
    volatile uint32_t STM32UID[3];
    volatile uint32_t STM32VER;
    volatile uint32_t STM32CAP;
    volatile uint32_t RSVD7[47];
    volatile uint32_t PRIVCFGR;
};
static_assert(offsetof(BSEC_Type, OTPCTL) == 0x030);

struct IWDG_Type {
    volatile uint32_t KR;
    volatile uint32_t PR;
    volatile uint32_t RLR;
    volatile uint32_t SR;
    volatile uint32_t WINR;
    volatile uint32_t EWCR;
};

struct WWDG_Type {
    volatile uint32_t CR;
    volatile uint32_t CFR;
    volatile uint32_t SR;
};

struct VREFBUF_Type {
    volatile uint32_t CSR;
    volatile uint32_t CCR;
};

struct COMP_Type {
    volatile uint32_t CSR;
};

struct OPAMP_Type {
    volatile uint32_t CSR;
    volatile uint32_t OTR;
    volatile uint32_t LPOTR;
};

struct UCPD_Type {
    volatile uint32_t CFG1;
    volatile uint32_t CFG2;
    volatile uint32_t CR;
    volatile uint32_t IMR;
    volatile uint32_t SR;
    volatile uint32_t ICR;
    volatile uint32_t TX_ORDSET;
    volatile uint32_t TX_PAYSZ;
    volatile uint32_t TXDR;
    volatile uint32_t RX_ORDSET;
    volatile uint32_t RX_PAYSZ;
    volatile uint32_t RXDR;
    volatile uint32_t RX_ORDEXT1;
    volatile uint32_t RX_ORDEXT2;
    volatile uint32_t IPVER;
    volatile uint32_t IPID;
    volatile uint32_t MID;
};

struct SAI_Type {
    volatile uint32_t GCR;
    volatile uint32_t ACR1;
    volatile uint32_t ACR2;
    volatile uint32_t AFRCR;
    volatile uint32_t ASLOTR;
    volatile uint32_t AIM;
    volatile uint32_t ASR;
    volatile uint32_t ACLRFR;
    volatile uint32_t ADR;
    volatile uint32_t BCR1;
    volatile uint32_t BCR2;
    volatile uint32_t BFRCR;
    volatile uint32_t BSLOTR;
    volatile uint32_t BIM;
    volatile uint32_t BSR;
    volatile uint32_t BCLRFR;
    volatile uint32_t BDR;
    volatile uint32_t PDMCR;
    volatile uint32_t PDMDLY;
};

struct SPDIFRX_Type {
    volatile uint32_t CR;
    volatile uint32_t IMR;
    volatile uint32_t SR;
    volatile uint32_t IFCR;
    volatile uint32_t DR;
    volatile uint32_t CSR;
    volatile uint32_t DIR;
    volatile uint32_t VERR;
    volatile uint32_t IDR;
    volatile uint32_t SIDR;
};

struct HDMI_CEC_Type {
    volatile uint32_t CR;
    volatile uint32_t CFGR;
    volatile uint32_t TXDR;
    volatile uint32_t RXDR;
    volatile uint32_t ISR;
    volatile uint32_t IER;
    volatile uint32_t TXEOMR;
    volatile uint32_t HWCFGR;
    volatile uint32_t VERR;
    volatile uint32_t IPIDR;
    volatile uint32_t SIDR;
};

struct SWPMI_Type {
    volatile uint32_t CR;
    volatile uint32_t BRR;
    volatile uint32_t ISR;
    volatile uint32_t ICR;
    volatile uint32_t IER;
    volatile uint32_t RFL;
    volatile uint32_t TDR;
    volatile uint32_t RDR;
    volatile uint32_t OR;
    volatile uint32_t PWR;
    volatile uint32_t HWCFGR;
    volatile uint32_t VERR;
    volatile uint32_t IPIDR;
    volatile uint32_t SIDR;
};

struct LPTIM_Type {
    volatile uint32_t ISR;
    volatile uint32_t ICR;
    volatile uint32_t IER;
    volatile uint32_t CFGR;
    volatile uint32_t CR;
    volatile uint32_t CMP;
    volatile uint32_t ARR;
    volatile uint32_t CNT;
    volatile uint32_t CFGR2;
    volatile uint32_t RSVD[2];
    volatile uint32_t DTR;
    volatile uint32_t RSVD2[2];
    volatile uint32_t CMP2;
    volatile uint32_t CMP3;
    volatile uint32_t CMP4;
    volatile uint32_t RSVD3[4];
    volatile uint32_t RCMP0;
    volatile uint32_t RCMP1;
    volatile uint32_t RCMP2;
    volatile uint32_t RCMP3;
};

struct FDCAN_Type {
    volatile uint32_t CREL;
    volatile uint32_t ENDN;
    volatile uint32_t RSVD;
    volatile uint32_t DBTP;
    volatile uint32_t TEST;
    volatile uint32_t RWD;
    volatile uint32_t CCCR;
    volatile uint32_t NBTP;
    volatile uint32_t TSCC;
    volatile uint32_t TSCV;
    volatile uint32_t TOCC;
    volatile uint32_t TOCV;
    volatile uint32_t RSVD2[4];
    volatile uint32_t ECR;
    volatile uint32_t PSR;
    volatile uint32_t TDCR;
    volatile uint32_t RSVD3;
    volatile uint32_t IR;
    volatile uint32_t IE;
    volatile uint32_t ILS;
    volatile uint32_t ILE;
    volatile uint32_t RSVD4[8];
    volatile uint32_t RXGFC;
    volatile uint32_t XIDAM;
    volatile uint32_t HPMS;
    volatile uint32_t RSVD5;
    volatile uint32_t RXF0S;
    volatile uint32_t RXF0A;
    volatile uint32_t RXF1S;
    volatile uint32_t RXF1A;
    volatile uint32_t RSVD6[8];
    volatile uint32_t TXBC;
    volatile uint32_t TXFQS;
    volatile uint32_t TXBRP;
    volatile uint32_t TXBAR;
    volatile uint32_t TXBCR;
    volatile uint32_t TXBTO;
    volatile uint32_t TXBCF;
    volatile uint32_t TXBTIE;
    volatile uint32_t TXBCIE;
    volatile uint32_t TXEFS;
    volatile uint32_t TXEFA;
    volatile uint32_t RSVD7[2];
    volatile uint32_t CKDIV;
    volatile uint32_t RSVD8[43];
    volatile uint32_t XIDFC;
    volatile uint32_t XIDFS;
    volatile uint32_t XIDFF;
    volatile uint32_t RSVD9;
    volatile uint32_t SIDFC;
    volatile uint32_t SIDFS;
    volatile uint32_t SIDFF;
    volatile uint32_t RSVD10;
    volatile uint32_t FLTP;
    volatile uint32_t RSVD11[7];
    volatile uint32_t TTTMC;
    volatile uint32_t TTRMC;
    volatile uint32_t TTOCF;
    volatile uint32_t TTMLM;
    volatile uint32_t TURCF;
    volatile uint32_t TTOCN;
    volatile uint32_t TTGTP;
    volatile uint32_t TTTMK;
    volatile uint32_t TTIR;
    volatile uint32_t TTIE;
    volatile uint32_t TILS;
    volatile uint32_t TTOST;
    volatile uint32_t TURNA;
    volatile uint32_t TTLGT;
    volatile uint32_t TTCTC;
    volatile uint32_t TTCPT;
    volatile uint32_t TTFTS;
    volatile uint32_t RSVD12[17];
    volatile uint32_t TXBR[18];
    volatile uint32_t RXESC;
    volatile uint32_t TXESC;
    volatile uint32_t RSVD13[2];
    volatile uint32_t CRCR;
    volatile uint32_t RSVD14[5];
    volatile uint32_t FLS;
    volatile uint32_t RSVD15[3];
    volatile uint32_t EFC;
    volatile uint32_t RSVD16[2];
    volatile uint32_t TEC;
    volatile uint32_t REC;
    volatile uint32_t RSVD17[2];
    volatile uint32_t BTR;
    volatile uint32_t RSVD18[3];
};

struct SDMMC_Type {
    volatile uint32_t POWER;
    volatile uint32_t CLKCR;
    volatile uint32_t ARG;
    volatile uint32_t CMD;
    volatile uint32_t RESPCMD;
    volatile uint32_t RESP1;
    volatile uint32_t RESP2;
    volatile uint32_t RESP3;
    volatile uint32_t RESP4;
    volatile uint32_t DTIMER;
    volatile uint32_t DLEN;
    volatile uint32_t DCTRL;
    volatile uint32_t DCOUNT;
    volatile uint32_t STA;
    volatile uint32_t ICR;
    volatile uint32_t MASK;
    volatile uint32_t ACKTIMER;
    volatile uint32_t RSVD[3];
    volatile uint32_t IDMACTRL;
    volatile uint32_t IDMACTXADDR;
    volatile uint32_t IDMACRXADDR;
    volatile uint32_t IDMACTXDESC;
    volatile uint32_t IDMACRXDESC;
    volatile uint32_t RSVD2[83];
    volatile uint32_t FIFO;
};

struct ETH_Type {
    volatile uint32_t MACCR;
    volatile uint32_t MACFFR;
    volatile uint32_t MACHTHR;
    volatile uint32_t MACHTLR;
    volatile uint32_t MACMIIAR;
    volatile uint32_t MACMIIDR;
    volatile uint32_t MACFCR;
    volatile uint32_t MACVLANTR;
    volatile uint32_t RSVD[2];
    volatile uint32_t MACRWUFFR;
    volatile uint32_t MACPMTCSR;
    volatile uint32_t MACSR;
    volatile uint32_t MACIMR;
    volatile uint32_t MACA0HR;
    volatile uint32_t MACA0LR;
    volatile uint32_t MACA1HR;
    volatile uint32_t MACA1LR;
    volatile uint32_t MACA2HR;
    volatile uint32_t MACA2LR;
    volatile uint32_t MACA3HR;
    volatile uint32_t MACA3LR;
    volatile uint32_t RSVD2[40];
    volatile uint32_t MMCCR;
    volatile uint32_t MMCRIR;
    volatile uint32_t MMCTIR;
    volatile uint32_t MMCRIMR;
    volatile uint32_t MMCTIMR;
    volatile uint32_t RSVD3[14];
    volatile uint32_t MMCTGFSCCR;
    volatile uint32_t MMCTGFMSCCR;
    volatile uint32_t RSVD4[5];
    volatile uint32_t MMCTGFCR;
    volatile uint32_t RSVD5[10];
    volatile uint32_t MMCRFCECR;
    volatile uint32_t MMCRFAECR;
    volatile uint32_t RSVD6[10];
    volatile uint32_t MMCRGUFCR;
    volatile uint32_t RSVD7[335];
    volatile uint32_t DMABMR;
    volatile uint32_t DMATPDR;
    volatile uint32_t DMARPDR;
    volatile uint32_t DMARDLAR;
    volatile uint32_t DMATDLAR;
    volatile uint32_t DMASR;
    volatile uint32_t DMAOMR;
    volatile uint32_t DMAIER;
    volatile uint32_t DMAMFBOCR;
    volatile uint32_t DMARSWTR;
    volatile uint32_t RSVD8[8];
    volatile uint32_t DMACHTDR;
    volatile uint32_t DMACHRDR;
    volatile uint32_t DMACHTBAR;
    volatile uint32_t DMACHRBAR;
};

struct USB_OTG_GlobalType {
    volatile uint32_t GOTGCTL;
    volatile uint32_t GOTGINT;
    volatile uint32_t GAHBCFG;
    volatile uint32_t GUSBCFG;
    volatile uint32_t GRSTCTL;
    volatile uint32_t GINTSTS;
    volatile uint32_t GINTMSK;
    volatile uint32_t GRXSTSR;
    volatile uint32_t GRXSTSP;
    volatile uint32_t GRXFSIZ;
    volatile uint32_t DIEPTXF0;
    volatile uint32_t HNPTXSTS;
    volatile uint32_t RSVD[2];
    volatile uint32_t GCCFG;
    volatile uint32_t CID;
    volatile uint32_t RSVD2[3];
    volatile uint32_t GHWCFG1;
    volatile uint32_t GHWCFG2;
    volatile uint32_t GHWCFG3;
    volatile uint32_t GHWCFG4;
    volatile uint32_t GLPMCFG;
    volatile uint32_t GPWRDN;
    volatile uint32_t GDFIFOCFG;
    volatile uint32_t RSVD3[23];
    volatile uint32_t HPTXFSIZ;
    volatile uint32_t DIEPTXF[15];
};

struct OCTOSPI_Type {
    volatile uint32_t CR;
    volatile uint32_t DCR1;
    volatile uint32_t DCR2;
    volatile uint32_t DCR3;
    volatile uint32_t DCR4;
    volatile uint32_t SR;
    volatile uint32_t FCR;
    volatile uint32_t DLR;
    volatile uint32_t AR;
    volatile uint32_t ABR;
    volatile uint32_t DR;
    volatile uint32_t PSMKR;
    volatile uint32_t PSMAR;
    volatile uint32_t PIR;
    volatile uint32_t CCR;
    volatile uint32_t TCR;
    volatile uint32_t IR;
    volatile uint32_t LPTR;
    volatile uint32_t WPCCR;
    volatile uint32_t WPTCR;
    volatile uint32_t WPIR;
    volatile uint32_t WPABR;
    volatile uint32_t WCCR;
    volatile uint32_t WTCR;
    volatile uint32_t WIR;
    volatile uint32_t WABR;
    volatile uint32_t MCCR;
    volatile uint32_t MTCR;
    volatile uint32_t MIR;
    volatile uint32_t MAR;
    volatile uint32_t MDR;
    volatile uint32_t RSVD[12];
    volatile uint32_t HWCFGR;
    volatile uint32_t VERR;
    volatile uint32_t IPIDR;
    volatile uint32_t SIDR;
};

struct FMC_Type {
    volatile uint32_t BTCR[8];
    volatile uint32_t PCR;
    volatile uint32_t SR;
    volatile uint32_t PMEM;
    volatile uint32_t PATT;
    volatile uint32_t RSVD;
    volatile uint32_t ECCR;
    volatile uint32_t RSVD2[27];
    volatile uint32_t BWTR[7];
    volatile uint32_t RSVD3[192];
    volatile uint32_t SDRCR[2];
    volatile uint32_t SDTR[2];
    volatile uint32_t SDCMR;
    volatile uint32_t SDRTR;
    volatile uint32_t SDSR;
};

struct DMA_Type {
    volatile uint32_t LISR;
    volatile uint32_t HISR;
    volatile uint32_t LIFCR;
    volatile uint32_t HIFCR;
    volatile struct {
        volatile uint32_t CR;
        volatile uint32_t NDTR;
        volatile uint32_t PAR;
        volatile uint32_t M0AR;
        volatile uint32_t M1AR;
        volatile uint32_t FCR;
    } S[8];
};

struct MDMA_Type {
    volatile uint32_t GISR0;
    volatile uint32_t GISR1;
    volatile uint32_t GTC;
    volatile uint32_t RSVD[5];
    volatile uint32_t GCR;
    volatile uint32_t RSVD2[247];
    volatile struct {
        volatile uint32_t CR;
        volatile uint32_t CR2;
        volatile uint32_t CBNDTR;
        volatile uint32_t CSAR;
        volatile uint32_t CDAR;
        volatile uint32_t CBRUR;
        volatile uint32_t CLAR;
        volatile uint32_t CTBR;
        volatile uint32_t SR;
        volatile uint32_t FCR;
        volatile uint32_t BRUR;
        volatile uint32_t LAR;
        volatile uint32_t TBR;
        volatile uint32_t MAR;
        volatile uint32_t MDR;
        volatile uint32_t RSVD[16];
    } C[16];
};

struct BDMA_Type {
    volatile uint32_t ISR;
    volatile uint32_t IFCR;
    volatile struct {
        volatile uint32_t CCR;
        volatile uint32_t CNDTR;
        volatile uint32_t CPAR;
        volatile uint32_t CM0AR;
        volatile uint32_t CM1AR;
    } C[8];
};

struct DCMI_Type {
    volatile uint32_t CR;
    volatile uint32_t SR;
    volatile uint32_t RIS;
    volatile uint32_t IER;
    volatile uint32_t MIS;
    volatile uint32_t ICR;
    volatile uint32_t ESCR;
    volatile uint32_t ESUR;
    volatile uint32_t CWSTRTR;
    volatile uint32_t CWSIZER;
    volatile uint32_t DR;
};

struct PSSI_Type {
    volatile uint32_t CR;
    volatile uint32_t SR;
    volatile uint32_t RIS;
    volatile uint32_t IER;
    volatile uint32_t MIS;
    volatile uint32_t ICR;
    volatile uint32_t DR;
    volatile uint32_t RSVD[249];
    volatile uint32_t HWCFGR;
    volatile uint32_t VERR;
    volatile uint32_t IPIDR;
    volatile uint32_t SIDR;
};

inline constexpr auto SCB       = reinterpret_cast<SCB_Type      *const>(SCB_BASE);
inline constexpr auto NVIC      = reinterpret_cast<NVIC_Type     *const>(NVIC_BASE);
inline constexpr auto CoreDebug = reinterpret_cast<CoreDebug_Type*const>(CoreDebug_BASE);
inline constexpr auto DWT       = reinterpret_cast<DWT_Type      *const>(DWT_BASE);
inline constexpr auto DBGMCU    = reinterpret_cast<DBGMCU_Type   *const>(DBGMCU_BASE);
inline constexpr auto FLASH     = reinterpret_cast<FLASH_Type    *const>(FLASH_R_BASE);
inline constexpr auto RCC       = reinterpret_cast<RCC_Type      *const>(RCC_BASE);
inline constexpr auto PWR       = reinterpret_cast<PWR_Type      *const>(PWR_BASE);
inline constexpr auto RTC       = reinterpret_cast<RTC_Type      *const>(RTC_BASE);
inline constexpr auto TAMP      = reinterpret_cast<TAMP_Type     *const>(TAMP_BASE);
inline constexpr auto RNG       = reinterpret_cast<RNG_Type      *const>(RNG_BASE);
inline constexpr auto CRC       = reinterpret_cast<CRC_Type      *const>(CRC_BASE);
inline constexpr auto IWDG      = reinterpret_cast<IWDG_Type     *const>(IWDG_BASE);
inline constexpr auto WWDG      = reinterpret_cast<WWDG_Type     *const>(WWDG_BASE);
inline constexpr auto HASH      = reinterpret_cast<HASH_Type     *const>(HASH_BASE);
inline constexpr auto CRYP      = reinterpret_cast<CRYP_Type     *const>(CRYP_BASE);
inline constexpr auto SAES      = reinterpret_cast<SAES_Type     *const>(SAES_BASE);
inline constexpr auto OTFDEC1   = reinterpret_cast<OTFDEC_Type   *const>(OTFDEC1_BASE);
inline constexpr auto OTFDEC2   = reinterpret_cast<OTFDEC_Type   *const>(OTFDEC2_BASE);
inline constexpr auto HDP       = reinterpret_cast<HDP_Type      *const>(AHB1_BASE + 0x7C00UL);
inline constexpr auto BSEC      = reinterpret_cast<BSEC_Type     *const>(0x5C005000UL);
inline constexpr auto TZSC1     = reinterpret_cast<TZSC_Type     *const>(0x5C006000UL);
inline constexpr auto TZIC1     = reinterpret_cast<TZIC_Type     *const>(0x5C006400UL);
inline constexpr auto GPIOA     = reinterpret_cast<GPIO_Type     *const>(GPIOA_BASE);
inline constexpr auto GPIOB     = reinterpret_cast<GPIO_Type     *const>(GPIOB_BASE);
inline constexpr auto GPIOC     = reinterpret_cast<GPIO_Type     *const>(GPIOC_BASE);
inline constexpr auto GPIOD     = reinterpret_cast<GPIO_Type     *const>(GPIOD_BASE);
inline constexpr auto GPIOE     = reinterpret_cast<GPIO_Type     *const>(GPIOE_BASE);
inline constexpr auto GPIOH     = reinterpret_cast<GPIO_Type     *const>(GPIOH_BASE);
inline constexpr auto USART1    = reinterpret_cast<USART_Type    *const>(USART1_BASE);
inline constexpr auto USART2    = reinterpret_cast<USART_Type    *const>(USART2_BASE);
inline constexpr auto USART3    = reinterpret_cast<USART_Type    *const>(USART3_BASE);
inline constexpr auto UART4     = reinterpret_cast<USART_Type    *const>(UART4_BASE);
inline constexpr auto UART5     = reinterpret_cast<USART_Type    *const>(UART5_BASE);
inline constexpr auto USART6    = reinterpret_cast<USART_Type    *const>(USART6_BASE);
inline constexpr auto UART7     = reinterpret_cast<USART_Type    *const>(UART7_BASE);
inline constexpr auto UART8     = reinterpret_cast<USART_Type    *const>(UART8_BASE);
inline constexpr auto LPUART1   = reinterpret_cast<USART_Type    *const>(LPUART1_BASE);
inline constexpr auto EXTI      = reinterpret_cast<EXTI_Type     *const>(EXTI_BASE);
inline constexpr auto SYSCFG    = reinterpret_cast<SYSCFG_Type   *const>(SYSCFG_BASE);
inline constexpr auto SPI1      = reinterpret_cast<SPI_Type      *const>(SPI1_BASE);
inline constexpr auto SPI2      = reinterpret_cast<SPI_Type      *const>(SPI2_BASE);
inline constexpr auto SPI3      = reinterpret_cast<SPI_Type      *const>(SPI3_BASE);
inline constexpr auto SPI4      = reinterpret_cast<SPI_Type      *const>(SPI4_BASE);
inline constexpr auto SPI5      = reinterpret_cast<SPI_Type      *const>(SPI5_BASE);
inline constexpr auto SPI6      = reinterpret_cast<SPI_Type      *const>(SPI6_BASE);
inline constexpr auto I2C1      = reinterpret_cast<I2C_Type      *const>(I2C1_BASE);
inline constexpr auto I2C2      = reinterpret_cast<I2C_Type      *const>(I2C2_BASE);
inline constexpr auto I2C3      = reinterpret_cast<I2C_Type      *const>(I2C3_BASE);
inline constexpr auto I2C4      = reinterpret_cast<I2C_Type      *const>(I2C4_BASE);
inline constexpr auto FDCAN1    = reinterpret_cast<FDCAN_Type    *const>(FDCAN1_BASE);
inline constexpr auto FDCAN2    = reinterpret_cast<FDCAN_Type    *const>(FDCAN2_BASE);
inline constexpr auto FDCAN3    = reinterpret_cast<FDCAN_Type    *const>(FDCAN3_BASE);
inline constexpr auto ADC1      = reinterpret_cast<ADC_Type      *const>(ADC1_BASE);
inline constexpr auto ADC2      = reinterpret_cast<ADC_Type      *const>(ADC2_BASE);
inline constexpr auto ADC3      = reinterpret_cast<ADC_Type      *const>(ADC3_BASE);
inline constexpr auto DAC1      = reinterpret_cast<DAC_Type      *const>(DAC1_BASE);
inline constexpr auto COMP1     = reinterpret_cast<COMP_Type     *const>(COMP1_BASE);
inline constexpr auto VREFBUF   = reinterpret_cast<VREFBUF_Type  *const>(VREFBUF_BASE);
inline constexpr auto OPAMP1    = reinterpret_cast<OPAMP_Type    *const>(OPAMP1_BASE);
inline constexpr auto TIM1      = reinterpret_cast<TIM_Type      *const>(TIM1_BASE);
inline constexpr auto TIM2      = reinterpret_cast<TIM_Type      *const>(TIM2_BASE);
inline constexpr auto TIM3      = reinterpret_cast<TIM_Type      *const>(TIM3_BASE);
inline constexpr auto TIM4      = reinterpret_cast<TIM_Type      *const>(TIM4_BASE);
inline constexpr auto TIM5      = reinterpret_cast<TIM_Type      *const>(TIM5_BASE);
inline constexpr auto TIM6      = reinterpret_cast<TIM_Type      *const>(TIM6_BASE);
inline constexpr auto TIM7      = reinterpret_cast<TIM_Type      *const>(TIM7_BASE);
inline constexpr auto TIM8      = reinterpret_cast<TIM_Type      *const>(TIM8_BASE);
inline constexpr auto TIM15     = reinterpret_cast<TIM_Type      *const>(TIM15_BASE);
inline constexpr auto TIM16     = reinterpret_cast<TIM_Type      *const>(TIM16_BASE);
inline constexpr auto TIM17     = reinterpret_cast<TIM_Type      *const>(TIM17_BASE);
inline constexpr auto LPTIM1    = reinterpret_cast<LPTIM_Type    *const>(LPTIM1_BASE);
inline constexpr auto LPTIM2    = reinterpret_cast<LPTIM_Type    *const>(LPTIM2_BASE);
inline constexpr auto LPTIM3    = reinterpret_cast<LPTIM_Type    *const>(LPTIM3_BASE);
inline constexpr auto LPTIM4    = reinterpret_cast<LPTIM_Type    *const>(LPTIM4_BASE);
inline constexpr auto LPTIM5    = reinterpret_cast<LPTIM_Type    *const>(LPTIM5_BASE);
inline constexpr auto SAI1      = reinterpret_cast<SAI_Type      *const>(SAI1_BASE);
inline constexpr auto SAI2      = reinterpret_cast<SAI_Type      *const>(0x40015800UL);
inline constexpr auto SPDIFRX   = reinterpret_cast<SPDIFRX_Type  *const>(SPDIFRX_BASE);
inline constexpr auto HDMI_CEC  = reinterpret_cast<HDMI_CEC_Type *const>(HDMI_CEC_BASE);
inline constexpr auto SWPMI1    = reinterpret_cast<SWPMI_Type    *const>(0x40008800UL);
inline constexpr auto UCPD1     = reinterpret_cast<UCPD_Type     *const>(UCPD1_BASE);
inline constexpr auto SDMMC1    = reinterpret_cast<SDMMC_Type    *const>(SDMMC1_BASE);
inline constexpr auto SDMMC2    = reinterpret_cast<SDMMC_Type    *const>(SDMMC2_BASE);
inline constexpr auto ETH       = reinterpret_cast<ETH_Type      *const>(ETH_BASE);
inline constexpr auto USB_OTG_FS= reinterpret_cast<USB_OTG_GlobalType*const>(USB_OTG_FS_BASE);
inline constexpr auto USB_OTG_HS= reinterpret_cast<USB_OTG_GlobalType*const>(USB_OTG_HS_BASE);
inline constexpr auto OCTOSPI1  = reinterpret_cast<OCTOSPI_Type  *const>(OCTOSPI1_BASE);
inline constexpr auto OCTOSPI2  = reinterpret_cast<OCTOSPI_Type  *const>(OCTOSPI2_BASE);
inline constexpr auto FMC       = reinterpret_cast<FMC_Type      *const>(FMC_BASE);
inline constexpr auto DMA1      = reinterpret_cast<DMA_Type      *const>(DMA1_BASE);
inline constexpr auto DMA2      = reinterpret_cast<DMA_Type      *const>(DMA2_BASE);
inline constexpr auto MDMA      = reinterpret_cast<MDMA_Type     *const>(MDMA_BASE);
inline constexpr auto BDMA      = reinterpret_cast<BDMA_Type     *const>(BDMA_BASE);
inline constexpr auto DCMI      = reinterpret_cast<DCMI_Type     *const>(DCMI_BASE);
inline constexpr auto PSSI      = reinterpret_cast<PSSI_Type     *const>(PSSI_BASE);
inline constexpr auto GFXMMU    = reinterpret_cast<GFXMMU_Type   *const>(GFXMMU_BASE);
inline constexpr auto GPU2D     = reinterpret_cast<GPU2D_Type    *const>(GPU2D_BASE);
inline constexpr auto JPEG      = reinterpret_cast<JPEG_Type     *const>(JPEG_BASE);
inline constexpr auto DSID      = reinterpret_cast<DSID_Type     *const>(DSID_BASE);
inline constexpr auto LTDC      = reinterpret_cast<LTDC_Type     *const>(LTDC_BASE);
inline constexpr auto DSI       = reinterpret_cast<DSI_Type      *const>(DSI_BASE);
inline constexpr auto MPU       = reinterpret_cast<MPU_Type      *const>(MPU_BASE);
inline constexpr auto SAU       = reinterpret_cast<SAU_Type      *const>(SAU_BASE);

}

namespace STM32V8::Sec {

using namespace Reg;

enum class RdpLevel : uint8_t {
    L0   = 0xAA,
    L0_5 = 0x55,
    L1   = 0xBB,
    L2   = 0xCC
};

enum class DestroyStage : uint32_t {
    Idle    = 0x00000000,
    Tamper  = 0x1BADB002,
    Debug   = 0xDEADBEEF,
    Voltage = 0xBADC0FFE,
    Clock   = 0xC0FFEE01,
    Temp    = 0xFEEDC0DE,
    Erase   = 0x0BADDEAD,
    Over    = 0xFFFFFFFF
};

enum class TriggerSource : uint32_t {
    Debugger  = 1UL << 0,
    Tamper1   = 1UL << 1,
    Tamper2   = 1UL << 2,
    Tamper3   = 1UL << 3,
    VddLow    = 1UL << 4,
    VddHigh   = 1UL << 5,
    TempHigh  = 1UL << 6,
    ClkGlitch = 1UL << 7,
    ExtPin    = 1UL << 8,
    UartMagic = 1UL << 9,
    RtcAlarm  = 1UL << 10,
    RetryOver = 1UL << 11,
    Fault     = 1UL << 12,
    Nmi       = 1UL << 13,
    FlashErr  = 1UL << 14,
    RdpDrop   = 1UL << 15
};

struct BkpLayout {
    uint32_t Magic;
    uint32_t Bitmap;
    uint32_t Stage;
    uint32_t Retry;
    uint32_t Trigger;
    uint32_t Crc;
    uint32_t Rsvd[26];
};
static_assert(sizeof(BkpLayout) == 32 * sizeof(uint32_t));

inline constexpr uint32_t BKP_MAGIC     = 0x7A5F3C1EUL;
inline constexpr uint32_t BKP_DONE      = 0xDEADDEADUL;
inline constexpr uint32_t RETRY_FAST    = 15U;
inline constexpr uint32_t RETRY_RDP2    = 30U;
inline constexpr uint32_t RETRY_LOCK    = 60U;
inline constexpr uint32_t SECTOR_CNT    = 8U;
inline constexpr uint32_t UART_MAGIC_LEN= 8U;
inline constexpr uint8_t  UART_MAGIC[UART_MAGIC_LEN] = {0xAA,0x55,0xA5,0x5A,0x41,0x53,0x48,0x45};

[[nodiscard]] constexpr auto bit(uint32_t n) noexcept -> uint32_t { return 1UL << n; }
[[nodiscard]] constexpr auto mask(uint32_t n) noexcept -> uint32_t { return (1UL << n) - 1U; }
[[nodiscard]] constexpr auto ror(uint32_t v, uint32_t n) noexcept -> uint32_t { return (v >> n) | (v << (32 - n)); }
[[nodiscard]] constexpr auto rol(uint32_t v, uint32_t n) noexcept -> uint32_t { return (v << n) | (v >> (32 - n)); }

[[nodiscard]] constexpr auto crc32_iso(uint32_t crc, uint8_t b) noexcept -> uint32_t {
    crc ^= b;
    for (uint32_t i = 0; i < 8; ++i)
        crc = (crc & 1U) ? (crc >> 1U) ^ 0xEDB88320UL : (crc >> 1U);
    return crc;
}

[[nodiscard]] inline auto bkp_crc() noexcept -> uint32_t {
    uint32_t c = 0xFFFFFFFFUL;
    volatile uint32_t *p = &RTC->BKP0R;
    for (uint32_t i = 0; i < 5; ++i) {
        uint32_t v = p[i];
        c = crc32_iso(c, static_cast<uint8_t>(v));
        c = crc32_iso(c, static_cast<uint8_t>(v >> 8));
        c = crc32_iso(c, static_cast<uint8_t>(v >> 16));
        c = crc32_iso(c, static_cast<uint8_t>(v >> 24));
    }
    return ~c;
}

[[gnu::always_inline]] inline void bkp_sync() noexcept {
    RTC->BKP5R = bkp_crc();
    __asm volatile ("dsb 0xF" ::: "memory");
}

[[gnu::always_inline]] inline auto bkp_valid() noexcept -> bool {
    return RTC->BKP0R == BKP_MAGIC && RTC->BKP5R == bkp_crc();
}

[[gnu::always_inline, nodiscard]] inline auto debugger_attached() noexcept -> bool {
    uint32_t dhcsr = CoreDebug->DHCSR;
    uint32_t demcr = CoreDebug->DEMCR;
    uint32_t dbg   = DBGMCU->CR;
    uint32_t apb1  = DBGMCU->APB1FZR1 | DBGMCU->APB1FZR2;
    uint32_t apb2  = DBGMCU->APB2FZR;
    uint32_t ahb1  = DBGMCU->AHB1FZR;
    uint32_t id    = DBGMCU->IDCODE;
    bool res = false;
    res |= (dhcsr & bit(0)) != 0;
    res |= (demcr & (bit(0)|bit(16)|bit(24))) != 0;
    res |= (dbg & (bit(0)|bit(1)|bit(2)|bit(12)|bit(13)|bit(14))) != 0;
    res |= (apb1 | apb2 | ahb1) != 0;
    res |= (id & 0x0000FFFFUL) == 0x00000000UL;
    asm volatile ("" ::: "memory");
    uint32_t dhcsr2 = CoreDebug->DHCSR;
    res |= dhcsr != dhcsr2;
    return res;
}

[[gnu::always_inline, nodiscard]] inline auto single_step_detected(uint32_t ref_cycles) noexcept -> bool {
    uint32_t now = DWT->CYCCNT;
    uint32_t delta = now - ref_cycles;
    return delta > (ref_cycles >> 4);
}

[[gnu::always_inline]] inline void secure_memclr(volatile void *p, size_t n) noexcept {
    auto *q = static_cast<volatile uint8_t*>(p);
    for (size_t i = 0; i < n; ++i) q[i] = 0x00;
    for (size_t i = 0; i < n; ++i) q[i] = 0xFF;
    for (size_t i = 0; i < n; ++i) q[i] = 0xAA;
    for (size_t i = 0; i < n; ++i) q[i] = 0x55;
    for (size_t i = 0; i < n; ++i) q[i] = 0x00;
    asm volatile ("" ::: "memory");
}

[[gnu::always_inline]] inline void purge_caches() noexcept {
    asm volatile (
        "mov r0, #0\n"
        "mcr p15, 0, r0, c7, c5, 0\n"
        "mcr p15, 0, r0, c7, c6, 0\n"
        "mcr p15, 0, r0, c7, c10, 4\n"
        "mcr p15, 0, r0, c7, c14, 0\n"
        ::: "r0","memory"
    );
}

[[gnu::always_inline]] inline void purge_all_sram() noexcept {
    struct Rgn { uint32_t s; uint32_t e; };
    constexpr Rgn r[] = {
        {SRAM1_BASE, SRAM1_END},
        {SRAM2_BASE, SRAM2_END},
        {SRAM3_BASE, SRAM3_END},
        {0x24000000UL, 0x24080000UL},
        {0x38000000UL, 0x38010000UL},
        {0x30000000UL, 0x30040000UL}
    };
    for (auto &rg : r) {
        auto *p = reinterpret_cast<volatile uint32_t*>(rg.s);
        size_t cnt = (rg.e - rg.s) >> 2;
        for (size_t i = 0; i < cnt; ++i) p[i] = RNG->DR;
        for (size_t i = 0; i < cnt; ++i) p[i] = 0x00000000UL;
    }
    purge_caches();
}

[[gnu::always_inline]] inline void kill_peripherals() noexcept {
    SAES->CR = 0;
    CRYP->CR = 0;
    HASH->CR = 0;
    OTFDEC1->CR = 0;
    OTFDEC2->CR = 0;
    RNG->CR = 0;
    for (uint32_t i = 0; i < 8; ++i) {
        OTFDEC1->R1KEYR0 = i;
        OTFDEC1->R1KEYR1 = i * 3;
        OTFDEC1->R1KEYR2 = i * 7;
        OTFDEC1->R1KEYR3 = i * 11;
    }
    for (uint32_t i = 0; i < 8; ++i) {
        SAES->KEYR0 = RNG->DR;
        SAES->KEYR1 = RNG->DR;
        SAES->KEYR2 = RNG->DR;
        SAES->KEYR3 = RNG->DR;
    }
    CRYP->K0LR = 0; CRYP->K0RR = 0;
    CRYP->K1LR = 0; CRYP->K1RR = 0;
    CRYP->K2LR = 0; CRYP->K2RR = 0;
    CRYP->K3LR = 0; CRYP->K3RR = 0;
    DMA1->LIFCR = 0xFFFFFFFFUL;
    DMA1->HIFCR = 0xFFFFFFFFUL;
    DMA2->LIFCR = 0xFFFFFFFFUL;
    DMA2->HIFCR = 0xFFFFFFFFUL;
    MDMA->GTC = 0;
    BDMA->IFCR = 0xFFFFFFFFUL;
    ETH->MACCR = 0;
    USB_OTG_FS->GRSTCTL = bit(0);
    USB_OTG_HS->GRSTCTL = bit(0);
    FMC->BTCR[0] = 0;
    OCTOSPI1->CR = 0;
    OCTOSPI2->CR = 0;
    SDMMC1->POWER = 0;
    SDMMC2->POWER = 0;
    DCMI->CR = 0;
    LTDC->GCR = 0;
    DSI->CR = 0;
    GPU2D->CR = bit(4);
    JPEG->CR = bit(2);
    CRYP->CR = bit(6) | bit(7);
    HASH->CR = bit(2);
    __asm volatile ("dsb 0xF" ::: "memory");
}

[[gnu::always_inline]] inline void flash_wait() noexcept {
    while (FLASH->SR & bit(16)) asm volatile ("nop");
}

[[gnu::always_inline]] inline auto flash_unlock() noexcept -> bool {
    if (!(FLASH->CR & bit(31))) return true;
    FLASH->KEYR = 0x45670123UL;
    FLASH->KEYR = 0xCDEF89ABUL;
    return !(FLASH->CR & bit(31));
}

[[gnu::always_inline]] inline void flash_lock() noexcept {
    FLASH->CR |= bit(31);
}

[[gnu::always_inline]] inline auto flash_erase_sector(uint32_t s) noexcept -> bool {
    if (s >= SECTOR_CNT) return false;
    flash_wait();
    FLASH->CR &= ~(0xFUL << 3 | mask(2) << 8);
    FLASH->CR |= (s << 3) | (2UL << 8) | bit(1);
    FLASH->CR |= bit(16);
    flash_wait();
    FLASH->CR &= ~bit(1);
    return (FLASH->SR & (bit(1)|bit(4)|bit(5)|bit(6)|bit(7))) == 0;
}

[[gnu::always_inline]] inline auto flash_w32(uint32_t a, uint32_t d) noexcept -> bool {
    if (a & 3U) return false;
    flash_wait();
    FLASH->CR &= ~(mask(2) << 8);
    FLASH->CR |= (2UL << 8) | bit(0);
    *reinterpret_cast<volatile uint32_t*>(a) = d;
    flash_wait();
    FLASH->CR &= ~bit(0);
    return (FLASH->SR & (bit(1)|bit(4)|bit(5)|bit(6)|bit(7))) == 0 &&
           *reinterpret_cast<volatile uint32_t*>(a) == d;
}

[[gnu::always_inline]] inline void flash_fill(uint32_t addr, uint32_t sz, uint32_t pat) noexcept {
    uint32_t n = sz >> 2;
    auto *p = reinterpret_cast<volatile uint32_t*>(addr);
    for (uint32_t i = 0; i < n; ++i) {
        flash_wait();
        FLASH->CR &= ~(mask(2) << 8);
        FLASH->CR |= (2UL << 8) | bit(0);
        p[i] = pat;
        flash_wait();
        FLASH->CR &= ~bit(0);
    }
}

[[gnu::always_inline]] inline void flash_random(uint32_t addr, uint32_t sz) noexcept {
    uint32_t n = sz >> 2;
    auto *p = reinterpret_cast<volatile uint32_t*>(addr);
    for (uint32_t i = 0; i < n; ++i) {
        uint32_t r = RNG->DR;
        flash_wait();
        FLASH->CR &= ~(mask(2) << 8);
        FLASH->CR |= (2UL << 8) | bit(0);
        p[i] = r;
        flash_wait();
        FLASH->CR &= ~bit(0);
    }
}

struct SectorDef {
    uint8_t  id;
    uint32_t addr;
    uint32_t size;
};
inline constexpr SectorDef SECTORS[SECTOR_CNT] = {
    {0, 0x08000000UL, 0x020000UL},
    {1, 0x08020000UL, 0x020000UL},
    {2, 0x08040000UL, 0x020000UL},
    {3, 0x08060000UL, 0x020000UL},
    {4, 0x08080000UL, 0x020000UL},
    {5, 0x080A0000UL, 0x020000UL},
    {6, 0x080C0000UL, 0x020000UL},
    {7, 0x080E0000UL, 0x020000UL},
};

[[gnu::always_inline]] inline void nist_destroy(uint32_t idx) noexcept {
    auto &s = SECTORS[idx];
    flash_erase_sector(idx);
    flash_fill(s.addr, s.size, 0x00000000UL);
    flash_fill(s.addr, s.size, 0xFFFFFFFFUL);
    flash_fill(s.addr, s.size, 0x55555555UL);
    flash_fill(s.addr, s.size, 0xAAAAAAAAUL);
    flash_fill(s.addr, s.size, 0x33333333UL);
    flash_fill(s.addr, s.size, 0xCCCCCCCCUL);
    flash_random(s.addr, s.size);
    flash_random(s.addr, s.size);
    flash_random(s.addr, s.size);
}

[[gnu::always_inline]] inline void fast_destroy(uint32_t idx) noexcept {
    auto &s = SECTORS[idx];
    flash_random(s.addr, s.size);
    flash_fill(s.addr, s.size, 0x00000000UL);
    flash_random(s.addr, s.size);
}

[[gnu::always_inline]] inline void rdp_set(RdpLevel l) noexcept {
    flash_wait();
    FLASH->OPTKEYR = 0x08192A3BUL;
    FLASH->OPTKEYR = 0x4C5D6E7FUL;
    uint32_t v = FLASH->OPTR;
    v &= ~(0xFFUL << 8);
    v |= static_cast<uint32_t>(l) << 8;
    FLASH->OPTR = v;
    FLASH->OPTCR |= bit(1);
    flash_wait();
    FLASH->OPTCR |= bit(2);
    while (1) asm volatile ("wfi");
}

[[gnu::always_inline]] inline void lock_otp_all() noexcept {
    for (uint32_t i = 0; i < 512; ++i) {
        BSEC->OTPWLOCKR = i;
    }
}

[[noreturn, gnu::always_inline]] inline void system_reset() noexcept {
    __asm volatile ("dsb 0xF" ::: "memory");
    SCB->AIRCR = 0x05FA0000UL | bit(2);
    __asm volatile ("dsb 0xF" ::: "memory");
    while (1) asm volatile ("nop");
}

}

namespace STM32V8::Ashes {

using namespace Reg;
using namespace Sec;

alignas(4) static uint8_t uart_buf[UART_MAGIC_LEN];
static uint32_t uart_ptr = 0;
static uint32_t trap_ts = 0;

[[gnu::always_inline]] static void uart_put(uint8_t c) noexcept {
    while (!(USART1->ISR & bit(7))) asm volatile ("nop");
    USART1->TDR = c;
}

[[gnu::always_inline]] static void uart_str(const char *s) noexcept {
    while (*s) uart_put(static_cast<uint8_t>(*s++));
}

[[gnu::always_inline]] static void uart_hex(uint32_t x) noexcept {
    char b[11] = "0x00000000";
    for (int i = 9; i >= 2; --i, x >>= 4) {
        uint8_t n = x & 0xF;
        b[i] = (n < 10) ? ('0' + n) : ('A' + n - 10);
    }
    uart_str(b);
}

[[gnu::always_inline]] static auto uart_feed(uint8_t c) noexcept -> bool {
    if (c == UART_MAGIC[uart_ptr]) {
        uart_buf[uart_ptr++] = c;
        if (uart_ptr == UART_MAGIC_LEN) {
            uart_ptr = 0;
            return true;
        }
    } else {
        uart_ptr = 0;
        if (c == UART_MAGIC[0]) uart_buf[uart_ptr++] = c;
    }
    return false;
}

[[gnu::always_inline]] static void trap_step() noexcept {
    uint32_t now = DWT->CYCCNT;
    if (trap_ts && (now - trap_ts) > (480000000UL / 50UL)) {
        RTC->BKP4R |= static_cast<uint32_t>(TriggerSource::Debug);
        bkp_sync();
        Protocol();
    }
    trap_ts = now;
}

[[noreturn]] void Protocol() noexcept {
    __asm volatile ("cpsid i" ::: "memory");
    for (uint32_t i = 0; i < 16; ++i) {
        NVIC->ICER[i] = 0xFFFFFFFFUL;
        NVIC->ICPR[i] = 0xFFFFFFFFUL;
    }
    SCB->SHCSR &= ~(bit(16)|bit(17)|bit(18)|bit(19));
    DWT->CTRL = 0;
    CoreDebug->DEMCR = 0;
    DBGMCU->CR = 0;
    DBGMCU->APB1FZR1 = 0;
    DBGMCU->APB1FZR2 = 0;
    DBGMCU->APB2FZR = 0;
    DBGMCU->APB3FZR = 0;
    DBGMCU->AHB1FZR = 0;
    DBGMCU->AHB2FZR = 0;
    DBGMCU->AHB3FZR = 0;
    __asm volatile ("dsb 0xF" ::: "memory");

    uart_str("\r\n[*] ARMv8M STM32V8\r\n");
    uart_str("[I] TRIG="); uart_hex(RTC->BKP4R); uart_str(" RETRY="); uart_hex(RTC->BKP3R); uart_str("\r\n");

    uint32_t retry = RTC->BKP3R;
    bool fast = retry > RETRY_FAST;
    if (fast) uart_str("[!] FAST DESTROY MODE\r\n");
    if (retry > RETRY_RDP2) uart_str("[!] RDP2 IMMINENT\r\n");
    if (retry > RETRY_LOCK) {
        uart_str("[!] OTP AND RDP2 FOREVER LOCK\r\n");
        lock_otp_all();
        rdp_set(RdpLevel::L2);
    }

    kill_peripherals();

    if (!flash_unlock()) {
        uart_str("[FATAL] FLASH UNLOCK FAIL -> RDP2\r\n");
        rdp_set(RdpLevel::L2);
    }

    for (uint32_t i = 0; i < SECTOR_CNT; ++i) {
        trap_step();
        if (RTC->BKP1R & bit(i)) {
            uart_str("[S] SKIP S"); uart_hex(i); uart_str("\r\n");
            continue;
        }
        uart_str("[>] S"); uart_hex(i); uart_str(" @"); uart_hex(SECTORS[i].addr);
        uart_str(" "); uart_hex(SECTORS[i].size); uart_str("B\r\n");
        if (fast) fast_destroy(i);
        else      nist_destroy(i);
        RTC->BKP1R |= bit(i);
        bkp_sync();
        uart_str("    [OK] BM="); uart_hex(RTC->BKP1R); uart_str("\r\n");
    }

    uart_str("[I] PURGE ALL RAM/CACHE/FIFO\r\n");
    purge_all_sram();

    uart_str("[I] FINAL RANDOM SWEEP 4MB FLASH\r\n");
    flash_random(FLASH_BASE, FLASH_SIZE);
    flash_fill(FLASH_BASE, FLASH_SIZE, 0x00000000UL);
    flash_random(FLASH_BASE, FLASH_SIZE);

    RTC->BKP2R = BKP_DONE;
    bkp_sync();
    flash_lock();

    uart_str("[DONE] IRRECOVERABLE. LOCK WITH RESET.\r\n");
    for (volatile uint32_t i = 0; i < 50000; ++i) asm volatile ("nop");
    rdp_set(RdpLevel::L2);
}

}