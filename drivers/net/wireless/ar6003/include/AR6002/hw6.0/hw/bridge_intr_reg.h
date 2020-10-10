// ------------------------------------------------------------------
// Copyright (c) 2004-2007 Atheros Corporation.  All rights reserved.
// 
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
// WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
// ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
// OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//
//
// ------------------------------------------------------------------
//===================================================================
// Author(s): ="Atheros"
//===================================================================


#ifndef _BRIDGE_INTR_REG_REG_H_
#define _BRIDGE_INTR_REG_REG_H_

#define INTERRUPT_ADDRESS                        0x00000000
#define INTERRUPT_OFFSET                         0x00000000
#define INTERRUPT_TX_7_END_MSB                   31
#define INTERRUPT_TX_7_END_LSB                   31
#define INTERRUPT_TX_7_END_MASK                  0x80000000
#define INTERRUPT_TX_7_END_GET(x)                (((x) & INTERRUPT_TX_7_END_MASK) >> INTERRUPT_TX_7_END_LSB)
#define INTERRUPT_TX_7_END_SET(x)                (((x) << INTERRUPT_TX_7_END_LSB) & INTERRUPT_TX_7_END_MASK)
#define INTERRUPT_TX_6_END_MSB                   30
#define INTERRUPT_TX_6_END_LSB                   30
#define INTERRUPT_TX_6_END_MASK                  0x40000000
#define INTERRUPT_TX_6_END_GET(x)                (((x) & INTERRUPT_TX_6_END_MASK) >> INTERRUPT_TX_6_END_LSB)
#define INTERRUPT_TX_6_END_SET(x)                (((x) << INTERRUPT_TX_6_END_LSB) & INTERRUPT_TX_6_END_MASK)
#define INTERRUPT_TX_5_END_MSB                   29
#define INTERRUPT_TX_5_END_LSB                   29
#define INTERRUPT_TX_5_END_MASK                  0x20000000
#define INTERRUPT_TX_5_END_GET(x)                (((x) & INTERRUPT_TX_5_END_MASK) >> INTERRUPT_TX_5_END_LSB)
#define INTERRUPT_TX_5_END_SET(x)                (((x) << INTERRUPT_TX_5_END_LSB) & INTERRUPT_TX_5_END_MASK)
#define INTERRUPT_TX_4_END_MSB                   28
#define INTERRUPT_TX_4_END_LSB                   28
#define INTERRUPT_TX_4_END_MASK                  0x10000000
#define INTERRUPT_TX_4_END_GET(x)                (((x) & INTERRUPT_TX_4_END_MASK) >> INTERRUPT_TX_4_END_LSB)
#define INTERRUPT_TX_4_END_SET(x)                (((x) << INTERRUPT_TX_4_END_LSB) & INTERRUPT_TX_4_END_MASK)
#define INTERRUPT_TX_3_END_MSB                   27
#define INTERRUPT_TX_3_END_LSB                   27
#define INTERRUPT_TX_3_END_MASK                  0x08000000
#define INTERRUPT_TX_3_END_GET(x)                (((x) & INTERRUPT_TX_3_END_MASK) >> INTERRUPT_TX_3_END_LSB)
#define INTERRUPT_TX_3_END_SET(x)                (((x) << INTERRUPT_TX_3_END_LSB) & INTERRUPT_TX_3_END_MASK)
#define INTERRUPT_TX_2_END_MSB                   26
#define INTERRUPT_TX_2_END_LSB                   26
#define INTERRUPT_TX_2_END_MASK                  0x04000000
#define INTERRUPT_TX_2_END_GET(x)                (((x) & INTERRUPT_TX_2_END_MASK) >> INTERRUPT_TX_2_END_LSB)
#define INTERRUPT_TX_2_END_SET(x)                (((x) << INTERRUPT_TX_2_END_LSB) & INTERRUPT_TX_2_END_MASK)
#define INTERRUPT_TX_1_END_MSB                   25
#define INTERRUPT_TX_1_END_LSB                   25
#define INTERRUPT_TX_1_END_MASK                  0x02000000
#define INTERRUPT_TX_1_END_GET(x)                (((x) & INTERRUPT_TX_1_END_MASK) >> INTERRUPT_TX_1_END_LSB)
#define INTERRUPT_TX_1_END_SET(x)                (((x) << INTERRUPT_TX_1_END_LSB) & INTERRUPT_TX_1_END_MASK)
#define INTERRUPT_TX_0_END_MSB                   24
#define INTERRUPT_TX_0_END_LSB                   24
#define INTERRUPT_TX_0_END_MASK                  0x01000000
#define INTERRUPT_TX_0_END_GET(x)                (((x) & INTERRUPT_TX_0_END_MASK) >> INTERRUPT_TX_0_END_LSB)
#define INTERRUPT_TX_0_END_SET(x)                (((x) << INTERRUPT_TX_0_END_LSB) & INTERRUPT_TX_0_END_MASK)
#define INTERRUPT_TX_7_COMPLETE_MSB              23
#define INTERRUPT_TX_7_COMPLETE_LSB              23
#define INTERRUPT_TX_7_COMPLETE_MASK             0x00800000
#define INTERRUPT_TX_7_COMPLETE_GET(x)           (((x) & INTERRUPT_TX_7_COMPLETE_MASK) >> INTERRUPT_TX_7_COMPLETE_LSB)
#define INTERRUPT_TX_7_COMPLETE_SET(x)           (((x) << INTERRUPT_TX_7_COMPLETE_LSB) & INTERRUPT_TX_7_COMPLETE_MASK)
#define INTERRUPT_TX_6_COMPLETE_MSB              22
#define INTERRUPT_TX_6_COMPLETE_LSB              22
#define INTERRUPT_TX_6_COMPLETE_MASK             0x00400000
#define INTERRUPT_TX_6_COMPLETE_GET(x)           (((x) & INTERRUPT_TX_6_COMPLETE_MASK) >> INTERRUPT_TX_6_COMPLETE_LSB)
#define INTERRUPT_TX_6_COMPLETE_SET(x)           (((x) << INTERRUPT_TX_6_COMPLETE_LSB) & INTERRUPT_TX_6_COMPLETE_MASK)
#define INTERRUPT_TX_5_COMPLETE_MSB              21
#define INTERRUPT_TX_5_COMPLETE_LSB              21
#define INTERRUPT_TX_5_COMPLETE_MASK             0x00200000
#define INTERRUPT_TX_5_COMPLETE_GET(x)           (((x) & INTERRUPT_TX_5_COMPLETE_MASK) >> INTERRUPT_TX_5_COMPLETE_LSB)
#define INTERRUPT_TX_5_COMPLETE_SET(x)           (((x) << INTERRUPT_TX_5_COMPLETE_LSB) & INTERRUPT_TX_5_COMPLETE_MASK)
#define INTERRUPT_TX_4_COMPLETE_MSB              20
#define INTERRUPT_TX_4_COMPLETE_LSB              20
#define INTERRUPT_TX_4_COMPLETE_MASK             0x00100000
#define INTERRUPT_TX_4_COMPLETE_GET(x)           (((x) & INTERRUPT_TX_4_COMPLETE_MASK) >> INTERRUPT_TX_4_COMPLETE_LSB)
#define INTERRUPT_TX_4_COMPLETE_SET(x)           (((x) << INTERRUPT_TX_4_COMPLETE_LSB) & INTERRUPT_TX_4_COMPLETE_MASK)
#define INTERRUPT_TX_3_COMPLETE_MSB              19
#define INTERRUPT_TX_3_COMPLETE_LSB              19
#define INTERRUPT_TX_3_COMPLETE_MASK             0x00080000
#define INTERRUPT_TX_3_COMPLETE_GET(x)           (((x) & INTERRUPT_TX_3_COMPLETE_MASK) >> INTERRUPT_TX_3_COMPLETE_LSB)
#define INTERRUPT_TX_3_COMPLETE_SET(x)           (((x) << INTERRUPT_TX_3_COMPLETE_LSB) & INTERRUPT_TX_3_COMPLETE_MASK)
#define INTERRUPT_TX_2_COMPLETE_MSB              18
#define INTERRUPT_TX_2_COMPLETE_LSB              18
#define INTERRUPT_TX_2_COMPLETE_MASK             0x00040000
#define INTERRUPT_TX_2_COMPLETE_GET(x)           (((x) & INTERRUPT_TX_2_COMPLETE_MASK) >> INTERRUPT_TX_2_COMPLETE_LSB)
#define INTERRUPT_TX_2_COMPLETE_SET(x)           (((x) << INTERRUPT_TX_2_COMPLETE_LSB) & INTERRUPT_TX_2_COMPLETE_MASK)
#define INTERRUPT_TX_1_COMPLETE_MSB              17
#define INTERRUPT_TX_1_COMPLETE_LSB              17
#define INTERRUPT_TX_1_COMPLETE_MASK             0x00020000
#define INTERRUPT_TX_1_COMPLETE_GET(x)           (((x) & INTERRUPT_TX_1_COMPLETE_MASK) >> INTERRUPT_TX_1_COMPLETE_LSB)
#define INTERRUPT_TX_1_COMPLETE_SET(x)           (((x) << INTERRUPT_TX_1_COMPLETE_LSB) & INTERRUPT_TX_1_COMPLETE_MASK)
#define INTERRUPT_TX_0_COMPLETE_MSB              16
#define INTERRUPT_TX_0_COMPLETE_LSB              16
#define INTERRUPT_TX_0_COMPLETE_MASK             0x00010000
#define INTERRUPT_TX_0_COMPLETE_GET(x)           (((x) & INTERRUPT_TX_0_COMPLETE_MASK) >> INTERRUPT_TX_0_COMPLETE_LSB)
#define INTERRUPT_TX_0_COMPLETE_SET(x)           (((x) << INTERRUPT_TX_0_COMPLETE_LSB) & INTERRUPT_TX_0_COMPLETE_MASK)
#define INTERRUPT_RX_7_END_MSB                   15
#define INTERRUPT_RX_7_END_LSB                   15
#define INTERRUPT_RX_7_END_MASK                  0x00008000
#define INTERRUPT_RX_7_END_GET(x)                (((x) & INTERRUPT_RX_7_END_MASK) >> INTERRUPT_RX_7_END_LSB)
#define INTERRUPT_RX_7_END_SET(x)                (((x) << INTERRUPT_RX_7_END_LSB) & INTERRUPT_RX_7_END_MASK)
#define INTERRUPT_RX_6_END_MSB                   14
#define INTERRUPT_RX_6_END_LSB                   14
#define INTERRUPT_RX_6_END_MASK                  0x00004000
#define INTERRUPT_RX_6_END_GET(x)                (((x) & INTERRUPT_RX_6_END_MASK) >> INTERRUPT_RX_6_END_LSB)
#define INTERRUPT_RX_6_END_SET(x)                (((x) << INTERRUPT_RX_6_END_LSB) & INTERRUPT_RX_6_END_MASK)
#define INTERRUPT_RX_5_END_MSB                   13
#define INTERRUPT_RX_5_END_LSB                   13
#define INTERRUPT_RX_5_END_MASK                  0x00002000
#define INTERRUPT_RX_5_END_GET(x)                (((x) & INTERRUPT_RX_5_END_MASK) >> INTERRUPT_RX_5_END_LSB)
#define INTERRUPT_RX_5_END_SET(x)                (((x) << INTERRUPT_RX_5_END_LSB) & INTERRUPT_RX_5_END_MASK)
#define INTERRUPT_RX_4_END_MSB                   12
#define INTERRUPT_RX_4_END_LSB                   12
#define INTERRUPT_RX_4_END_MASK                  0x00001000
#define INTERRUPT_RX_4_END_GET(x)                (((x) & INTERRUPT_RX_4_END_MASK) >> INTERRUPT_RX_4_END_LSB)
#define INTERRUPT_RX_4_END_SET(x)                (((x) << INTERRUPT_RX_4_END_LSB) & INTERRUPT_RX_4_END_MASK)
#define INTERRUPT_RX_3_END_MSB                   11
#define INTERRUPT_RX_3_END_LSB                   11
#define INTERRUPT_RX_3_END_MASK                  0x00000800
#define INTERRUPT_RX_3_END_GET(x)                (((x) & INTERRUPT_RX_3_END_MASK) >> INTERRUPT_RX_3_END_LSB)
#define INTERRUPT_RX_3_END_SET(x)                (((x) << INTERRUPT_RX_3_END_LSB) & INTERRUPT_RX_3_END_MASK)
#define INTERRUPT_RX_2_END_MSB                   10
#define INTERRUPT_RX_2_END_LSB                   10
#define INTERRUPT_RX_2_END_MASK                  0x00000400
#define INTERRUPT_RX_2_END_GET(x)                (((x) & INTERRUPT_RX_2_END_MASK) >> INTERRUPT_RX_2_END_LSB)
#define INTERRUPT_RX_2_END_SET(x)                (((x) << INTERRUPT_RX_2_END_LSB) & INTERRUPT_RX_2_END_MASK)
#define INTERRUPT_RX_1_END_MSB                   9
#define INTERRUPT_RX_1_END_LSB                   9
#define INTERRUPT_RX_1_END_MASK                  0x00000200
#define INTERRUPT_RX_1_END_GET(x)                (((x) & INTERRUPT_RX_1_END_MASK) >> INTERRUPT_RX_1_END_LSB)
#define INTERRUPT_RX_1_END_SET(x)                (((x) << INTERRUPT_RX_1_END_LSB) & INTERRUPT_RX_1_END_MASK)
#define INTERRUPT_RX_0_END_MSB                   8
#define INTERRUPT_RX_0_END_LSB                   8
#define INTERRUPT_RX_0_END_MASK                  0x00000100
#define INTERRUPT_RX_0_END_GET(x)                (((x) & INTERRUPT_RX_0_END_MASK) >> INTERRUPT_RX_0_END_LSB)
#define INTERRUPT_RX_0_END_SET(x)                (((x) << INTERRUPT_RX_0_END_LSB) & INTERRUPT_RX_0_END_MASK)
#define INTERRUPT_RX_7_COMPLETE_MSB              7
#define INTERRUPT_RX_7_COMPLETE_LSB              7
#define INTERRUPT_RX_7_COMPLETE_MASK             0x00000080
#define INTERRUPT_RX_7_COMPLETE_GET(x)           (((x) & INTERRUPT_RX_7_COMPLETE_MASK) >> INTERRUPT_RX_7_COMPLETE_LSB)
#define INTERRUPT_RX_7_COMPLETE_SET(x)           (((x) << INTERRUPT_RX_7_COMPLETE_LSB) & INTERRUPT_RX_7_COMPLETE_MASK)
#define INTERRUPT_RX_6_COMPLETE_MSB              6
#define INTERRUPT_RX_6_COMPLETE_LSB              6
#define INTERRUPT_RX_6_COMPLETE_MASK             0x00000040
#define INTERRUPT_RX_6_COMPLETE_GET(x)           (((x) & INTERRUPT_RX_6_COMPLETE_MASK) >> INTERRUPT_RX_6_COMPLETE_LSB)
#define INTERRUPT_RX_6_COMPLETE_SET(x)           (((x) << INTERRUPT_RX_6_COMPLETE_LSB) & INTERRUPT_RX_6_COMPLETE_MASK)
#define INTERRUPT_RX_5_COMPLETE_MSB              5
#define INTERRUPT_RX_5_COMPLETE_LSB              5
#define INTERRUPT_RX_5_COMPLETE_MASK             0x00000020
#define INTERRUPT_RX_5_COMPLETE_GET(x)           (((x) & INTERRUPT_RX_5_COMPLETE_MASK) >> INTERRUPT_RX_5_COMPLETE_LSB)
#define INTERRUPT_RX_5_COMPLETE_SET(x)           (((x) << INTERRUPT_RX_5_COMPLETE_LSB) & INTERRUPT_RX_5_COMPLETE_MASK)
#define INTERRUPT_RX_4_COMPLETE_MSB              4
#define INTERRUPT_RX_4_COMPLETE_LSB              4
#define INTERRUPT_RX_4_COMPLETE_MASK             0x00000010
#define INTERRUPT_RX_4_COMPLETE_GET(x)           (((x) & INTERRUPT_RX_4_COMPLETE_MASK) >> INTERRUPT_RX_4_COMPLETE_LSB)
#define INTERRUPT_RX_4_COMPLETE_SET(x)           (((x) << INTERRUPT_RX_4_COMPLETE_LSB) & INTERRUPT_RX_4_COMPLETE_MASK)
#define INTERRUPT_RX_3_COMPLETE_MSB              3
#define INTERRUPT_RX_3_COMPLETE_LSB              3
#define INTERRUPT_RX_3_COMPLETE_MASK             0x00000008
#define INTERRUPT_RX_3_COMPLETE_GET(x)           (((x) & INTERRUPT_RX_3_COMPLETE_MASK) >> INTERRUPT_RX_3_COMPLETE_LSB)
#define INTERRUPT_RX_3_COMPLETE_SET(x)           (((x) << INTERRUPT_RX_3_COMPLETE_LSB) & INTERRUPT_RX_3_COMPLETE_MASK)
#define INTERRUPT_RX_2_COMPLETE_MSB              2
#define INTERRUPT_RX_2_COMPLETE_LSB              2
#define INTERRUPT_RX_2_COMPLETE_MASK             0x00000004
#define INTERRUPT_RX_2_COMPLETE_GET(x)           (((x) & INTERRUPT_RX_2_COMPLETE_MASK) >> INTERRUPT_RX_2_COMPLETE_LSB)
#define INTERRUPT_RX_2_COMPLETE_SET(x)           (((x) << INTERRUPT_RX_2_COMPLETE_LSB) & INTERRUPT_RX_2_COMPLETE_MASK)
#define INTERRUPT_RX_1_COMPLETE_MSB              1
#define INTERRUPT_RX_1_COMPLETE_LSB              1
#define INTERRUPT_RX_1_COMPLETE_MASK             0x00000002
#define INTERRUPT_RX_1_COMPLETE_GET(x)           (((x) & INTERRUPT_RX_1_COMPLETE_MASK) >> INTERRUPT_RX_1_COMPLETE_LSB)
#define INTERRUPT_RX_1_COMPLETE_SET(x)           (((x) << INTERRUPT_RX_1_COMPLETE_LSB) & INTERRUPT_RX_1_COMPLETE_MASK)
#define INTERRUPT_RX_0_COMPLETE_MSB              0
#define INTERRUPT_RX_0_COMPLETE_LSB              0
#define INTERRUPT_RX_0_COMPLETE_MASK             0x00000001
#define INTERRUPT_RX_0_COMPLETE_GET(x)           (((x) & INTERRUPT_RX_0_COMPLETE_MASK) >> INTERRUPT_RX_0_COMPLETE_LSB)
#define INTERRUPT_RX_0_COMPLETE_SET(x)           (((x) << INTERRUPT_RX_0_COMPLETE_LSB) & INTERRUPT_RX_0_COMPLETE_MASK)

