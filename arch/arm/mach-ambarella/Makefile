#
# arch/arm/mach-ambarella/Makefile
#
# Author: Anthony Ginger <hfjiang@ambarella.com>
#
# Copyright (C) 2004-2011, Ambarella, Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
#

obj-y						+= fio.o
obj-y						+= clk.o
obj-y						+= pll.o

obj-y						+= soc/
obj-y						+= smp/
obj-y						+= misc/

ifeq ($(CONFIG_PLAT_AMBARELLA_AMBALINK), y)
obj-y						+= ambalink/
else
obj-$(CONFIG_PLAT_AMBARELLA_SUPPORT_PM)		+= pm.o
obj-$(CONFIG_PLAT_AMBARELLA_SUPPORT_PM)		+= sleep.o
obj-y						+= init.o
obj-y						+= adc.o
endif

ifeq ($(CONFIG_PLAT_AMBARELLA_BOSS), y)
obj-y						+= boss/
else
obj-y						+= timer.o
endif
obj-y						+= test/
