/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _VAL_LOG_H_
#define _VAL_LOG_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <linux/kernel.h>
/* #include <linux/xlog.h> */


#define MFV_LOG_ERROR   /* error */
#ifdef MFV_LOG_ERROR
#define MODULE_MFV_PR_ERR(...) pr_err(__VA_ARGS__)
#else
#define MODULE_MFV_PR_ERR(...)
#endif

#define MFV_LOG_WARNING /* warning */
#ifdef MFV_LOG_WARNING
#define MODULE_MFV_PR_WARN(...) pr_warn(__VA_ARGS__)
#else
#define MODULE_MFV_PR_WARN(...)
#endif


#define MFV_LOG_DEBUG   /* debug information */
#ifdef MFV_LOG_DEBUG
#define MODULE_MFV_PR_DEBUG(...) pr_debug(__VA_ARGS__)
#else
#define MODULE_MFV_PR_DEBUG(...)
#endif

#define MFV_LOG_INFO   /* info information */
#ifdef MFV_LOG_INFO
#define MODULE_MFV_PR_INFO(...) pr_info(__VA_ARGS__)
#else
#define MODULE_MFV_PR_INFO(...)
#endif

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _VAL_LOG_H_ */
