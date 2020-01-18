int vals[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
char* roms[]= { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

char* intToRoman(int num) {
	char* buff = malloc(sizeof(char)*16);
	buff[0] = 0;
	size_t index = 0;
	for (int i = 0; i < 13; i++) {
		while (num >= vals[i]) {
			strcat(buff, roms[i]);
			num -= vals[i];
		}
	}
	return buff;
}
