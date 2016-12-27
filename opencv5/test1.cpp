#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
	Mat lookUpTable(1, 256, CV_8U);
	uchar table[256];
	uchar* p = lookUpTable.data;
	for (int i = 0; i < 256; ++i)
	{
		p[i] = table[i];
	}

	for (int i = 0; i < times; i++)
	{
		LUT(I,lookUpTable,J);
	}

	return 0;
}