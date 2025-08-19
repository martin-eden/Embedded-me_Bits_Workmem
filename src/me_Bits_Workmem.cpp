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
    me_WorkMemory::GetByte,
    me_Bits::GetBit;

  TUint_1 ByteValue;

  if (!GetByte(&ByteValue, ByteAddress)) return false;
  if (!GetBit(BitValue, ByteValue, BitOffset)) return false;

  return true;
}

/*
  Set bit to value
*/
TBool me_Bits_Workmem::SetBit(
  TUint_1 BitValue,
  TAddress ByteAddress,
  TUint_1 BitOffset
)
{
  using
    me_WorkMemory::GetByte,
    me_Bits::SetBitTo,
    me_WorkMemory::SetByte;

  TUint_1 ByteValue;

  if (!GetByte(&ByteValue, ByteAddress)) return false;
  if (!SetBitTo(&ByteValue, BitOffset, BitValue)) return false;
  if (!SetByte(ByteValue, ByteAddress)) return false;

  return true;
}

/*
  Set bit to one
*/
TBool me_Bits_Workmem::SetBitToOne(
  TAddress ByteAddress,
  TUint_1 BitOffset
)
{
  using
    me_WorkMemory::GetByte,
    me_Bits::SetBitTo,
    me_WorkMemory::SetByte;

  TUint_1 ByteValue;

  if (!GetByte(&ByteValue, ByteAddress)) return false;
  if (!SetBitTo(&ByteValue, BitOffset, 1)) return false;
  if (!SetByte(ByteValue, ByteAddress)) return false;

  return true;
}

/*
  Set bit to zero
*/
TBool me_Bits_Workmem::SetBitToZero(
  TAddress ByteAddress,
  TUint_1 BitOffset
)
{
  using
    me_WorkMemory::GetByte,
    me_Bits::SetBitTo,
    me_WorkMemory::SetByte;

  TUint_1 ByteValue;

  if (!GetByte(&ByteValue, ByteAddress)) return false;
  if (!SetBitTo(&ByteValue, BitOffset, 0)) return false;
  if (!SetByte(ByteValue, ByteAddress)) return false;

  return true;
}

/*
  2025-08-19
*/
