/** @file

  Copyright (c) 2015, Altera Corporation. All rights reserved.

  Redistribution and use in source and binary forms, with or without modification,
  are permitted provided that the following conditions are met:

  1. Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

  2. Redistributions in binary form must reproduce the above copyright notice, this
  list of conditions and the following disclaimer in the documentation and/or other
  materials provided with the distribution.

  3. Neither the name of the copyright holder nor the names of its contributors may
  be used to endorse or promote products derived from this software without specific
  prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
  SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
  TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
  DAMAGE.

**/

#ifndef __RAW_BINARY_FILE_H__
#define __RAW_BINARY_FILE_H__

#include "BootSource.h"
#include "DeviceTreeDefCfg.h"

typedef enum {
    PERI_RBF = 0,
    CORE_RBF,
    COMBINE_RBF,
} RBF_TYPE;

// ==================================================================
// Functions Definition
// ==================================================================

EFI_STATUS
EFIAPI
FlashWrite (
  IN  UINT32  Offset,
  IN  VOID*   Buffer,
  IN  UINT32  BufferSize
  );

EFI_STATUS
EFIAPI
FlashRead (
  IN  UINT32  Offset,
  OUT VOID*   Buffer,
  IN  UINT32  BufferSize
  );

EFI_STATUS
EFIAPI
OpenRawBinaryFile(
  IN   VOID*             Fdt,
  IN   BOOT_SOURCE_TYPE  BootSourceType,
  OUT  UINT32*           RbfSize,
  OUT  UINT32*           Checksum,
  IN   BOOLEAN           CalledFromPitStop
  );

EFI_STATUS
EFIAPI
ReadRawBinaryFile(
  IN  UINT32  Offset,
  IN  UINTN   ReadSize,
  OUT VOID*   Buffer
  );

VOID
EFIAPI
LoadCoreRbfImageToRam (
  IN  UINTN            DestinationMemoryBase,
  IN  UINT32           RbfSize
  );

VOID
EFIAPI
GetRbfFileCfg (
  IN  CONST VOID*             Fdt,
  OUT RBF_FILE_CONFIG*        RbfCfg,
  IN  BOOLEAN                 CalledFromPitStop
  );

VOID
EFIAPI
GetRbfOffset (
  IN  CONST VOID*              Fdt,
  OUT       UINT32*            RbfOffset,
  IN        BOOLEAN            CalledFromPitStop
  );

#endif



