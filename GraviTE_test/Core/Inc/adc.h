#ifndef __ADC_H__
#define __ADC_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

extern ADC_HandleTypeDef hadc1;

extern ADC_HandleTypeDef hadc3;

void MX_ADC1_Init(void);
void MX_ADC3_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __ADC_H__ */

