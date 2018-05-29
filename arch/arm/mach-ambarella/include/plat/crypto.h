/*
 * arch/arm/plat-ambarella/include/plat/crypto.h
 *
 * Author: Anthony Ginger <hfjiang@ambarella.com>
 *
 * Copyright (C) 2004-2010, Ambarella, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 */

#ifndef __PLAT_AMBARELLA_CRYPTO_H__
#define __PLAT_AMBARELLA_CRYPTO_H__

/* ==========================================================================*/
#define CRYPT_UNIT_OFFSET		0x20000
#define CRYPT_UNIT_BASE			(AXI_BASE + CRYPT_UNIT_OFFSET)

#define CRYPT_UNIT_REG(x)		(CRYPT_UNIT_BASE + (x))

#define DES_OFFSET(x)			(x)
#define AES_OFFSET(x)			((1 << 9) | (x))
#define SHA1_MD5_OFFSET(x)		((2 << 9) | (x))

#define DES_REG(x)			CRYPT_UNIT_REG(DES_OFFSET(x))
#define AES_REG(x)			CRYPT_UNIT_REG(AES_OFFSET(x))
#define SHA1_MD5_REG(x)			CRYPT_UNIT_REG(SHA1_MD5_OFFSET(x))

/* ==========================================================================*/

/* AES/DES */
#define CRYPT_D_HI_OFFSET			0x00
#define CRYPT_D_LO_OFFSET			0x04
#define CRYPT_D_INPUT_ENC_HI_OFFSET		0x08
#define CRYPT_D_INPUT_ENC_LO_OFFSET		0x0c
#define CRYPT_D_INPUT_DEC_HI_OFFSET		0x10
#define CRYPT_D_INPUT_DEC_LO_OFFSET		0x14
#define CRYPT_D_OUTPUT_HI_OFFSET		0x18
#define CRYPT_D_OUTPUT_LO_OFFSET		0x1c
#define CRYPT_D_OUTPUT_READY_OFFSET		0x20
#define CRYPT_D_INT_EN_OFFSET			0x28

#define CRYPT_A_256_224_OFFSET			0x00
#define CRYPT_A_256_192_OFFSET			0x04
#define CRYPT_A_256_160_OFFSET			0x08
#define CRYPT_A_256_128_OFFSET			0x0c
#define CRYPT_A_256_96_OFFSET			0x10
#define CRYPT_A_256_64_OFFSET			0x14
#define CRYPT_A_256_32_OFFSET			0x18
#define CRYPT_A_256_0_OFFSET			0x1c
#define CRYPT_A_192_160_OFFSET			0x20
#define CRYPT_A_192_128_OFFSET			0x24
#define CRYPT_A_192_96_OFFSET			0x28
#define CRYPT_A_192_64_OFFSET			0x2c
#define CRYPT_A_192_32_OFFSET			0x30
#define CRYPT_A_192_0_OFFSET			0x34
#define CRYPT_A_128_96_OFFSET			0x38
#define CRYPT_A_128_64_OFFSET			0x3c
#define CRYPT_A_128_32_OFFSET			0x40
#define CRYPT_A_128_0_OFFSET			0x44

#define CRYPT_A_INPUT_ENC_96_OFFSET		0x48
#define CRYPT_A_INPUT_ENC_64_OFFSET		0x4c
#define CRYPT_A_INPUT_ENC_32_OFFSET		0x50
#define CRYPT_A_INPUT_ENC_0_OFFSET		0x54
#define CRYPT_A_INPUT_DEC_96_OFFSET		0x58
#define CRYPT_A_INPUT_DEC_64_OFFSET		0x5c
#define CRYPT_A_INPUT_DEC_32_OFFSET		0x60
#define CRYPT_A_INPUT_DEC_0_OFFSET		0x64
#define CRYPT_A_OUTPUT_96_OFFSET		0x68
#define CRYPT_A_OUTPUT_64_OFFSET		0x6c
#define CRYPT_A_OUTPUT_32_OFFSET		0x70
#define CRYPT_A_OUTPUT_0_OFFSET			0x74
#define CRYPT_A_OUTPUT_READY_OFFSET		0x78
#define CRYPT_A_INT_EN_OFFSET			0x80

