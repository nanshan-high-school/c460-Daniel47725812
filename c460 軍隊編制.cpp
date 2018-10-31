#include<iostream>
using namespace std;

int main(){
	int kinds, meet = 0, sky, area, distance;
	cin >> kinds;
	int army[kinds][4];
	for(int i = 0; i < kinds; i++){
		for(int j = 0; j < 4; j++){
			cin >> army[i][j];
		}
	}
	for(int i = 0; i < kinds; i++){
		for(int j = i + 1; j < kinds; j++){
			if(army[i][0] != army[j][0]){
				for(int k = j + 1; k < kinds; k++){
					if((army[i][0] != army[k][0]) && (army[k][0] != army[j][0])){
						sky = army[i][1];
						area = army[i][2];
						distance = army[i][3];
						if(sky == 0){
							if((army[j][1] == 1) || (army[k][1] == 1)){
								sky = 1;
							}
                        }
						if(area == 0){
							if((army[j][2] == 1) || (army[k][2] == 1)){
								area = 1;
							}
						}
						if(distance == 0){
							if((army[j][3] == 1) || (army[k][3] == 1)){
								distance = 1;
							}
						}
						if((sky == 1) && (area == 1) && (distance == 1)){
							meet++;
						}
					}
				}
			}
		}
	}
    cout << meet;
}