/*
 * Copyright (c) 2019, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */
#include "flash_layout.h"

/* Enumeration that is used by the assemble.py and imgtool.py scripts
 * for correct binary generation when nested macros are used
 */
enum image_attributes
{
  RE_SECURE_IMAGE_OFFSET = SECURE_IMAGE_OFFSET,
  RE_SECURE_IMAGE_MAX_SIZE = SECURE_IMAGE_MAX_SIZE,
  RE_NON_SECURE_IMAGE_OFFSET = NON_SECURE_IMAGE_OFFSET,
  RE_NON_SECURE_IMAGE_MAX_SIZE = NON_SECURE_IMAGE_MAX_SIZE,
  RE_SIGN_BIN_SIZE = FLASH_AREA_0_SIZE,
};