#define CRYPT_D_HI_REG				DES_REG(0x00)
#define CRYPT_D_LO_REG				DES_REG(0x04)
#define CRYPT_D_INPUT_ENC_HI_REG		DES_REG(0x08)
#define CRYPT_D_INPUT_ENC_LO_REG		DES_REG(0x0c)
#define CRYPT_D_INPUT_DEC_HI_REG		DES_REG(0x10)
#define CRYPT_D_INPUT_DEC_LO_REG		DES_REG(0x14)
#define CRYPT_D_OUTPUT_HI_REG			DES_REG(0x18)
#define CRYPT_D_OUTPUT_LO_REG			DES_REG(0x1c)
#define CRYPT_D_OUTPUT_READY_REG		DES_REG(0x20)
#define CRYPT_D_INT_EN_REG			DES_REG(0x28)

#define CRYPT_A_256_224_REG			AES_REG(0x00)
#define CRYPT_A_256_192_REG			AES_REG(0x04)
#define CRYPT_A_256_160_REG			AES_REG(0x08)
#define CRYPT_A_256_128_REG			AES_REG(0x0c)
#define CRYPT_A_256_96_REG			AES_REG(0x10)
#define CRYPT_A_256_64_REG			AES_REG(0x14)
#define CRYPT_A_256_32_REG			AES_REG(0x18)
#define CRYPT_A_256_0_REG			AES_REG(0x1c)
#define CRYPT_A_192_160_REG			AES_REG(0x20)
#define CRYPT_A_192_128_REG			AES_REG(0x24)
#define CRYPT_A_192_96_REG			AES_REG(0x28)
#define CRYPT_A_192_64_REG			AES_REG(0x2c)
#define CRYPT_A_192_32_REG			AES_REG(0x30)
#define CRYPT_A_192_0_REG			AES_REG(0x34)
#define CRYPT_A_128_96_REG			AES_REG(0x38)
#define CRYPT_A_128_64_REG			AES_REG(0x3c)
#define CRYPT_A_128_32_REG			AES_REG(0x40)
#define CRYPT_A_128_0_REG			AES_REG(0x44)

#define CRYPT_A_INPUT_ENC_96_REG		AES_REG(0x48)
#define CRYPT_A_INPUT_ENC_64_REG		AES_REG(0x4c)
#define CRYPT_A_INPUT_ENC_32_REG		AES_REG(0x50)
#define CRYPT_A_INPUT_ENC_0_REG			AES_REG(0x54)
#define CRYPT_A_INPUT_DEC_96_REG		AES_REG(0x58)
#define CRYPT_A_INPUT_DEC_64_REG		AES_REG(0x5c)
#define CRYPT_A_INPUT_DEC_32_REG		AES_REG(0x60)
#define CRYPT_A_INPUT_DEC_0_REG			AES_REG(0x64)
#define CRYPT_A_OUTPUT_96_REG			AES_REG(0x68)
#define CRYPT_A_OUTPUT_64_REG			AES_REG(0x6c)
#define CRYPT_A_OUTPUT_32_REG			AES_REG(0x70)
#define CRYPT_A_OUTPUT_0_REG			AES_REG(0x74)
#define CRYPT_A_OUTPUT_READY_REG		AES_REG(0x78)
#define CRYPT_A_INT_EN_REG			AES_REG(0x80)

/* ==========================================================================*/

/* SHA1/MD5 */

