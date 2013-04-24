################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include net/wireless/subdir.mk
-include net/rfkill/subdir.mk
-include net/mac80211/subdir.mk
-include net/bluetooth/subdir.mk
-include net/bluetooth/rfcomm/subdir.mk
-include net/bluetooth/hidp/subdir.mk
-include net/bluetooth/cmtp/subdir.mk
-include net/bluetooth/bnep/subdir.mk
-include drivers/ssb/subdir.mk
-include drivers/net/wireless/zd1211rw/subdir.mk
-include drivers/net/wireless/wl12xx/subdir.mk
-include drivers/net/wireless/wl1251/subdir.mk
-include drivers/net/wireless/rtlwifi/subdir.mk
-include drivers/net/wireless/rtlwifi/rtl8192se/subdir.mk
-include drivers/net/wireless/rtlwifi/rtl8192de/subdir.mk
-include drivers/net/wireless/rtlwifi/rtl8192cu/subdir.mk
-include drivers/net/wireless/rtlwifi/rtl8192ce/subdir.mk
-include drivers/net/wireless/rtlwifi/rtl8192c/subdir.mk
-include drivers/net/wireless/rtl818x/rtl8187/subdir.mk
-include drivers/net/wireless/rtl818x/rtl8180/subdir.mk
-include drivers/net/wireless/rt2x00/subdir.mk
-include drivers/net/wireless/subdir.mk
-include drivers/net/wireless/p54/subdir.mk
-include drivers/net/wireless/orinoco/subdir.mk
-include drivers/net/wireless/mwifiex/subdir.mk
-include drivers/net/wireless/libertas_tf/subdir.mk
-include drivers/net/wireless/libertas/subdir.mk
-include drivers/net/wireless/iwmc3200wifi/subdir.mk
-include drivers/net/wireless/iwlwifi/subdir.mk
-include drivers/net/wireless/iwlegacy/subdir.mk
-include drivers/net/wireless/ipw2x00/subdir.mk
-include drivers/net/wireless/brcm80211/brcmutil/subdir.mk
-include drivers/net/wireless/brcm80211/brcmsmac/subdir.mk
-include drivers/net/wireless/brcm80211/brcmsmac/phy/subdir.mk
-include drivers/net/wireless/brcm80211/brcmfmac/subdir.mk
-include drivers/net/wireless/b43legacy/subdir.mk
-include drivers/net/wireless/b43/subdir.mk
-include drivers/net/wireless/ath/subdir.mk
-include drivers/net/wireless/ath/carl9170/subdir.mk
-include drivers/net/wireless/ath/ath9k/subdir.mk
-include drivers/net/wireless/ath/ath6kl/subdir.mk
-include drivers/net/wireless/ath/ath5k/subdir.mk
-include drivers/net/usb/subdir.mk
-include drivers/net/ethernet/broadcom/subdir.mk
-include drivers/net/ethernet/atheros/atlx/subdir.mk
-include drivers/net/ethernet/atheros/atl1e/subdir.mk
-include drivers/net/ethernet/atheros/atl1c/subdir.mk
-include drivers/misc/eeprom/subdir.mk
-include drivers/bluetooth/subdir.mk
-include drivers/bcma/subdir.mk
-include compat/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: compatWireless

# Tool invocations
compatWireless: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc  -o"compatWireless" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) compatWireless
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
