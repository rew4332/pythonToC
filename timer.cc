#include "timer.h"
#include <ctime>
#include<iostream>

namespace tensorflow
{
	timer::timer()
	{
		tInitGPU = 0;
		tMemH2D = 0;
	}

	double timer::initGPU()
	{
		return this->tInitGPU;
	}

	void timer::initGPUStart()
	{
		tInitGPUStartStamp = clock();
	}

	void timer::initGPUEnd()
	{
		tInitGPUEndStamp = clock();
		this->tInitGPU = tInitGPUEndStamp-tInitGPUStartStamp;
	}
	
	double timer::memcpyHostToDevice()
	{
		return this->tMemH2D;
	}

	void timer::memcpyHostToDeviceStart()
	{
		//tMemH2DStartStamp = now();
	}

	void timer::memcpyHostToDeviceEnd()
	{
		//self.tMemH2D += now() - tInitGPUStartStamp;
	}
}
