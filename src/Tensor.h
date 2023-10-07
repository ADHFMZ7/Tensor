#ifndef TENSOR_H 
#define TENSOR_H 

#include <vector>

enum d_type {
	int32,
	int16,
	int8
};

class Tensor {

public:

	Tensor() {
	}

private:
	
	std::vector<size_t> size;	
	std::vector<size_t> strides;	
	d_type dtype;

};



#endif
