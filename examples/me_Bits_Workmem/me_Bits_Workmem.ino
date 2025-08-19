// [me_Bits_Workmem] test

/*
  Author: Martin Eden
  Last mod.: 2025-08-19
*/

#include <me_Bits_Workmem.h>

#include <me_BaseTypes.h>
#include <me_Uart.h>
#include <me_Console.h>

void RunTest()
{
  // Set output LED to ON, delay, set to OFF, check it's off
  {
    TAddress ModePortAddress = 36;
    TUint_1 BitOffset = 5;
    TAddress WritePortAddress = 37;

    TUint_1 BitValue = 0;

    me_Bits_Workmem::SetBitTo(ModePortAddress, BitOffset, 1);

    // Blink LED several times
    {
      const TUint_1 NumRuns = 3;

      for (TUint_1 RunNumber = 1; RunNumber <= NumRuns; ++RunNumber)
      {
        Console.Print("LED blink");

        me_Bits_Workmem::SetBitTo(WritePortAddress, BitOffset, 0);
        delay(1000);
        me_Bits_Workmem::SetBitTo(WritePortAddress, BitOffset, 1);
        delay(1000);
      }
    }

    if (!me_Bits_Workmem::GetBit(&BitValue, WritePortAddress, BitOffset))
      Console.Print("Getting bit failed");

    if (BitValue != 1)
      Console.Print("Unexpected bit value");
  }
}

void setup()
{
  me_Uart::Init(me_Uart::Speed_115k_Bps);

  Console.Print("( [me_Bits_Workmem] test");
  Console.Indent();

  RunTest();

  Console.Unindent();
  Console.Print(") Done");
}

void loop()
{
}

/*
  2025-08-19
*/
