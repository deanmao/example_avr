ARDUINO_DIR   = /Applications/Arduino.app/Contents/Resources/Java
ARDMK_DIR     = /usr/local
BOARD_TAG    = arduino
VARIANT      = standard
MCU          = atmega328p
F_CPU        = 16000000L
ARDUINO_LIBS = 
AVRDUDE_ARD_PROGRAMMER = usbtiny

ISP_HIGH_FUSE      = 0xd9
ISP_LOW_FUSE       = 0x62
ISP_EXT_FUSE       = 0x01

include ./Arduino.mk

AVRDUDE_ARD_OPTS = -c $(AVRDUDE_ARD_PROGRAMMER)

u:		raw_upload
