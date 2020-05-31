/***********************************************************************************
 * File              :TS_SysMng_Adc.h
 *
 * Title             :
 *
 * Author            :Tarik SEMRADE
 *
 * Created on        :Mar 19, 2020
 *
 * Version           :
 *
 * Description       :
 *
 * Copyright (c) 2020 Tarik SEMRADE
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 **********************************************************************************/
#ifndef TS_SYSMNG_INC_TS_SYSMNG_ADC_H_
#define TS_SYSMNG_INC_TS_SYSMNG_ADC_H_

/**********************************************************************************
 *  Included Files
 *
 *********************************************************************************/

/***********************************************************************************
 * Function prototypes
 *
 ***********************************************************************************/
void TS_SysMng_AdcConfig (void);
interrupt void TS_SysMng_Adca1ISR(void);

#endif /* TS_SYSMNG_INC_TS_SYSMNG_ADC_H_ */
