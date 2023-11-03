#include "medidas.h"
#include <math.h>

double comprimento(double q, int e, int c){
	int dist[7] = {0, 1, 2, 3, 4, 5, 6};
	double result;
	for(c ; c < 7; c++){
		if(e >= dist[c]){
			result = q/pow(10,e - dist[c]);
			return result;
		}
		else if(e < dist[c]){
			result = q*pow(10,dist[c] - e);
			return result;	
		}
	}	
}

double volume(double q, int e, int c){
	int dist[7] = {0, 1, 2, 3, 4, 5, 6};
	double result;
	for(c ; c < 7; c++){
		if(e >= dist[c]){
			result = q/pow(10,e - dist[c]);
			return result;
		}
		else if(e < dist[c]){
			result = q*pow(10,dist[c] - e);
			return result;	
		}
	}
}

double massa(double q, int e, int c){
	int dist[7] = {0, 1, 2, 3, 4, 5, 6};
	double result;
	for(c ; c < 7; c++){
		if(e >= dist[c]){
			result = q/pow(10,e - dist[c]);
			return result;
		}
		else if(e < dist[c]){
			result = q*pow(10,dist[c] - e);
			return result;	
		}
	}
}
