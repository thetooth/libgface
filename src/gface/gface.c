#include "gface.h"

static bool validated = false;
static char* keys[5] = {
	"ED65D668-CE4F-4A28-99CD-FD7670C558C4",
	"5B057545-9213-4AD0-9D67-AD01FFD25C0F",
	"17ABBA43-5020-4E95-A889-84E408DB0BAA",
	"42C66D9B-9722-4D4B-9F39-3D1E43EFC96B",
	"274BD4D1-0651-4047-B249-6A97D33A4A8A"
};

bool gface_init(char *license_key)
{
	int i;
	for (i = 0; i <= 5; i++)
	{
		if (strncmp(license_key, keys[i], 35) == 0){
			validated = true;
			return true;
		}
	}
    return false;
}

wchar_t *gface_acquire()
{
    if(validated) {
        return L"( ≖‿≖)";
    }
    return L"Your gface license is inactive or otherwise invalid. If you believe this is in error, contact licensing@xn--hwg34fba.ws.";
}

void gface_shutdown()
{
    validated = false;
}
