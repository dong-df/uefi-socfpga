/*******************************************************************************
*                                                                              *
* Copyright 2014 Altera Corporation. All Rights Reserved.                      *
*                                                                              *
* Redistribution and use in source and binary forms, with or without           *
* modification, are permitted provided that the following conditions are met:  *
*                                                                              *
* 1. Redistributions of source code must retain the above copyright notice,    *
*    this list of conditions and the following disclaimer.                     *
*                                                                              *
* 2. Redistributions in binary form must reproduce the above copyright notice, *
*    this list of conditions and the following disclaimer in the documentation *
*    and/or other materials provided with the distribution.                    *
*                                                                              *
* 3. The name of the author may not be used to endorse or promote products     *
*    derived from this software without specific prior written permission.     *
*                                                                              *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER "AS IS" AND ANY EXPRESS OR *
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF *
* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ARE DISCLAIMED. IN NO  *
* EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,       *
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, *
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;  *
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,     *
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR      *
* OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF       *
* ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                                   *
*                                                                              *
*******************************************************************************/

/* Altera - ALT_NOC_CCU_L4_LINK_RATE_ADPTR */

#ifndef __ALT_SOCAL_NOC_CCU_L4_LINK_RATE_ADPTR_H__
#define __ALT_SOCAL_NOC_CCU_L4_LINK_RATE_ADPTR_H__

#ifndef __ASSEMBLY__
#ifdef __cplusplus
#include <cstdint>
extern "C"
{
#else   /* __cplusplus */
////#include <stdint.h>
#endif  /* __cplusplus */
#endif  /* __ASSEMBLY__ */

/*
 * Component : NOC_CCU_L4_LINK_RATE_ADPTR
 * 
 */
/*
 * Register : l4_linkResp_main_RateAdapter_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                                                       
 * :-------|:-------|:---------|:-----------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x1      | ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID  
 *  [31:8] | R      | 0x955e1a | ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM
 * 
 */
/*
 * Field : CORETYPEID
 * 
 * Field identifying the type of IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID_MSB        7
/* The width in bits of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID_RESET      0x1
/* Extracts the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID field value from a register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID register field value suitable for setting the register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM_RESET      0x955e1a
/* Extracts the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM field value from a register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID.
 */
struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_s
{
    const volatile uint32_t  CORETYPEID   :  8;  /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORETYPEID */
    const volatile uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_CORECHECKSUM */
};

/* The typedef declaration for register ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID. */
typedef struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_s  ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_RESET       0x955e1a01
/* The byte offset of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID register from the beginning of the component. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_OFST        0x0

/*
 * Register : l4_linkResp_main_RateAdapter_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                                        
 * :-------|:-------|:------|:------------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x0   | ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID   
 *  [31:8] | R      | 0x148 | ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID
 * 
 */
/*
 * Field : USERID
 * 
 * Field containing a user defined value, not used anywhere inside the IP itself.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID_MSB        7
/* The width in bits of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID_RESET      0x0
/* Extracts the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID field value from a register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID register field value suitable for setting the register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID_RESET      0x148
/* Extracts the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID field value from a register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID.
 */
struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_s
{
    const volatile uint32_t  USERID    :  8;  /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_USERID */
    const volatile uint32_t  FLEXNOCID : 24;  /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID. */
typedef struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_s  ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_RESET       0x00014800
/* The byte offset of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID register from the beginning of the component. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_OFST        0x4

/*
 * Register : l4_linkResp_main_RateAdapter_Rate
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                          
 * :--------|:-------|:--------|:----------------------------------------------------------------------
 *  [9:0]   | RW     | 0x0     | ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE
 *  [31:10] | ???    | Unknown | *UNDEFINED*                                                          
 * 
 */
/*
 * Field : RATE
 * 
 * The ratio of outgoing to incoming throughput. This value determines what portion
 * of a received packet will be stored before its head is transmitted. An optimal
 * setting avoids transmitting bubbles, while adding no delay to packets. The ratio
 * is expressed as 256 / (ratio - 1). For example, a 3:1 ratio of outgoing to
 * incoming throughput would be indicated by value 0x06E. Note that throughput is
 * the product of clock frequency x data bus width. A value of 0x000 causes the
 * rate adapter to store a packet until either the entire packet is received or the
 * buffer becomes full.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE_MSB        9
/* The width in bits of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE_WIDTH      10
/* The mask used to set the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE_SET_MSK    0x000003ff
/* The mask used to clear the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE_CLR_MSK    0xfffffc00
/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE_RESET      0x0
/* Extracts the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE field value from a register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE register field value suitable for setting the register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE_SET(value) (((value) << 0) & 0x000003ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE.
 */
struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_s
{
    volatile uint32_t  RATE : 10;  /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RATE */
    uint32_t                : 22;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE. */
typedef struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_s  ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE register from the beginning of the component. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_OFST        0x8

/*
 * Register : l4_linkResp_main_RateAdapter_Bypass
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                              
 * :-------|:-------|:--------|:--------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                              
 * 
 */
/*
 * Field : BYPASS
 * 
 * Disable the rate adaptation capability. This causes the rate adapter to act as a
 * FIFO by transmitting received words, without delay, as soon as they can be
 * transmitted. This setting is useful when the incoming throughput is equal to or
 * greater than the downstream throughput.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS_MSB        0
/* The width in bits of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS register field value. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS register field. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS_RESET      0x0
/* Extracts the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS field value from a register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS register field value suitable for setting the register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS.
 */
struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_s
{
    volatile uint32_t  BYPASS :  1;  /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_BYPASS */
    uint32_t                  : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS. */
typedef struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_s  ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS register. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS register from the beginning of the component. */
#define ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_OFST        0xc

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register group ALT_NOC_CCU_L4_LINK_RATE_ADPTR.
 */
struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_s
{
    volatile ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID_t      l4_linkResp_main_RateAdapter_Id_CoreId;      /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID */
    volatile ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID_t  l4_linkResp_main_RateAdapter_Id_RevisionId;  /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID */
    volatile ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE_t           l4_linkResp_main_RateAdapter_Rate;           /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE */
    volatile ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS_t         l4_linkResp_main_RateAdapter_Bypass;         /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS */
    volatile uint32_t                                                                     _pad_0x10_0x80[28];                          /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_CCU_L4_LINK_RATE_ADPTR. */
typedef struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_s  ALT_NOC_CCU_L4_LINK_RATE_ADPTR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_CCU_L4_LINK_RATE_ADPTR. */
struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_raw_s
{
    volatile uint32_t  l4_linkResp_main_RateAdapter_Id_CoreId;      /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_COREID */
    volatile uint32_t  l4_linkResp_main_RateAdapter_Id_RevisionId;  /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_ID_REVISIONID */
    volatile uint32_t  l4_linkResp_main_RateAdapter_Rate;           /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_RATE */
    volatile uint32_t  l4_linkResp_main_RateAdapter_Bypass;         /* ALT_NOC_CCU_L4_LINK_RATE_ADPTR_L4_LINKRESP_MAIN_RATEADAPTER_BYPASS */
    volatile uint32_t  _pad_0x10_0x80[28];                          /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_CCU_L4_LINK_RATE_ADPTR. */
typedef struct ALT_NOC_CCU_L4_LINK_RATE_ADPTR_raw_s  ALT_NOC_CCU_L4_LINK_RATE_ADPTR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_CCU_L4_LINK_RATE_ADPTR_H__ */

