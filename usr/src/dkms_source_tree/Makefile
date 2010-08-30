#
# Makefile for the HID driver
#
hid-objs			:= hid-core.o hid-input.o

ifdef CONFIG_DEBUG_FS
	hid-objs		+= hid-debug.o
endif

obj-$(CONFIG_HID)		+= hid.o

hid-$(CONFIG_HIDRAW)		+= hidraw.o
