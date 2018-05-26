#include <stdexcept>
#include "MyExceptions.h"

using namespace std;

class MatrixField
{
	int **matrix;
	size_t length;
	size_t width;

public:
	
	CreateMatrixError matrixerror;
	MatrixField(size_t length, size_t width)
	{
		if (0 == length || 0 == width)
		{
			throw matrixerror;
		}
		int **matrix = new int *[width];
		try
		{
			for (int i = 0; i <= width; ++i)
			{
				matrix[i] = new int[length];
			}
		}
		catch (CreateMatrixError const&matrixerror)
		{
			for (int j = 0; j <= width; ++j)
			{
				delete[] matrix[j];
			}
			delete[] matrix;
			throw matrixerror;
		}
	}

	virtual ~MatrixField() 
	{
		for (int j = 0; j <= width; ++j)
		{
			delete[] matrix[j];
		}
		delete[] matrix;
	}

};