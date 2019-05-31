char code[] = "\x31\xdb\x31\xc0\xb0\x01\xcd\x80";

int main(int argc, char **argv)
{
	int (*ret)() = (int(*)())code;
	ret();
}
