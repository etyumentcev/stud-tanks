#ifndef _IOCSTRATEGY_H_
#define _IOCSTRATEGY_H_

class IoCStrategy
{
public:
	virtual void* Create(ArrayObjects const& args) = 0;
	virtual ~IoCStrategy() noexcept = 0;
};

#endif