#define CRYPT_SHA1_INIT_31_0_OFFSET		SHA1_MD5_OFFSET(0x0)
#define CRYPT_SHA1_INIT_63_32_OFFSET		SHA1_MD5_OFFSET(0x4)
#define CRYPT_SHA1_INIT_95_64_OFFSET		SHA1_MD5_OFFSET(0x8)
#define CRYPT_SHA1_INIT_127_96_OFFSET		SHA1_MD5_OFFSET(0xc)
#define CRYPT_SHA1_INIT_159_128_OFFSET		SHA1_MD5_OFFSET(0x10)
#define CRYPT_SHA1_INPUT_31_0_OFFSET		SHA1_MD5_OFFSET(0x18)
#define CRYPT_SHA1_INPUT_63_32_OFFSET		SHA1_MD5_OFFSET(0x1c)
#define CRYPT_SHA1_INPUT_95_64_OFFSET		SHA1_MD5_OFFSET(0x20)
#define CRYPT_SHA1_INPUT_127_96_OFFSET		SHA1_MD5_OFFSET(0x24)
#define CRYPT_SHA1_INPUT_159_128_OFFSET		SHA1_MD5_OFFSET(0x28)
#define CRYPT_SHA1_INPUT_191_160_OFFSET		SHA1_MD5_OFFSET(0x2c)
#define CRYPT_SHA1_INPUT_223_192_OFFSET		SHA1_MD5_OFFSET(0x30)
#define CRYPT_SHA1_INPUT_255_224_OFFSET		SHA1_MD5_OFFSET(0x34)
#define CRYPT_SHA1_INPUT_287_256_OFFSET		SHA1_MD5_OFFSET(0x38)
#define CRYPT_SHA1_INPUT_319_288_OFFSET		SHA1_MD5_OFFSET(0x3c)
#define CRYPT_SHA1_INPUT_351_320_OFFSET		SHA1_MD5_OFFSET(0x40)
#define CRYPT_SHA1_INPUT_383_352_OFFSET		SHA1_MD5_OFFSET(0x44)
#define CRYPT_SHA1_INPUT_415_384_OFFSET		SHA1_MD5_OFFSET(0x48)
#define CRYPT_SHA1_INPUT_447_416_OFFSET		SHA1_MD5_OFFSET(0x4c)
#define CRYPT_SHA1_INPUT_479_448_OFFSET		SHA1_MD5_OFFSET(0x50)
#define CRYPT_SHA1_INPUT_511_480_OFFSET		SHA1_MD5_OFFSET(0x54)
#define CRYPT_SHA1_OUTPUT_31_0_OFFSET		SHA1_MD5_OFFSET(0x58)
#define CRYPT_SHA1_OUTPUT_63_32_OFFSET		SHA1_MD5_OFFSET(0x5c)
#define CRYPT_SHA1_OUTPUT_95_64_OFFSET		SHA1_MD5_OFFSET(0x60)
#define CRYPT_SHA1_OUTPUT_127_96_OFFSET		SHA1_MD5_OFFSET(0x64)
#define CRYPT_SHA1_OUTPUT_159_128_OFFSET	SHA1_MD5_OFFSET(0x68)
#define CRYPT_SHA1_OUTPUT_READY_OFFSET		SHA1_MD5_OFFSET(0x70)
#define CRYPT_SHA1_INT_EN_OFFSET		SHA1_MD5_OFFSET(0x78)
#define CRYPT_MD5_INIT_31_0_OFFSET		SHA1_MD5_OFFSET(0x80)
#define CRYPT_MD5_INIT_63_32_OFFSET		SHA1_MD5_OFFSET(0x84)
#define CRYPT_MD5_INIT_95_64_OFFSET		SHA1_MD5_OFFSET(0x88)
#define CRYPT_MD5_INIT_127_96_OFFSET		SHA1_MD5_OFFSET(0x8c)
#define CRYPT_MD5_INPUT_31_0_OFFSET		SHA1_MD5_OFFSET(0x90)
#define CRYPT_MD5_INPUT_63_32_OFFSET		SHA1_MD5_OFFSET(0x94)
#define CRYPT_MD5_INPUT_95_64_OFFSET		SHA1_MD5_OFFSET(0x98)
#define CRYPT_MD5_INPUT_127_96_OFFSET		SHA1_MD5_OFFSET(0x9c)
#define CRYPT_MD5_INPUT_159_128_OFFSET		SHA1_MD5_OFFSET(0xa0)
#define CRYPT_MD5_INPUT_191_160_OFFSET		SHA1_MD5_OFFSET(0xa4)
#define CRYPT_MD5_INPUT_223_192_OFFSET		SHA1_MD5_OFFSET(0xa8)
#define CRYPT_MD5_INPUT_255_224_OFFSET		SHA1_MD5_OFFSET(0xac)
#define CRYPT_MD5_INPUT_287_256_OFFSET		SHA1_MD5_OFFSET(0xb0)
#define CRYPT_MD5_INPUT_319_288_OFFSET		SHA1_MD5_OFFSET(0xb4)
#define CRYPT_MD5_INPUT_351_320_OFFSET		SHA1_MD5_OFFSET(0xb8)
#define CRYPT_MD5_INPUT_383_352_OFFSET		SHA1_MD5_OFFSET(0xbc)
#define CRYPT_MD5_INPUT_415_384_OFFSET		SHA1_MD5_OFFSET(0xc0)
#define CRYPT_MD5_INPUT_447_416_OFFSET		SHA1_MD5_OFFSET(0xc4)
#define CRYPT_MD5_INPUT_479_448_OFFSET		SHA1_MD5_OFFSET(0xc8)
#define CRYPT_MD5_INPUT_511_480_OFFSET		SHA1_MD5_OFFSET(0xcc)
#define CRYPT_MD5_OUTPUT_31_0_OFFSET		SHA1_MD5_OFFSET(0xd0)
#define CRYPT_MD5_OUTPUT_63_32_OFFSET		SHA1_MD5_OFFSET(0xd4)
#define CRYPT_MD5_OUTPUT_95_64_OFFSET		SHA1_MD5_OFFSET(0xd8)
#define CRYPT_MD5_OUTPUT_127_96_OFFSET		SHA1_MD5_OFFSET(0xdc)
#define CRYPT_MD5_OUTPUT_READY_OFFSET		SHA1_MD5_OFFSET(0xe0)
#define CRYPT_MD5_INT_EN_OFFSET			SHA1_MD5_OFFSET(0xe8)
#define CRYPT_MD5_SHA1_READY_INPUT_OFFSET	SHA1_MD5_OFFSET(0xf0)

