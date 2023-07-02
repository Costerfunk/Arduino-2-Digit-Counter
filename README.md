# Arduino-2-Digit-Counter
Counter for Arduino Nano using two 7 segment displays and 1 button.

Change the define section for each segment/pin of your displays. This does not use a multiplex, each segment gets its own pin. countValue set to -1 to fix bug where count increments on startup.

loop checks button state and updates on press, increments count, calls both displayDigit, and delays for .15s to ensure no double press.

displayDigitFirst uses integer math to get tens place, displayDigitSecond uses modulus to get ones place. Display section has if statement for each segment.

turnOff sets all pins with related segment to LOW.
