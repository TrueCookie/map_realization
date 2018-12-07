//#pragma once
class collection {
protected:
	collection() = default;
	virtual ~collection() {}

	virtual bool is_empty() = 0;
	virtual size_t size() = 0;
	virtual void reverse() = 0;
};

