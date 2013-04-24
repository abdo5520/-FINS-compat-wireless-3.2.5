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
	{ 0xa38b55e8, "bus_register" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x552137ab, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd91b45cd, "driver_register" },
	{ 0xa5cbb81f, "dev_set_drvdata" },
	{ 0x7297c964, "pci_disable_device" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe26e45d5, "pci_release_regions" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x91715312, "sprintf" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x9b73068a, "pci_set_master" },
	{ 0xf10de535, "ioread8" },
	{ 0x67d6dd44, "pci_restore_state" },
	{ 0x23b9aa2f, "device_register" },
	{ 0x55ecc86b, "pci_iounmap" },
	{ 0x50eedeb8, "printk" },
	{ 0x4ae2a33b, "driver_unregister" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe93c9d04, "pci_bus_write_config_dword" },
	{ 0xb4f1c8a9, "bus_unregister" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0x3af98f9e, "ioremap_nocache" },
	{ 0x8a839340, "pci_bus_read_config_dword" },
	{ 0x727c4f3, "iowrite8" },
	{ 0x74c86851, "pci_unregister_driver" },
	{ 0x1dd8093a, "kmem_cache_alloc_trace" },
	{ 0x1214f3ac, "pci_set_power_state" },
	{ 0x8c183cbe, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc08ea77, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xb6e4b709, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xba38dac1, "device_unregister" },
	{ 0x69b0b3d5, "pci_choose_state" },
	{ 0xea4929d4, "pci_iomap" },
	{ 0x37c67291, "dev_set_name" },
	{ 0x436c2179, "iowrite32" },
	{ 0xaec1d320, "pci_enable_device" },
	{ 0xcc6711f0, "dev_get_drvdata" },
	{ 0xe484e35f, "ioread32" },
	{ 0x24b84423, "pci_save_state" },
	{ 0xa7f92105, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FEAB8743063E94BFBEB09E2");
