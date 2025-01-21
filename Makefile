GPPPARAMS= -m32 -fno-use-cxa-atexit -nostdlib -fno-builtin -fno-rtti -fno-exeptions -fno-leading-underscore
ASPARAMS =--32
objects = loader.o gdt.o kernel.o
%.o:%.cpp
    g++ $(GPPPARAMS) -o $@ -c $<

%.o:%.s
    as $(ASPARAMS) -o $@ $<

	mykernel.bin: linker.ld $(objects)
	           ld $(LDPARAMS) -T $< -o $@ $(objects)

install: mykernel.bin
          sudo cp $< /boot/mykernel.bin