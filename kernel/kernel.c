#include <kernel/tty.h>

void kernel_main(void) {
  terminal_init();
  terminal_writestring("Entering kernal_main procedure...");
}
