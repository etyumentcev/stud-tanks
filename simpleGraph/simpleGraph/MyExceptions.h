#ifndef _MYEXCEPTIONS_H_
#define _MYEXCEPTIONS_H_

class CreateMatrixError : public std::exception
{
public:
	char* const Reason() const;
};

#endif