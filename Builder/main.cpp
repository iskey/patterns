#include "Builder.h"
int main()
{
	ThinBuilder thin;
	Director director(&thin);

	director.Create();
	return 0;
}
