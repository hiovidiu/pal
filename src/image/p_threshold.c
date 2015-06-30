#include <pal.h>

/**
 * Single-channel thresholding
 *
 * A threshold is applied to each value. The output value is 0 if the value is below the threshold, 1 otherwise.
 *
 * @param x     Pointer to input stream, a float array of size 'pixels'
 *
 * @param r     Pointer to output image, a float array of size 'pixels'
 *
 * @param rows  Number of rows in input image
 *
 * @param cols  Number of columns in input image
 *
 */

void p_threshold_f32(const float *x, float *r, int pixels, const float threshold)
{
	int i;
	const float* px = x;
	float *pr = r;

	for (i=0; i < pixels; i++)
	{ 
		*pr++ = (*px++ >= threshold)?1:0;
	}
}
