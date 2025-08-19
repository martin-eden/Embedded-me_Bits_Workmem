// Bits access in working memory

/*
  Author: Martin Eden
  Last mod.: 2025-08-19
*/

#include <me_Bits_Workmem.h>

#include <me_BaseTypes.h>
#include <me_Bits.h>
#include <me_WorkMemory.h>

using namespace me_Bits_Workmem;

/*
  Get bit
*/
TBool me_Bits_Workmem::GetBit(
  TUint_1 * BitValue,
  TAddress ByteAddress,
  TUint_1 BitOffset
)
{
  using
    me_WorkMemory::GetByteFrom,
    me_Bits::GetBit;

  TUint_1 ByteValue;

  if (!GetByteFrom(&ByteValue, ByteAddress)) return false;
  if (!GetBit(BitValue, ByteValue, BitOffset)) return false;

  return true;
}

/*
  Set bit to value
*/
TBool me_Bits_Workmem::SetBitTo(
  TAddress ByteAddress,
  TUint_1 BitOffset,
  TUint_1 BitValue
)
{
  using
    me_WorkMemory::GetByteFrom,
    me_Bits::SetBitTo,
    me_WorkMemory::SetByteTo;

  TUint_1 ByteValue;

  if (!GetByteFrom(&ByteValue, ByteAddress)) return false;
  if (!SetBitTo(&ByteValue, BitOffset, BitValue)) return false;
  if (!SetByteTo(ByteAddress, ByteValue)) return false;

  return true;
}

/*
  2025-08-19
*/
