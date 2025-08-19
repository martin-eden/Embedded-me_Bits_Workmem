## What

(2025-08)

Bits access in SRAM. ATmega328

This is easing module.

We have `[me_Bits]` to work with bits in argument.
We have `[me_WorkMemory]` to work with bytes in SRAM.

Quite often we need to modify bit at specific memory location.
To avoid writing similar code for this task we have this module.

## Code

* [Example][Example]
* [Interface][Interface]
* [Implementation][Implementation]

## Requirements

  * arduino-cli
  * bash

## Install/remove

Easy way is to clone [GetLibs][GetLibs] repo and run it's code.

## Compile

Zero-warnings compilation:

```bash
arduino-cli compile --fqbn arduino:avr:uno --quiet --warnings all . --build-property compiler.cpp.extra_flags="-std=c++1z"
```

## See also

* [My other embedded C++ libraries][Embedded]
* [My other repositories][Repos]

[Example]: examples/me_Bits_Workmem/me_Bits_Workmem.ino
[Interface]: src/me_Bits_Workmem.h
[Implementation]: src/me_Bits_Workmem.cpp

[GetLibs]: https://github.com/martin-eden/Embedded-Framework-GetLibs

[Embedded]: https://github.com/martin-eden/Embedded_Crafts/tree/master/Parts
[Repos]: https://github.com/martin-eden/contents
