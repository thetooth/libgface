#include <assert.h>
#include "../gface/gface.h"

int main(){
	assert(gface_init("17ABBA43-5020-4E95-A889-84E408DB0BAA") != false);
	
	wprintf(L"%ls", gface_acquire());
	
	gface_shutdown();
	return 0;
}