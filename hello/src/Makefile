KVER ?= $(shell uname -r)
KERNSRC ?= /lib/modules/$(KVER)/build
CC ?= gcc

obj-m := hello.o

all:
	make -C $(KERNSRC) M=$(shell pwd) modules

clean:
	find . \( -name '.tmp_versions' -o -name '*.o' -o -name '*.ko' -o -name '.*.cmd' \
		-o -name '.*.d' -o -name '*.mod.c' -o -name '*.symvers' -o -name '*~' \) -print | xargs rm -fr;
	rm -f modules.order
