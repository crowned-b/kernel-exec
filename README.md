# kernel-exec
Kernel module to exec arbitrary code. You cannot insert kernel modules without sudo priveleges.

# Requirements

```sudo apt-get install gcc build-essential```

```sudo apt-get install linux-headers-`uname -r`\```

# Compile

```make```

# Utilize

```sudo insmod module.ko``` to execute code.

```sudo rmmod module``` to remove module.

If the module works, the file ```file123``` should appear in ```/tmp/```

# Customize

Edit the string after ```#define COMMAND``` to your shell command. All commands are run as root.
