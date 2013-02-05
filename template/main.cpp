#include <stdlib.h>

int main(int argc, const char* argv[])
{
    try
    {

    	return EXIT_SUCCESS;
    }

    catch(const std::exception& ex)
    {
    	std::cerr << "ERROR" << ex.what();
    	return EXIT_FAILURE;
    }

    catch(...)
    {
        return EXIT_FAILURE;
    }
}
