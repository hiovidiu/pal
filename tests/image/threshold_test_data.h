// File threshold_test_data.h
// 

int pixels = 21;
float in[21] = {
		0.0f, 0.0f, 0.0f, 
		0.5f, 0.5f, 0.5f, 
		1.0f, 1.0f, 1.0f, 
		1.0f, 0.0f, 0.0f, 
		0.0f, 1.0f, 0.0f, 
		0.0f, 0.0f, 1.0f, 
		0.333f, 0.333f, 0.333f,
		};

float in_threshold = 0.5f;


float out[21] = {
		0.0f, 0.0f, 0.0f, 
		1.0f, 1.0f, 1.0f, 
		1.0f, 1.0f, 1.0f, 
		1.0f, 0.0f, 0.0f, 
		0.0f, 1.0f, 0.0f, 
		0.0f, 0.0f, 1.0f, 
		0.0f, 0.0f, 0.0f,
		};

int out_size = 21;
