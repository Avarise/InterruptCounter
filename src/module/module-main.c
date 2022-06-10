#include <linux/init.h>
#include <linux/config.h>
#include <linux/module.h>
#include <linux/kernel.h> /* printk() */
#include <linux/slab.h> /* kmalloc() */
#include <linux/fs.h> /* everything... */
#include <linux/errno.h> /* error codes */
#include <linux/types.h> /* size_t */
#include <linux/proc_fs.h>
#include <linux/fcntl.h>

MODULE_LICENSE("Dual BSD/GPL"); 

static int hello_init(void) {
    printk(KERN_ALERT "Hello, world\n"); 
    return 0; 
}

static void hello_exit(void) {
    printk(KERN_ALERT "Goodbye, cruel world\n"); 
}

module_init(hello_init); 
module_exit(hello_exit); 