#define CRYPT_SHA1_INIT_31_0_REG		SHA1_MD5_REG(0x0)
#define CRYPT_SHA1_INIT_63_32_REG		SHA1_MD5_REG(0x4)
#define CRYPT_SHA1_INIT_95_64_REG		SHA1_MD5_REG(0x8)
#define CRYPT_SHA1_INIT_127_96_REG		SHA1_MD5_REG(0xc)
#define CRYPT_SHA1_INIT_159_128_REG		SHA1_MD5_REG(0x10)
#define CRYPT_SHA1_INPUT_31_0_REG		SHA1_MD5_REG(0x18)
#define CRYPT_SHA1_INPUT_63_32_REG		SHA1_MD5_REG(0x1c)
#define CRYPT_SHA1_INPUT_95_64_REG		SHA1_MD5_REG(0x20)
#define CRYPT_SHA1_INPUT_127_96_REG		SHA1_MD5_REG(0x24)
#define CRYPT_SHA1_INPUT_159_128_REG		SHA1_MD5_REG(0x28)
#define CRYPT_SHA1_INPUT_191_160_REG		SHA1_MD5_REG(0x2c)
#define CRYPT_SHA1_INPUT_223_192_REG		SHA1_MD5_REG(0x30)
#define CRYPT_SHA1_INPUT_255_224_REG		SHA1_MD5_REG(0x34)
#define CRYPT_SHA1_INPUT_287_256_REG		SHA1_MD5_REG(0x38)
#define CRYPT_SHA1_INPUT_319_288_REG		SHA1_MD5_REG(0x3c)
#define CRYPT_SHA1_INPUT_351_320_REG		SHA1_MD5_REG(0x40)
#define CRYPT_SHA1_INPUT_383_352_REG		SHA1_MD5_REG(0x44)
#define CRYPT_SHA1_INPUT_415_384_REG		SHA1_MD5_REG(0x48)
#define CRYPT_SHA1_INPUT_447_416_REG		SHA1_MD5_REG(0x4c)
#define CRYPT_SHA1_INPUT_479_448_REG		SHA1_MD5_REG(0x50)
#define CRYPT_SHA1_INPUT_511_480_REG		SHA1_MD5_REG(0x54)
#define CRYPT_SHA1_OUTPUT_31_0_REG		SHA1_MD5_REG(0x58)
#define CRYPT_SHA1_OUTPUT_63_32_REG		SHA1_MD5_REG(0x5c)
#define CRYPT_SHA1_OUTPUT_95_64_REG		SHA1_MD5_REG(0x60)
#define CRYPT_SHA1_OUTPUT_127_96_REG		SHA1_MD5_REG(0x64)
#define CRYPT_SHA1_OUTPUT_159_128_REG		SHA1_MD5_REG(0x68)
#define CRYPT_SHA1_OUTPUT_READY_REG		SHA1_MD5_REG(0x70)
#define CRYPT_SHA1_INT_EN_REG			SHA1_MD5_REG(0x78)
#define CRYPT_MD5_INIT_31_0_REG			SHA1_MD5_REG(0x80)
#define CRYPT_MD5_INIT_63_32_REG		SHA1_MD5_REG(0x84)
#define CRYPT_MD5_INIT_95_64_REG		SHA1_MD5_REG(0x88)
#define CRYPT_MD5_INIT_127_96_REG		SHA1_MD5_REG(0x8c)
#define CRYPT_MD5_INPUT_31_0_REG		SHA1_MD5_REG(0x90)
#define CRYPT_MD5_INPUT_63_32_REG		SHA1_MD5_REG(0x94)
#define CRYPT_MD5_INPUT_95_64_REG		SHA1_MD5_REG(0x98)
#define CRYPT_MD5_INPUT_127_96_REG		SHA1_MD5_REG(0x9c)
#define CRYPT_MD5_INPUT_159_128_REG		SHA1_MD5_REG(0xa0)
#define CRYPT_MD5_INPUT_191_160_REG		SHA1_MD5_REG(0xa4)
#define CRYPT_MD5_INPUT_223_192_REG		SHA1_MD5_REG(0xa8)
#define CRYPT_MD5_INPUT_255_224_REG		SHA1_MD5_REG(0xac)
#define CRYPT_MD5_INPUT_287_256_REG		SHA1_MD5_REG(0xb0)
#define CRYPT_MD5_INPUT_319_288_REG		SHA1_MD5_REG(0xb4)
#define CRYPT_MD5_INPUT_351_320_REG		SHA1_MD5_REG(0xb8)
#define CRYPT_MD5_INPUT_383_352_REG		SHA1_MD5_REG(0xbc)
#define CRYPT_MD5_INPUT_415_384_REG		SHA1_MD5_REG(0xc0)
#define CRYPT_MD5_INPUT_447_416_REG		SHA1_MD5_REG(0xc4)
#define CRYPT_MD5_INPUT_479_448_REG		SHA1_MD5_REG(0xc8)
#define CRYPT_MD5_INPUT_511_480_REG		SHA1_MD5_REG(0xcc)
#define CRYPT_MD5_OUTPUT_31_0_REG		SHA1_MD5_REG(0xd0)
#define CRYPT_MD5_OUTPUT_63_32_REG		SHA1_MD5_REG(0xd4)
#define CRYPT_MD5_OUTPUT_95_64_REG		SHA1_MD5_REG(0xd8)
#define CRYPT_MD5_OUTPUT_127_96_REG		SHA1_MD5_REG(0xdc)
#define CRYPT_MD5_OUTPUT_READY_REG		SHA1_MD5_REG(0xe0)
#define CRYPT_MD5_INT_EN_REG			SHA1_MD5_REG(0xe8)
#define CRYPT_MD5_SHA1_READY_INPUT_REG		SHA1_MD5_REG(0xf0)

