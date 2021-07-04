/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Samsung Exynos SoC series dsp driver
 *
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com/
 */

#ifndef __HW_O1_DSP_HW_O1_DUMP_H__
#define __HW_O1_DSP_HW_O1_DUMP_H__

#include "hardware/dsp-dump.h"

enum dsp_dump_value {
	DSP_O1_DUMP_VALUE_MBOX_ERROR,
	DSP_O1_DUMP_VALUE_MBOX_DEBUG,
	DSP_O1_DUMP_VALUE_DL_LOG_ON,
	DSP_O1_DUMP_VALUE_DL_LOG_RESERVED,
	DSP_O1_DUMP_VALUE_SYSCTRL_S,
	DSP_O1_DUMP_VALUE_AAREG_S,
	DSP_O1_DUMP_VALUE_SYSCTRL_NS,
	DSP_O1_DUMP_VALUE_AAREG_NS,
	DSP_O1_DUMP_VALUE_WDT,
	DSP_O1_DUMP_VALUE_TIMER0,
	DSP_O1_DUMP_VALUE_TIMER1,
	DSP_O1_DUMP_VALUE_TIMER2,
	DSP_O1_DUMP_VALUE_C2AGENT0,
	DSP_O1_DUMP_VALUE_CPU_SS,
	DSP_O1_DUMP_VALUE_GIC,
	DSP_O1_DUMP_VALUE_VPD0_CTRL,
	DSP_O1_DUMP_VALUE_VPD1_CTRL,
	DSP_O1_DUMP_VALUE_SDMA_CM,
	DSP_O1_DUMP_VALUE_STRM_CM,
	DSP_O1_DUMP_VALUE_SDMA_ND,
	DSP_O1_DUMP_VALUE_DHCP,
	DSP_O1_DUMP_VALUE_USERDEFINED,
	DSP_O1_DUMP_VALUE_FW_INFO,
	DSP_O1_DUMP_VALUE_PC,
	DSP_O1_DUMP_VALUE_TASK_COUNT,
	DSP_O1_DUMP_VALUE_END,
};

#define DSP_O1_DUMP_DEFAULT_VALUE			\
	(1 << DSP_O1_DUMP_VALUE_MBOX_ERROR |		\
	 1 << DSP_O1_DUMP_VALUE_DL_LOG_ON |		\
	 1 << DSP_O1_DUMP_VALUE_SYSCTRL_S |		\
	 1 << DSP_O1_DUMP_VALUE_SYSCTRL_NS |		\
	 1 << DSP_O1_DUMP_VALUE_CPU_SS |		\
	 1 << DSP_O1_DUMP_VALUE_GIC |			\
	 1 << DSP_O1_DUMP_VALUE_VPD0_CTRL |		\
	 1 << DSP_O1_DUMP_VALUE_VPD1_CTRL |		\
	 1 << DSP_O1_DUMP_VALUE_DHCP |			\
	 1 << DSP_O1_DUMP_VALUE_USERDEFINED |		\
	 1 << DSP_O1_DUMP_VALUE_FW_INFO |		\
	 1 << DSP_O1_DUMP_VALUE_PC |			\
	 1 << DSP_O1_DUMP_VALUE_TASK_COUNT)

int dsp_hw_o1_dump_init(void);

#endif