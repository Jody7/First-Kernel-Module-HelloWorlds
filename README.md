# First-Kernel-Module-HelloWorlds

After getting this to work after hours of tinkering, I want to help save people from my expirence. To compile the code, you need to first set up your kernel to build it. To do this, I did yum install kernel-devel-$(uname -r). This will instal the required dev tools and kernel source for your kernel version. Then, you can run "make" in the parent directory to compile it. If successfull, you can then load the module with "insmod hello.ko". You need root, however. This was done on Fedora 20 on 64 bit.
