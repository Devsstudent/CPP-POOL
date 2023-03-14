#include "Base.hpp"

int	main(void)
{
	Base	*Bruh;
	C		test;
	Base	AA;

	Bruh = NULL;
	Bruh = AA.generate();
	AA.identify(Bruh);
	Base &h = test;
	AA.identify(h);
	delete Bruh;
}
