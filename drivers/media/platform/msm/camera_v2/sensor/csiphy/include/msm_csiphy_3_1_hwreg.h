/* Copyright (c) 2014-2015, The Linux Foundation. All rights reserved. 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef MSM_CSIPHY_3_1_HWREG_H
#define MSM_CSIPHY_3_1_HWREG_H

#include <sensor/csiphy/msm_csiphy.h>

#define MIPI_CSIPHY_GLBL_PWG_CFG0_OFFSET    0x1FC

struct csiphy_reg_parms_t csiphy_v3_1 = {
	/*MIPI CSI PHY registers*/
	0x0,
	0x4,
	0x8,
	0xC,
	0x10,
	0x100,
	0x104,
	0x108,
	0x10C,
	0x1C,
	0x28,
	0x140,
	0x144,
	0x164,
	0x188,
	0x18C,
	0x1AC,
	0x3F,
	0x1AC,
	0x1CC,
	0x1CC,
	0x4,
	0x1EC,
	0x1F4,
	0x31,
};
#endif
