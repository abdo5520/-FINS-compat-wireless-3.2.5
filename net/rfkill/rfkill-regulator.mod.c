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
	{ 0x9e770581, "module_layout" },
	{ 0x4172a276, "platform_driver_register" },
	{ 0xa82edc2a, "_dev_info" },
	{ 0xa5cbb81f, "dev_set_drvdata" },
	{ 0x25277497, "rfkill_register" },
	{ 0xa4b9e8fa, "rfkill_alloc" },
	{ 0x1dd8093a, "kmem_cache_alloc_trace" },
	{ 0x552137ab, "kmalloc_caches" },
	{ 0x5e63b25, "regulator_get_exclusive" },
	{ 0x3d3d1a77, "dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xd85ac634, "regulator_put" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xcc6711f0, "dev_get_drvdata" },
	{ 0xd64e6f3c, "platform_driver_unregister" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0x8a5c7a80, "regulator_enable" },
	{ 0xda3a7ca9, "regulator_is_enabled" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5C2FA7A8E72EDEA8DA1815E");
