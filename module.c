#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kmod.h>
#include <linux/init.h>
#define COMMAND "touch /tmp/modules_works"

static int __init mod(void)
{
    char * envp[] = { "HOME=/", NULL };
    char * argv[] = { "/bin/bash", "-c", COMMAND, NULL };
    call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);
    return 0;
}
static void __exit mod_cleanup(void)
{
}

module_init(mod);
module_exit(mod_cleanup);
