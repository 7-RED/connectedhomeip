/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#pragma once

#include "AppConfig.h"
#include "board_features.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_STR_LEN 48

void initLCD(void);
void * LCDContext();
int LCD_clear(void * pContext);
int LCD_drawPixel(void * pContext, int32_t x, int32_t y);
int LCD_update(void);
void LCDWriteQRCode(uint8_t * text);

#ifdef __cplusplus
}
#endif
