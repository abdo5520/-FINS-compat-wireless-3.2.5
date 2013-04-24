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
	{ 0xa131264b, "ssb_dma_translation" },
	{ 0x2c87746f, "device_remove_file" },
	{ 0x552137ab, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6736bc9, "pcmcia_enable_device" },
	{ 0xba2a8597, "mem_map" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xd0d8621b, "strlen" },
	{ 0xbd1d8d3d, "ieee80211_queue_work" },
	{ 0xa5cbb81f, "dev_set_drvdata" },
	{ 0x212fcc12, "led_classdev_register" },
	{ 0x1ec7461b, "pcmcia_register_driver" },
	{ 0x3d72a85e, "dma_set_mask" },
	{ 0x99b8ffc6, "sdio_enable_func" },
	{ 0xdec79452, "bcma_core_pci_irq_ctl" },
	{ 0x4c6cba4f, "sdio_claim_irq" },
	{ 0xfc4e97b0, "sock_release" },
	{ 0x3cbecd57, "ieee80211_rts_get" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xfd11863, "ssb_commit_settings" },
	{ 0x2a8a11b9, "ieee80211_beacon_get_tim" },
	{ 0x4792c572, "down_interruptible" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x10818aa8, "ieee80211_unregister_hw" },
	{ 0x5a78a396, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0x7be9805, "mutex_unlock" },
	{ 0x827d1e12, "ssb_bus_powerup" },
	{ 0x88945b5d, "ssb_bus_pcmciabus_register" },
	{ 0x2d231503, "ssb_bus_sdiobus_register" },
	{ 0x9953cb2c, "wiphy_rfkill_start_polling" },
	{ 0x883efd6, "__ieee80211_get_assoc_led_name" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc7e56cd6, "__ssb_driver_register" },
	{ 0x810b3618, "param_ops_string" },
	{ 0xf3b95800, "ieee80211_stop_queue" },
	{ 0xd85fdbf5, "ieee80211_tx_status" },
	{ 0x1844bf9e, "netlink_kernel_create" },
	{ 0x2bc95bd4, "memset" },
	{ 0xabb6bf94, "dev_alloc_skb" },
	{ 0x81a57b06, "ssb_driver_unregister" },
	{ 0xec892b16, "ssb_chipco_gpio_control" },
	{ 0x3d3d1a77, "dev_err" },
	{ 0x1abdd99, "bcma_core_dma_translation" },
	{ 0x2b86b5ef, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0xb32925af, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x76a57e7, "ssb_device_enable" },
	{ 0xcf8ec6cd, "pcmcia_request_window" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2385aeda, "ieee80211_rx" },
	{ 0x150f4743, "mutex_lock" },
	{ 0xaab516a9, "netlink_unicast" },
	{ 0x73aa6ddf, "bcma_core_set_clockmode" },
	{ 0x87672184, "dma_release_from_coherent" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x7ff8ea16, "__bcma_driver_register" },
	{ 0xb41563ee, "skb_pull" },
	{ 0x523a560d, "ieee80211_ctstoself_get" },
	{ 0xb050dc66, "init_net" },
	{ 0x4c759827, "byte_rev_table" },
	{ 0xbc182a6e, "ieee80211_queue_delayed_work" },
	{ 0x96f2aefc, "dev_kfree_skb_any" },
	{ 0x19d1b1fb, "dma_alloc_from_coherent" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x70929912, "device_create_file" },
	{ 0x26ede9fe, "sdio_unregister_driver" },
	{ 0xeef80e0a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xae86c332, "bcma_chipco_gpio_control" },
	{ 0xa82edc2a, "_dev_info" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x9da8fdec, "__ieee80211_get_rx_led_name" },
	{ 0xabe3b815, "__alloc_skb" },
	{ 0x3afe5e1c, "bcma_core_is_enabled" },
	{ 0xcaa216f8, "ssb_pmu_set_ldo_voltage" },
	{ 0xf31ab008, "ssb_device_disable" },
	{ 0xb0843d12, "bcma_core_enable" },
	{ 0x5655b3fe, "sdio_release_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a2add8e, "wiphy_rfkill_set_hw_state" },
	{ 0xb196a8be, "bcma_driver_unregister" },
	{ 0x588bc3e4, "bcma_core_pll_ctl" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x624a6406, "hwrng_register" },
	{ 0x30526aa7, "__ieee80211_get_tx_led_name" },
	{ 0x8c8579c5, "ssb_set_devtypedata" },
	{ 0x1dd8093a, "kmem_cache_alloc_trace" },
	{ 0xb024f37f, "ssb_bus_resume" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x129697a2, "ieee80211_wake_queue" },
	{ 0x96969aab, "ieee80211_generic_frame_duration" },
	{ 0xed468cf7, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd3634403, "ssb_bus_unregister" },
	{ 0xf524bafb, "ieee80211_register_hw" },
	{ 0x6671ae78, "led_classdev_unregister" },
	{ 0xc6eadb03, "ssb_bus_suspend" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xe0c43e66, "ieee80211_alloc_hw" },
	{ 0xf7904300, "dma_supported" },
	{ 0x15ad6099, "pcmcia_map_mem_page" },
	{ 0xc4554217, "up" },
	{ 0x1907f8dc, "pcmcia_unregister_driver" },
	{ 0x164bb8a6, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x6f2deb77, "ieee80211_free_hw" },
	{ 0xf7b6170c, "ssb_bus_may_powerdown" },
	{ 0x3b92d5f3, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8235805b, "memmove" },
	{ 0x29476c54, "sdio_register_driver" },
	{ 0xad507af9, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0xdcb6a56c, "consume_skb" },
	{ 0x747b7add, "sdio_claim_host" },
	{ 0x5e1fa148, "ssb_pmu_set_ldo_paref" },
	{ 0x7267db00, "hwrng_unregister" },
	{ 0xfbf54f98, "pcmcia_disable_device" },
	{ 0x23cf8d1, "skb_put" },
	{ 0x6e92e15a, "ssb_device_is_enabled" },
	{ 0xcc6711f0, "dev_get_drvdata" },
	{ 0x40572a2c, "bcma_core_disable" },
	{ 0x3145bb71, "sdio_set_block_size" },
	{ 0xbfe6b47e, "release_firmware" },
	{ 0xc0b850a2, "dma_ops" },
	{ 0x5c28cca5, "ieee80211_get_tkip_p1k_iv" },
	{ 0x2edf7d69, "ieee80211_get_response_rate" },
	{ 0x6ca7b885, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x98e74405, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ssb,pcmcia,mac80211,bcma,cfg80211";

MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");
MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("pcmcia:m02D0c0448f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02D0c0476f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "8AA1F430630BC8AAD1119EF");
