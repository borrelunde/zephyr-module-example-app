#include <app_version.h>
#include <zephyr/kernel.h>
#include <module-example/version.h>

int main(void) {
    printk("Module example application version %s initialized on board %s!\r\n",
           APP_VERSION_STRING, CONFIG_BOARD);

	module_example_print_version();
    return 0;
}