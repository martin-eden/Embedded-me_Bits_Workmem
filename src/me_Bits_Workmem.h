// Access to bits in working memory

/*
  Author: Martin Eden
  Last mod.: 2025-08-19
*/

/*
  Often you need to change specific bit at fixed address.

  This module provides bit changes for working memory (SRAM).

  Other memories are program memory (Flash) and EEPROM.
*/

#include <me_BaseTypes.h>

namespace me_Bits_Workmem
{
  // Get bit
  TBool GetBit(
    TUint_1 * BitValue,
    TAddress ByteAddress,
    TUint_1 BitOffset
  );

  // Set bit to value
  TBool SetBitTo(
    TAddress ByteAddress,
    TUint_1 BitOffset,
    TUint_1 BitValue
  );
}

/*
  2025-08-19
*/
