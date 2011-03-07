--- b/arch/arm/mach-s5pv210/mach-aries.c
+++ a/arch/arm/mach-s5pv210/mach-aries.c
@@ -2154,12 +2155,12 @@ static void smdkc110_power_off(void)
 			printk(KERN_EMERG
 			       "%s: TA or USB connected, rebooting...\n",
 			       __func__);
-			kernel_sec_clear_upload_magic_number();
-			kernel_sec_hw_reset(TRUE);
+			//kernel_sec_clear_upload_magic_number();
+			//kernel_sec_hw_reset(TRUE);
 			printk(KERN_EMERG "%s: waiting for reset!\n", __func__);
 			while (1) ;
 		}
-		kernel_sec_clear_upload_magic_number();
+		//kernel_sec_clear_upload_magic_number();
 		// wait for power button release
 		if (gpio_get_value(GPIO_N_POWER)) {
 			printk(KERN_EMERG "%s: set PS_HOLD low.\n", __func__);
