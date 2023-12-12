/*
 * irq-rtd13xx.h - RTK irq mux driver header file
 *
 * Copyright (C) 2017 Realtek Semiconductor Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef IRQ_RTD13xx_H_
#define IRQ_RTD13xx_H_

#define IRQ_INMUX 32

enum misc_int_en {
	MISC_INT_FAIL = 0xFF,
	MISC_INT_RVD = 0xFE,
	MISC_INT_EN_FAN = 29,
	MISC_INT_EN_I2C3 = 28,
	MISC_INT_EN_SPI = 27,
	MISC_INT_EN_SC1 = 25,
	MISC_INT_EN_SC0 = 24,
	MISC_INT_EN_I2C5 = 14,
	MISC_INT_EN_RTC_DATE = 12,
	MISC_INT_EN_RTC_HOUR = 11,
	MISC_INT_EN_RTC_MIN = 10,
	MISC_INT_EN_UR2 = 7,
	MISC_INT_EN_UR2_TO = 6,
	MISC_INT_EN_UR1_TO = 5,
	MISC_INT_EN_UR1 = 3,
	MISC_INT_EN_WDOG_NMI = 2,
};

enum iso_int_en {
	ISO_INT_FAIL = 0xFF,
	ISO_INT_RVD = 0xFE,
	ISO_INT_EN_I2C1_REQ = 31,
	ISO_INT_EN_GPHY_AV = 30,
	ISO_INT_EN_GPHY_DV = 29,
	ISO_INT_EN_GPHY_HV = 28,
	ISO_INT_EN_GPIODA = 20,
	ISO_INT_EN_GPIOA = 19,
	ISO_INT_EN_RTC_ALARM = 13,
	ISO_INT_EN_RTC_HSEC = 12,
	ISO_INT_EN_I2C1 = 11,
	ISO_INT_EN_I2C0 = 8,
	ISO_INT_EN_IRDA = 5,
	ISO_INT_EN_LSADC0 = 3,
	ISO_INT_EN_UR0 = 2,
	ISO_INT_EN_SPI1 = 1,
};

const unsigned char irq_map_tab[2][IRQ_INMUX] = {
	{
	MISC_INT_RVD, /* Bit0 */
	MISC_INT_RVD, /* Bit1 */
	MISC_INT_EN_WDOG_NMI, /* Bit2 */
	MISC_INT_EN_UR1, /* Bit3 */
	MISC_INT_RVD, /* Bit4 */
	MISC_INT_EN_UR1_TO, /* Bit5 */
	MISC_INT_EN_UR2_TO, /* Bit6 */
	MISC_INT_EN_UR2, /* Bit7 */
	MISC_INT_RVD, /* Bit8 */
	MISC_INT_RVD, /* Bit9 */
	MISC_INT_EN_RTC_MIN, /* Bit10 */
	MISC_INT_EN_RTC_HOUR, /* Bit11 */
	MISC_INT_EN_RTC_DATE, /* Bit12 */
	MISC_INT_RVD, /* Bit13 */
	MISC_INT_EN_I2C5, /* Bit14 */
	MISC_INT_RVD, /* Bit15 */
	MISC_INT_RVD, /* Bit16 */
	MISC_INT_RVD, /* Bit17 */
	MISC_INT_RVD, /* Bit18 */
	MISC_INT_RVD, /* Bit19 */
	MISC_INT_RVD, /* Bit20 */
	MISC_INT_RVD, /* Bit21 */
	MISC_INT_RVD, /* Bit22 */
	MISC_INT_EN_I2C3, /* Bit23 */
	MISC_INT_EN_SC0, /* Bit24 */
	MISC_INT_EN_SC1, /* Bit25 */
	MISC_INT_RVD, /* Bit26 */
	MISC_INT_EN_SPI, /* Bit27 */
	MISC_INT_RVD, /* Bit28 */
	MISC_INT_EN_FAN, /* Bit29 */
	MISC_INT_RVD, /* Bit30 */
	MISC_INT_RVD, /* Bit31 */
	},
	{
	ISO_INT_RVD, /* Bit0 */
	ISO_INT_EN_SPI1, /* Bit1 */
	ISO_INT_EN_UR0,	/* Bit2 */
	ISO_INT_EN_LSADC0, /* Bit3 */
	ISO_INT_RVD, /* Bit4 */
	ISO_INT_EN_IRDA, /* Bit5 */
	ISO_INT_RVD, /* Bit6 */
	ISO_INT_RVD, /* Bit7 */
	ISO_INT_EN_I2C0, /* Bit8 */
	ISO_INT_RVD, /* Bit9 */
	ISO_INT_RVD, /* Bit10 */
	ISO_INT_EN_I2C1, /* Bit11 */
	ISO_INT_EN_RTC_HSEC, /* Bit12 */
	ISO_INT_EN_RTC_ALARM, /* Bit13 */
	ISO_INT_RVD, /* Bit14 */
	ISO_INT_RVD, /* Bit15 */
	ISO_INT_RVD, /* Bit16 */
	ISO_INT_RVD, /* Bit17 */
	ISO_INT_RVD, /* Bit18 */
	ISO_INT_EN_GPIOA, /* Bit19 */
	ISO_INT_EN_GPIODA, /* Bit20 */
	ISO_INT_RVD, /* Bit21 */
	ISO_INT_RVD, /* Bit22 */
	ISO_INT_RVD, /* Bit23 */
	ISO_INT_RVD, /* Bit24 */
	ISO_INT_RVD, /* Bit25 */
	ISO_INT_RVD, /* Bit26 */
	ISO_INT_RVD, /* Bit27 */
	ISO_INT_EN_GPHY_HV, /* Bit28 */
	ISO_INT_EN_GPHY_DV, /* Bit29 */
	ISO_INT_EN_GPHY_AV, /* Bit30 */
	ISO_INT_EN_I2C1_REQ, /* Bit31 */
	}
};

#endif /* IRQ_RTD13xx_H_ */
