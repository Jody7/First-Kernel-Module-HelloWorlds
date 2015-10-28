#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros

MODULE_DESCRIPTION("First Module Ever");

static int __init hello_init(void)
{

    printk(KERN_INFO "Hello from Jody!\n");
    return 0;
    
}

static void __exit hello_cleanup(void)
{
    //cleans up module when unloading/turning off, but we have nothing to do
    printk(KERN_INFO "Exiting Module...\n");
}

module_init(hello_init);
module_exit(hello_cleanup);
