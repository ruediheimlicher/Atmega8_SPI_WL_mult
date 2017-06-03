/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <joerg@FreeBSD.ORG> wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.        Joerg Wunsch
 * ----------------------------------------------------------------------------
 *
 * General stdiodemo defines
 *
 * $Id: defines.h,v 1.1.2.2 2006/10/08 21:51:14 joerg_wunsch Exp $
 */

/* CPU frequency */
//#define F_CPU 8000000UL

#define LOOP_CHANNEL 0


#define TEMPERATUR   1

#define ADC12BIT          2

#define TASK TEMPERATUR // 1: Temperatur

#define LOOPLED_PORT                         PORTD
#define LOOPLED_DDR                          DDRD
#define LOOPLED_PIN                          4


// Reset fuer PowerBank
#define PB_LOAD_DDR                              DDRB
#define PB_LOAD_PORT                             PORTB
#define PB_LOAD_PIN                              0


#define ADCPORT                                 PORTC
#define ADCDDR                                  DDRC

// PT1000
#define PT_PORT                                 PORTD
#define PT_DDR                                  DDRD
#define PT_LOAD_PIN                             7
#define PT_LO  PT_PORT &= ~(1<<PT_LOAD_PIN)
#define PT_HI  PT_PORT |= (1<<PT_LOAD_PIN)


//Oszi
#define OSZIPORT                             PORTB
#define OSZIDDR                              DDRB
#define PULSA                                6
#define OSZIA_LO OSZIPORT &= ~(1<<PULSA)
#define OSZIA_HI OSZIPORT |= (1<<PULSA)
#define OSZIA_TOGG OSZIPORT ^= (1<<PULSA)

//#define TEST_PIN                             5

#define SPI_DDR                              DDRB						// DDR fuer SPI
#define SPI_PORT                             PORTB						// Port fuer SPI
#define SPI_PORTPIN                          PINB						// Port-Pin fuer SPI

#define SPI_MOSI                             PB3
#define SPI_MISO                             PB4
#define SPI_CLK                              PB5
#define SPI_SS                               PB2

// SPI_ADC CE-PIN
#define SPI_ADC_CE_PORT                      PORTD
#define SPI_ADC_CE_DDR                       DDRD
#define SPI_ADC_CE                           PD7
#define ADC_BUFSIZE                          4
#define ADC_DELAY                            16

#define V_NEG_DDR                            DDRD
#define V_NEG_PORT                           PORTD
#define V_NEG_PIN                            6


// Port fuer INT1
#define INTERRUPT_PORT                       PORTD
#define INTERRUPT_DDR                        DDRD

//#define INT0_PIN                           PD2
#define INT1_PIN                             PD3

/*
#define BATTLO          7
#define BATTHI          8


#define ADC2LO          16	// ADC 0 lo
#define ADC2HI          17	// ADC 0 hi
#define ADC3LO          18	// ADC 1 lo
#define ADC3HI          19	// ADC 1 hi

#define ADC4LO          20	// ADC 0 lo
#define ADC4HI          21	// ADC 0 hi

// Digi
#define DIGI0         	28 	// Digi Eingang
#define DIGI1          	29    // Digi Eingang
#define DIGI2          	30    // Digi Eingang
#define DIGI3          	31    // Digi Eingang
*/

// Ports neu

#define COUNTER    0
#define TASKBYTE    1
#define CHANNEL    2
#define BATTLO    7
#define BATTHI    8


#define ADC0LO    8
#define ADC0HI    9
#define ADC1LO    10
#define ADC1HI    11
#define ADC2LO    12
#define ADC2HI    13
#define ADC3LO    14
#define ADC3HI    15
#define ADC4LO    16
#define ADC4HI    17


#define ADC12_0_LO    20
#define ADC12_0_HI    21
#define ADC12_1_LO    22
#define ADC12_1_HI    23
#define ADC12_2_LO    24
#define ADC12_2_HI    25
#define ADC12_3_LO    26
#define ADC12_3_HI    27
#define DIGI0    28
#define DIGI1    29
#define DIGI2    30
#define DIGI3    31

// Port fuer Chip select
#define SPI_WL_PORT                          PORTC
#define SPI_WL_DDR                           DDRC
#define SPI_WL_CE                            PC0
#define SPI_WL_CSN                           PC1

// Bits WL
#define WL_ISR_RECV                          7
#define WL_SEND_REQUEST                      6
#define WL_NEXT_REQUEST                      5

#define WL_DATA_PENDENT                      4
#define WL_DATA_WAIT                         3



// PWM-detect

#define PWMHI  1 // Bit fuer HI
#define PWM_DETECT_PORT                      PORTB
#define PWM_DETECT_DDR                       DDRB
#define PWM_DETECT_PIN                       PINB
#define PWM_DETECT                           7 // Pin fuer detect

#define PWM_DETECT_BIT     1 // bit fuer HI
