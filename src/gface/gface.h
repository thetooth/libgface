#if defined(_WIN32)
#define false 0
#define true 1
#define bool int
#define VC_EXTRALEAN
#define WIN32_LEAN_AND_MEAN
#else
#include <stdbool.h>
#endif
#include <string.h>
#include <wchar.h>

#if !defined(_GFACE_GFACE_H)
#define _GFACE_GFACE_H

bool gface_init(char *);
wchar_t *gface_acquire();
void gface_shutdown();

#endif // !defined(_GFACE_GFACE_H)
