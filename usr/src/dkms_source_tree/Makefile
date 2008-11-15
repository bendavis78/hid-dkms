#
# Makefile for the HID driver
#
hid-objs			:= hid-core.o hid-input.o hid-input-quirks.o

obj-$(CONFIG_HID)		+= hid.o

hid-$(CONFIG_HID_DEBUG)		+= hid-debug.o
hid-$(CONFIG_HIDRAW)		+= hidraw.o
