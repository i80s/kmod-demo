#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/module.h>
#include <linux/types.h>

int __init hello_me_init(void)
{
	printk(KERN_INFO "Hello\n");
	return 0;
}

void __exit hello_me_exit(void)
{
}

module_init(hello_me_init);
module_exit(hello_me_exit);

MODULE_LICENSE("GPL");
MODULE_VERSION("0.0.1");

