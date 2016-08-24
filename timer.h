#include <ctime>

namespace tensorflow
{
	class timer
	{
	public:
		timer();
		double initGPU();
		void initGPUStart();
		void initGPUEnd();

		double memcpyHostToDevice();
		void memcpyHostToDeviceStart();
		void memcpyHostToDeviceEnd();

	private:
		double tInitGPU;
		clock_t tInitGPUStartStamp;
		clock_t tInitGPUEndStamp;
		
		double tMemH2D;
		clock_t tMemH2DStartStamp;
		clock_t tMemH2DEndStamp;
	};
}
