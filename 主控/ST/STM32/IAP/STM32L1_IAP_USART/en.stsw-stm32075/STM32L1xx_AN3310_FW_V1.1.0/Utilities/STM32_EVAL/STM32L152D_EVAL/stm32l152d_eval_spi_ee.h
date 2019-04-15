/**
  ******************************************************************************
  * @file    stm32l152d_eval_spi_ee.h
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    24-January-2012
  * @brief   This file contains all the functions prototypes for the stm32l152d_eval_spi_ee
  *          firmware driver.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * FOR MORE INFORMATION PLEASE READ CAREFULLY THE LICENSE AGREEMENT FILE
  * LOCATED IN THE ROOT DIRECTORY OF THIS FIRMWARE PACKAGE.
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32L152D_EVAL_SPI_EE_H
#define __STM32L152D_EVAL_SPI_EE_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l152d_eval.h"

/** @addtogroup Utilities
  * @{
  */
  
/** @addtogroup STM32_EVAL
  * @{
  */ 

/** @addtogroup STM32L152D_EVAL
  * @{
  */

/** @addtogroup STM32L152D_EVAL_SPI_EEPROM
  * @{
  */  

/** @defgroup STM32L152D_EVAL_SPI_EEPROM_Exported_Types
  * @{
  */ 
/**
  * @}
  */
  
/** @defgroup STM32L152D_EVAL_SPI_EEPROM_Exported_Constants
  * @{
  */
/**
  * @brief  M95 SPI EEPROM supported commands
  */  
#define sEE_CMD_WREN           0x06  /*!< Write enable instruction */
#define sEE_CMD_WRDI           0x04  /*!< Write disable instruction */
#define sEE_CMD_RDSR           0x05  /*!< Read Status Register instruction  */
#define sEE_CMD_WRSR           0x01  /*!< Write Status Register instruction */
#define sEE_CMD_WRITE          0x02  /*!< Write to Memory instruction */
#define sEE_CMD_READ           0x03  /*!< Read from Memory instruction */

/**
 * @brief  M95040 SPI EEPROM defines
 */  
#define sEE_WIP_FLAG           0x01  /*!< Write In Progress (WIP) flag */

#define sEE_DUMMY_BYTE         0xA5

#define sEE_PAGESIZE           16


  
/**
  * @}
  */ 
  
/** @defgroup STM32L152D_EVAL_SPI_EEPROM_Exported_Macros
  * @{
  */
/**
  * @brief  Select EEPROM: Chip Select pin low
  */
#define sEE_CS_LOW()       GPIO_ResetBits(sEE_SPI_CS_GPIO_PORT, sEE_SPI_CS_PIN)
/**
  * @brief  Deselect EEPROM: Chip Select pin high
  */
#define sEE_CS_HIGH()      GPIO_SetBits(sEE_SPI_CS_GPIO_PORT, sEE_SPI_CS_PIN)   
/**
  * @}
  */



/** @defgroup STM32L152D_EVAL_SPI_EEPROM_Exported_Functions
  * @{
  */
/**
  * @brief  High layer functions
  */
void     sEE_DeInit(void);
void     sEE_Init(void);
uint32_t sEE_ReadBuffer(uint8_t* pBuffer, uint16_t ReadAddr, uint16_t* NumByteToRead);
void     sEE_WriteBuffer(uint8_t* pBuffer, uint16_t WriteAddr, uint16_t NumByteToWrite);
uint32_t sEE_WritePage(uint8_t* pBuffer, uint16_t WriteAddr, uint16_t* NumByteToWrite);
uint32_t sEE_WaitEepromStandbyState(void);

/**
  * @brief  Low layer functions
  */
uint8_t sEE_ReadByte(void);
uint8_t sEE_SendByte(uint8_t byte);
void sEE_WriteEnable(void);
void sEE_WriteDisable(void);
void sEE_WriteStatusRegister(uint8_t regval);
uint8_t sEE_ReadStatusRegister(void);

#ifdef __cplusplus
}
#endif

#endif /* __STM32L152D_EVAL_SPI_EE_H */
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */ 

/**
  * @}
  */  

/******************* (C) COPYRIGHT 2012 STMicroelectronics *****END OF FILE****/
