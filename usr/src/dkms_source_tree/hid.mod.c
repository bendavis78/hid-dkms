#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa257c5a3, "struct_module" },
	{ 0x6b9a06f4, "cdev_del" },
	{ 0x24b84de1, "per_cpu__current_task" },
	{ 0xafcac6fe, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x73ffd178, "cdev_init" },
	{ 0x608c2831, "warn_on_slowpath" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60400b7f, "pv_lock_ops" },
	{ 0xa5423cc4, "param_get_int" },
	{ 0x71356fba, "remove_wait_queue" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x25e6a7c5, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x577cc638, "mutex_unlock" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xcb32da10, "param_set_int" },
	{ 0x805a8fd8, "input_event" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x67e71b77, "__mutex_init" },
	{ 0xb72397d5, "printk" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x8aaf8654, "mutex_lock" },
	{ 0x9eae490d, "device_create" },
	{ 0x9b355194, "cdev_add" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xa36a1add, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbc9fe26a, "input_register_device" },
	{ 0x4292364c, "schedule" },
	{ 0x98578ea8, "input_free_device" },
	{ 0x64cd5d16, "init_waitqueue_head" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x650fb346, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xab1d8e96, "input_unregister_device" },
	{ 0x9ef749e2, "unregister_chrdev" },
	{ 0xba9b3a6f, "class_destroy" },
	{ 0xb0412d, "kill_fasync" },
	{ 0x3ea9f1de, "__class_create" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xa51d5c08, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B7CBC60F230650415B31999");