/* ==========================================================================*/
#define AMBARELLA_CRYPTO_ALIGNMENT	(16)
#define AMBARELLA_CRA_PRIORITY		(300)
#define AMBARELLA_COMPOSITE_PRIORITY	(400)

#define AMBA_HW_ENCRYPT_CMD		(0)
#define AMBA_HW_DECRYPT_CMD		(1)

/* ==========================================================================*/
#ifndef __ASSEMBLER__

#define	CRYPT_A_INPUT1			CRYPT_A_INPUT_ENC_96_REG
#define	CRYPT_A_INPUT2			CRYPT_A_INPUT_DEC_96_REG
#define	CRYPT_A_OPCODE			NULL
#define	CRYPT_D_INPUT1			CRYPT_D_INPUT_ENC_HI_REG
#define	CRYPT_D_INPUT2			CRYPT_D_INPUT_DEC_HI_REG
#define	CRYPT_D_OPCODE			NULL

#define	CRYPT_MD5_SHA1_READY_INPUT	CRYPT_MD5_SHA1_READY_INPUT_REG
#define	CRYPT_MD5_INIT_31_0		CRYPT_MD5_INIT_31_0_REG
#define	CRYPT_MD5_INPUT_31_0		CRYPT_MD5_INPUT_31_0_REG
#define	CRYPT_MD5_OUTPUT_READY		CRYPT_MD5_OUTPUT_READY_REG
#define	CRYPT_MD5_OUTPUT_31_0		CRYPT_MD5_OUTPUT_31_0_REG
#define	CRYPT_SHA1_INIT_31_0		CRYPT_SHA1_INIT_31_0_REG
#define	CRYPT_SHA1_INPUT_31_0		CRYPT_SHA1_INPUT_31_0_REG
#define	CRYPT_SHA1_OUTPUT_READY		CRYPT_SHA1_OUTPUT_READY_REG
#define	CRYPT_SHA1_OUTPUT_31_0		CRYPT_SHA1_OUTPUT_31_0_REG
#define	CRYPT_MD5_INT_EN		CRYPT_MD5_INT_EN_REG
#define	CRYPT_SHA1_INT_EN		CRYPT_SHA1_INT_EN_REG

#define INDEPENDENT_MD5 1

typedef struct md5_digest_s
{
	u32 digest_0;
	u32 digest_32;

	u32 digest_64;
	u32 digest_96;

	u32 digest_128;
	u32 digest_160;

	u32 digest_192;
	u32 digest_224;

	u32 digest_256;
	u32 digest_288;

	u32 digest_320;
	u32 digest_352;

	u32 digest_384;
	u32 digest_416;

	u32 digest_448;
	u32 digest_480;
} md5_digest_t;

typedef struct md5_data_s
{
	u32 data[16];
} md5_data_t;

typedef struct sha1_digest_s
{
	u32 digest_0;
	u32 digest_32;
	u32 digest_64;
	u32 digest_96;
	u32 digest_128;
	u32 digest_padding;

} sha1_digest_t;

typedef struct sha1_data_s
{
	u32 data[16];
} sha1_data_t;

#endif /* __ASSEMBLER__ */
/* ==========================================================================*/

#endif

