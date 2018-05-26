#ifndef _MATRIXFIELD_H_
#define _MATRIXFIELD_H_

class MatrixField 
{
	int **matrix;
	size_t length;
	size_t width;

public:

	MatrixField(size_t, size_t);
	virtual ~MatrixField();
};

#endif
