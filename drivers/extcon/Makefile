#
# Makefile for external connector class (extcon) devices
#

obj-$(CONFIG_EXTCON)		+= extcon-class.o
ifeq ($(CONFIG_MACH_SAMSUNG),y)
obj-$(CONFIG_EXTCON)		+= extcon-notifier.o
endif
obj-$(CONFIG_EXTCON_GPIO)	+= extcon-gpio.o
obj-$(CONFIG_EXTCON_ADC_JACK)	+= extcon-adc-jack.o
obj-$(CONFIG_EXTCON_MAX77693)	+= extcon-max77693.o
obj-$(CONFIG_EXTCON_MAX77849)	+= extcon-max77849.o
obj-$(CONFIG_EXTCON_MAX8997)	+= extcon-max8997.o
obj-$(CONFIG_EXTCON_ARIZONA)	+= extcon-arizona.o
