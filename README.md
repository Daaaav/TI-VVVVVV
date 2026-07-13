# VVVVVV demake for TI-83+ and TI-84+

Right now there's no gameplay yet and this is nothing more than an explorer of the 20x20 map of VVVVVV - well, a 2012 recreation of the 20x20 VVVVVV map in a custom level which lacks the Tower and Polar Dimension.

Still, it might get to basic working gameplay later!

Also check out the _real_ VVVVVV, the one for not-calculators: https://github.com/TerryCavanagh/VVVVVV

# Building

I'm using SPASM-ng and Wabbitsign to build the application. The `Makefile` currently contains hardcoded paths to my binaries of these, so you'd have to change those if you'd like to build it yourself.

The resulting 8XK file can be sent to a calculator, or to an emulator. Unfortunately, TilEm2 seems to refuse to work with it (the calculator screen shows the app is called "Vùg≠w₅0𝑛" and TilEm then says "NACK received. Cause: the command has been refused.") which also happened to one of TIs official apps so it's probably not just me. But it works in TI's official TI-83+ Flash Debugger, and on a real calculator.


