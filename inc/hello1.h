#include <linux/list.h>
#include <linux/ktime.h>

struct lst_obj {
	struct list_head list;
	ktime_t timestamp_start;
	ktime_t timestamp_end;
};

void print_hello(unsigned int hello_counter);

