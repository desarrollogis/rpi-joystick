#!/usr/bin/env python

from gpiozero import Button
from evdev import UInput, ecodes as e
from time import sleep

button = Button(13)
ui = UInput()
pressed = False
while True:
    if button.is_pressed:
        if not pressed:
            ui.write(e.EV_KEY, e.KEY_ENTER, 1)
            pressed = True
    else:
        if pressed:
            ui.write(e.EV_KEY, e.KEY_ENTER, 0)
            pressed = False
    sleep(0.001)
