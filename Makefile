obj-m += kernel_mod.o


all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

load_module:
	sudo insmod ./kernel_mod.ko

view_kernel_log:
	sudo dmesg -W

unload_module:
	sudo rmmod kernel_mod
