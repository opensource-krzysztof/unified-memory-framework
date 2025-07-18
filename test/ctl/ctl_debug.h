/*
 *
 * Copyright (C) 2024-2025 Intel Corporation
 *
 * Under the Apache License v2.0 with LLVM Exceptions. See LICENSE.TXT.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 */

/*
 * ctl_debug.h -- definitions for CTL tests
 */

#ifndef UMF_TEST_CTL_DEBUG_H
#define UMF_TEST_CTL_DEBUG_H 1

#include "ctl/ctl_internal.h"

#ifdef __cplusplus
extern "C" {
#endif

void debug_ctl_register(struct ctl *ctl);
struct ctl *get_debug_ctl(void);
void initialize_debug_ctl(void);
void deinitialize_debug_ctl(void);

#ifdef __cplusplus
}
#endif

#endif /* UMF_TEST_CTL_DEBUG_H */
