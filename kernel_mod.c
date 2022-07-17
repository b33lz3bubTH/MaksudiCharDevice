#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sourav A");
MODULE_DESCRIPTION("Basic Hello World Kernel Program");
MODULE_VERSION("1.0.0");


static int __init helloworld_init(void) {
	// return -EIO; // IO error
	printk(KERN_INFO "Driver Init Successful\n");
	return 0; // ALL OKAY
}
static void __exit helloworld_exit(void) {
	printk(KERN_INFO "Driver Unmount Successful\n");
}


// Register initialization and exit function

module_init(helloworld_init);
module_exit(helloworld_exit);
