#include <stdio.h>
#include <glib.h>
#include "../asrt/asrt.h"

void test_g_slice()
{
	struct Njak{
		int x, y;
	};
	struct Njak *njak =g_slice_new(struct Njak);
	njak->x = 55;
	njak->y = 777;
	struct Njak *njak2 = g_slice_dup(struct Njak, njak);
	ASRT_int(55, njak2->x);
	ASRT_int(777, njak2->y);
	g_slice_free(struct Njak, njak);
	g_slice_free(struct Njak, njak2);
}

int
main(int argc, char** argv) {
	test_g_slice();
	printf("All Ok!\n");
	return 0;
}