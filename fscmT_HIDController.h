#include "Joystick.h"//for HID
//notes                               x     y     z     rx    ry    rz   rudder throt  accel  brake  steer
Joystick_ Joystick(0x03, 0x05, 5, 0, true, true, true, true, true, true, false, false, false, false, false);
