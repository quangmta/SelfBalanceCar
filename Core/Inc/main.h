/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DIR1_Pin GPIO_PIN_14
#define DIR1_GPIO_Port GPIOC
#define STEP1_Pin GPIO_PIN_15
#define STEP1_GPIO_Port GPIOC
#define MS31_Pin GPIO_PIN_0
#define MS31_GPIO_Port GPIOA
#define MS21_Pin GPIO_PIN_1
#define MS21_GPIO_Port GPIOA
#define MS11_Pin GPIO_PIN_2
#define MS11_GPIO_Port GPIOA
#define DIR2_Pin GPIO_PIN_3
#define DIR2_GPIO_Port GPIOA
#define STEP2_Pin GPIO_PIN_4
#define STEP2_GPIO_Port GPIOA
#define MS32_Pin GPIO_PIN_5
#define MS32_GPIO_Port GPIOA
#define MS22_Pin GPIO_PIN_6
#define MS22_GPIO_Port GPIOA
#define MS12_Pin GPIO_PIN_7
#define MS12_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
