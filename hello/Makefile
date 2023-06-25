include $(TOPDIR)/rules.mk

PKG_NAME:=hello
PKG_VERSION:=20230621
PKG_RELEASE=1

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)

include $(INCLUDE_DIR)/package.mk
include $(INCLUDE_DIR)/kernel.mk

define KernelPackage/hello
  SUBMENU:=Network Support
  TITLE:=Hello kernel module demo
  FILES:=$(PKG_BUILD_DIR)/src/hello.ko
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	cp -a src $(PKG_BUILD_DIR)/
endef

define Build/Compile
	$(MAKE) -C "$(LINUX_DIR)" CROSS_COMPILE="$(TARGET_CROSS)" ARCH="$(LINUX_KARCH)" \
		SUBDIRS="$(PKG_BUILD_DIR)/src" M="$(PKG_BUILD_DIR)/src" \
		modules
endef

$(eval $(call KernelPackage,hello))