#define INTERRUPT_MASK_ADDRESS                   0x00000004
#define INTERRUPT_MASK_OFFSET                    0x00000004
#define INTERRUPT_MASK_TX_7_END_MASK_MSB         31
#define INTERRUPT_MASK_TX_7_END_MASK_LSB         31
#define INTERRUPT_MASK_TX_7_END_MASK_MASK        0x80000000
#define INTERRUPT_MASK_TX_7_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_TX_7_END_MASK_MASK) >> INTERRUPT_MASK_TX_7_END_MASK_LSB)
#define INTERRUPT_MASK_TX_7_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_TX_7_END_MASK_LSB) & INTERRUPT_MASK_TX_7_END_MASK_MASK)
#define INTERRUPT_MASK_TX_6_END_MASK_MSB         30
#define INTERRUPT_MASK_TX_6_END_MASK_LSB         30
#define INTERRUPT_MASK_TX_6_END_MASK_MASK        0x40000000
#define INTERRUPT_MASK_TX_6_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_TX_6_END_MASK_MASK) >> INTERRUPT_MASK_TX_6_END_MASK_LSB)
#define INTERRUPT_MASK_TX_6_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_TX_6_END_MASK_LSB) & INTERRUPT_MASK_TX_6_END_MASK_MASK)
#define INTERRUPT_MASK_TX_5_END_MASK_MSB         29
#define INTERRUPT_MASK_TX_5_END_MASK_LSB         29
#define INTERRUPT_MASK_TX_5_END_MASK_MASK        0x20000000
#define INTERRUPT_MASK_TX_5_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_TX_5_END_MASK_MASK) >> INTERRUPT_MASK_TX_5_END_MASK_LSB)
#define INTERRUPT_MASK_TX_5_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_TX_5_END_MASK_LSB) & INTERRUPT_MASK_TX_5_END_MASK_MASK)
#define INTERRUPT_MASK_TX_4_END_MASK_MSB         28
#define INTERRUPT_MASK_TX_4_END_MASK_LSB         28
#define INTERRUPT_MASK_TX_4_END_MASK_MASK        0x10000000
#define INTERRUPT_MASK_TX_4_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_TX_4_END_MASK_MASK) >> INTERRUPT_MASK_TX_4_END_MASK_LSB)
#define INTERRUPT_MASK_TX_4_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_TX_4_END_MASK_LSB) & INTERRUPT_MASK_TX_4_END_MASK_MASK)
#define INTERRUPT_MASK_TX_3_END_MASK_MSB         27
#define INTERRUPT_MASK_TX_3_END_MASK_LSB         27
#define INTERRUPT_MASK_TX_3_END_MASK_MASK        0x08000000
#define INTERRUPT_MASK_TX_3_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_TX_3_END_MASK_MASK) >> INTERRUPT_MASK_TX_3_END_MASK_LSB)
#define INTERRUPT_MASK_TX_3_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_TX_3_END_MASK_LSB) & INTERRUPT_MASK_TX_3_END_MASK_MASK)
#define INTERRUPT_MASK_TX_2_END_MASK_MSB         26
#define INTERRUPT_MASK_TX_2_END_MASK_LSB         26
#define INTERRUPT_MASK_TX_2_END_MASK_MASK        0x04000000
#define INTERRUPT_MASK_TX_2_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_TX_2_END_MASK_MASK) >> INTERRUPT_MASK_TX_2_END_MASK_LSB)
#define INTERRUPT_MASK_TX_2_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_TX_2_END_MASK_LSB) & INTERRUPT_MASK_TX_2_END_MASK_MASK)
#define INTERRUPT_MASK_TX_1_END_MASK_MSB         25
#define INTERRUPT_MASK_TX_1_END_MASK_LSB         25
#define INTERRUPT_MASK_TX_1_END_MASK_MASK        0x02000000
#define INTERRUPT_MASK_TX_1_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_TX_1_END_MASK_MASK) >> INTERRUPT_MASK_TX_1_END_MASK_LSB)
#define INTERRUPT_MASK_TX_1_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_TX_1_END_MASK_LSB) & INTERRUPT_MASK_TX_1_END_MASK_MASK)
#define INTERRUPT_MASK_TX_0_END_MASK_MSB         24
#define INTERRUPT_MASK_TX_0_END_MASK_LSB         24
#define INTERRUPT_MASK_TX_0_END_MASK_MASK        0x01000000
#define INTERRUPT_MASK_TX_0_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_TX_0_END_MASK_MASK) >> INTERRUPT_MASK_TX_0_END_MASK_LSB)
#define INTERRUPT_MASK_TX_0_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_TX_0_END_MASK_LSB) & INTERRUPT_MASK_TX_0_END_MASK_MASK)
#define INTERRUPT_MASK_TX_7_COMPLETE_MASK_MSB    23
#define INTERRUPT_MASK_TX_7_COMPLETE_MASK_LSB    23
#define INTERRUPT_MASK_TX_7_COMPLETE_MASK_MASK   0x00800000
#define INTERRUPT_MASK_TX_7_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_TX_7_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_TX_7_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_TX_7_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_TX_7_COMPLETE_MASK_LSB) & INTERRUPT_MASK_TX_7_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_TX_6_COMPLETE_MASK_MSB    22
#define INTERRUPT_MASK_TX_6_COMPLETE_MASK_LSB    22
#define INTERRUPT_MASK_TX_6_COMPLETE_MASK_MASK   0x00400000
#define INTERRUPT_MASK_TX_6_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_TX_6_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_TX_6_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_TX_6_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_TX_6_COMPLETE_MASK_LSB) & INTERRUPT_MASK_TX_6_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_TX_5_COMPLETE_MASK_MSB    21
#define INTERRUPT_MASK_TX_5_COMPLETE_MASK_LSB    21
#define INTERRUPT_MASK_TX_5_COMPLETE_MASK_MASK   0x00200000
#define INTERRUPT_MASK_TX_5_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_TX_5_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_TX_5_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_TX_5_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_TX_5_COMPLETE_MASK_LSB) & INTERRUPT_MASK_TX_5_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_TX_4_COMPLETE_MASK_MSB    20
#define INTERRUPT_MASK_TX_4_COMPLETE_MASK_LSB    20
#define INTERRUPT_MASK_TX_4_COMPLETE_MASK_MASK   0x00100000
#define INTERRUPT_MASK_TX_4_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_TX_4_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_TX_4_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_TX_4_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_TX_4_COMPLETE_MASK_LSB) & INTERRUPT_MASK_TX_4_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_TX_3_COMPLETE_MASK_MSB    19
#define INTERRUPT_MASK_TX_3_COMPLETE_MASK_LSB    19
#define INTERRUPT_MASK_TX_3_COMPLETE_MASK_MASK   0x00080000
#define INTERRUPT_MASK_TX_3_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_TX_3_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_TX_3_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_TX_3_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_TX_3_COMPLETE_MASK_LSB) & INTERRUPT_MASK_TX_3_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_TX_2_COMPLETE_MASK_MSB    18
#define INTERRUPT_MASK_TX_2_COMPLETE_MASK_LSB    18
#define INTERRUPT_MASK_TX_2_COMPLETE_MASK_MASK   0x00040000
#define INTERRUPT_MASK_TX_2_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_TX_2_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_TX_2_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_TX_2_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_TX_2_COMPLETE_MASK_LSB) & INTERRUPT_MASK_TX_2_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_TX_1_COMPLETE_MASK_MSB    17
#define INTERRUPT_MASK_TX_1_COMPLETE_MASK_LSB    17
#define INTERRUPT_MASK_TX_1_COMPLETE_MASK_MASK   0x00020000
#define INTERRUPT_MASK_TX_1_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_TX_1_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_TX_1_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_TX_1_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_TX_1_COMPLETE_MASK_LSB) & INTERRUPT_MASK_TX_1_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_TX_0_COMPLETE_MASK_MSB    16
#define INTERRUPT_MASK_TX_0_COMPLETE_MASK_LSB    16
#define INTERRUPT_MASK_TX_0_COMPLETE_MASK_MASK   0x00010000
#define INTERRUPT_MASK_TX_0_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_TX_0_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_TX_0_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_TX_0_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_TX_0_COMPLETE_MASK_LSB) & INTERRUPT_MASK_TX_0_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_RX_7_END_MASK_MSB         15
#define INTERRUPT_MASK_RX_7_END_MASK_LSB         15
#define INTERRUPT_MASK_RX_7_END_MASK_MASK        0x00008000
#define INTERRUPT_MASK_RX_7_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_RX_7_END_MASK_MASK) >> INTERRUPT_MASK_RX_7_END_MASK_LSB)
#define INTERRUPT_MASK_RX_7_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_RX_7_END_MASK_LSB) & INTERRUPT_MASK_RX_7_END_MASK_MASK)
#define INTERRUPT_MASK_RX_6_END_MASK_MSB         14
#define INTERRUPT_MASK_RX_6_END_MASK_LSB         14
#define INTERRUPT_MASK_RX_6_END_MASK_MASK        0x00004000
#define INTERRUPT_MASK_RX_6_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_RX_6_END_MASK_MASK) >> INTERRUPT_MASK_RX_6_END_MASK_LSB)
#define INTERRUPT_MASK_RX_6_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_RX_6_END_MASK_LSB) & INTERRUPT_MASK_RX_6_END_MASK_MASK)
#define INTERRUPT_MASK_RX_5_END_MASK_MSB         13
#define INTERRUPT_MASK_RX_5_END_MASK_LSB         13
#define INTERRUPT_MASK_RX_5_END_MASK_MASK        0x00002000
#define INTERRUPT_MASK_RX_5_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_RX_5_END_MASK_MASK) >> INTERRUPT_MASK_RX_5_END_MASK_LSB)
#define INTERRUPT_MASK_RX_5_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_RX_5_END_MASK_LSB) & INTERRUPT_MASK_RX_5_END_MASK_MASK)
#define INTERRUPT_MASK_RX_4_END_MASK_MSB         12
#define INTERRUPT_MASK_RX_4_END_MASK_LSB         12
#define INTERRUPT_MASK_RX_4_END_MASK_MASK        0x00001000
#define INTERRUPT_MASK_RX_4_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_RX_4_END_MASK_MASK) >> INTERRUPT_MASK_RX_4_END_MASK_LSB)
#define INTERRUPT_MASK_RX_4_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_RX_4_END_MASK_LSB) & INTERRUPT_MASK_RX_4_END_MASK_MASK)
#define INTERRUPT_MASK_RX_3_END_MASK_MSB         11
#define INTERRUPT_MASK_RX_3_END_MASK_LSB         11
#define INTERRUPT_MASK_RX_3_END_MASK_MASK        0x00000800
#define INTERRUPT_MASK_RX_3_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_RX_3_END_MASK_MASK) >> INTERRUPT_MASK_RX_3_END_MASK_LSB)
#define INTERRUPT_MASK_RX_3_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_RX_3_END_MASK_LSB) & INTERRUPT_MASK_RX_3_END_MASK_MASK)
#define INTERRUPT_MASK_RX_2_END_MASK_MSB         10
#define INTERRUPT_MASK_RX_2_END_MASK_LSB         10
#define INTERRUPT_MASK_RX_2_END_MASK_MASK        0x00000400
#define INTERRUPT_MASK_RX_2_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_RX_2_END_MASK_MASK) >> INTERRUPT_MASK_RX_2_END_MASK_LSB)
#define INTERRUPT_MASK_RX_2_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_RX_2_END_MASK_LSB) & INTERRUPT_MASK_RX_2_END_MASK_MASK)
#define INTERRUPT_MASK_RX_1_END_MASK_MSB         9
#define INTERRUPT_MASK_RX_1_END_MASK_LSB         9
#define INTERRUPT_MASK_RX_1_END_MASK_MASK        0x00000200
#define INTERRUPT_MASK_RX_1_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_RX_1_END_MASK_MASK) >> INTERRUPT_MASK_RX_1_END_MASK_LSB)
#define INTERRUPT_MASK_RX_1_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_RX_1_END_MASK_LSB) & INTERRUPT_MASK_RX_1_END_MASK_MASK)
#define INTERRUPT_MASK_RX_0_END_MASK_MSB         8
#define INTERRUPT_MASK_RX_0_END_MASK_LSB         8
#define INTERRUPT_MASK_RX_0_END_MASK_MASK        0x00000100
#define INTERRUPT_MASK_RX_0_END_MASK_GET(x)      (((x) & INTERRUPT_MASK_RX_0_END_MASK_MASK) >> INTERRUPT_MASK_RX_0_END_MASK_LSB)
#define INTERRUPT_MASK_RX_0_END_MASK_SET(x)      (((x) << INTERRUPT_MASK_RX_0_END_MASK_LSB) & INTERRUPT_MASK_RX_0_END_MASK_MASK)
#define INTERRUPT_MASK_RX_7_COMPLETE_MASK_MSB    7
#define INTERRUPT_MASK_RX_7_COMPLETE_MASK_LSB    7
#define INTERRUPT_MASK_RX_7_COMPLETE_MASK_MASK   0x00000080
#define INTERRUPT_MASK_RX_7_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_RX_7_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_RX_7_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_RX_7_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_RX_7_COMPLETE_MASK_LSB) & INTERRUPT_MASK_RX_7_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_RX_6_COMPLETE_MASK_MSB    6
#define INTERRUPT_MASK_RX_6_COMPLETE_MASK_LSB    6
#define INTERRUPT_MASK_RX_6_COMPLETE_MASK_MASK   0x00000040
#define INTERRUPT_MASK_RX_6_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_RX_6_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_RX_6_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_RX_6_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_RX_6_COMPLETE_MASK_LSB) & INTERRUPT_MASK_RX_6_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_RX_5_COMPLETE_MASK_MSB    5
#define INTERRUPT_MASK_RX_5_COMPLETE_MASK_LSB    5
#define INTERRUPT_MASK_RX_5_COMPLETE_MASK_MASK   0x00000020
#define INTERRUPT_MASK_RX_5_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_RX_5_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_RX_5_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_RX_5_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_RX_5_COMPLETE_MASK_LSB) & INTERRUPT_MASK_RX_5_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_RX_4_COMPLETE_MASK_MSB    4
#define INTERRUPT_MASK_RX_4_COMPLETE_MASK_LSB    4
#define INTERRUPT_MASK_RX_4_COMPLETE_MASK_MASK   0x00000010
#define INTERRUPT_MASK_RX_4_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_RX_4_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_RX_4_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_RX_4_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_RX_4_COMPLETE_MASK_LSB) & INTERRUPT_MASK_RX_4_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_RX_3_COMPLETE_MASK_MSB    3
#define INTERRUPT_MASK_RX_3_COMPLETE_MASK_LSB    3
#define INTERRUPT_MASK_RX_3_COMPLETE_MASK_MASK   0x00000008
#define INTERRUPT_MASK_RX_3_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_RX_3_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_RX_3_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_RX_3_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_RX_3_COMPLETE_MASK_LSB) & INTERRUPT_MASK_RX_3_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_RX_2_COMPLETE_MASK_MSB    2
#define INTERRUPT_MASK_RX_2_COMPLETE_MASK_LSB    2
#define INTERRUPT_MASK_RX_2_COMPLETE_MASK_MASK   0x00000004
#define INTERRUPT_MASK_RX_2_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_RX_2_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_RX_2_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_RX_2_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_RX_2_COMPLETE_MASK_LSB) & INTERRUPT_MASK_RX_2_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_RX_1_COMPLETE_MASK_MSB    1
#define INTERRUPT_MASK_RX_1_COMPLETE_MASK_LSB    1
#define INTERRUPT_MASK_RX_1_COMPLETE_MASK_MASK   0x00000002
#define INTERRUPT_MASK_RX_1_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_RX_1_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_RX_1_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_RX_1_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_RX_1_COMPLETE_MASK_LSB) & INTERRUPT_MASK_RX_1_COMPLETE_MASK_MASK)
#define INTERRUPT_MASK_RX_0_COMPLETE_MASK_MSB    0
#define INTERRUPT_MASK_RX_0_COMPLETE_MASK_LSB    0
#define INTERRUPT_MASK_RX_0_COMPLETE_MASK_MASK   0x00000001
#define INTERRUPT_MASK_RX_0_COMPLETE_MASK_GET(x) (((x) & INTERRUPT_MASK_RX_0_COMPLETE_MASK_MASK) >> INTERRUPT_MASK_RX_0_COMPLETE_MASK_LSB)
#define INTERRUPT_MASK_RX_0_COMPLETE_MASK_SET(x) (((x) << INTERRUPT_MASK_RX_0_COMPLETE_MASK_LSB) & INTERRUPT_MASK_RX_0_COMPLETE_MASK_MASK)


#ifndef __ASSEMBLER__

typedef struct bridge_intr_reg_reg_s {
  volatile unsigned int interrupt;
  volatile unsigned int interrupt_mask;
} bridge_intr_reg_reg_t;

#endif /* __ASSEMBLER__ */

#endif /* _BRIDGE_INTR_REG_H_ */
