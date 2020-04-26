#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int __init rpi_joystick_init(void) {
	printk(KERN_INFO "JS: staring...");
	// stuff to do
	printk(KERN_INFO "JS: staring done.");
	return 0;
}

static void __exit rpi_joystick_exit(void) {
	printk(KERN_INFO "JS: stopping...");
	// stuff to do
	printk(KERN_INFO "JS: stopping done.");
}

module_init(rpi_joystick_init);
module_exit(rpi_joystick_exit);
