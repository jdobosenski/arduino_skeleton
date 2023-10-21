
# Arduino Skeleton

This repo contains code that will blink the LED on an Arduino Uno. The novel part is that we don't
use the Arduino IDE at all.

## Prerequisites

``` shell
sudo dnf install -y \
	avr-binutils \
	avrdude \
	avr-gcc \
	avr-libc \
	make
```

## Compiling/Flashing

After making necessary changes in the Makefile for your specific board, simply run `make`

Flash the program to the board by running

``` shell
make flash
```

