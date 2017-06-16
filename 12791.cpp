/*
 * 12791.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Album{

	int year;
	string name;

	Album(int y, string n){
		this->year = y;
		this->name = n;
	}

};

vector<Album> v;

void makeAlbum(){

	v.push_back(Album(1967,"DavidBowie"));
	v.push_back(Album(1969, "SpaceOddity"));
	v.push_back(Album(1970, "TheManWhoSoldTheWorld"));
	v.push_back(Album(1971, "HunkyDory"));
	v.push_back(Album(1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"));
	v.push_back(Album(1973, "AladdinSane"));
	v.push_back(Album(1973, "PinUps"));
	v.push_back(Album(1974, "DiamondDogs"));
	v.push_back(Album(1975, "YoungAmericans"));
	v.push_back(Album(1976, "StationToStation"));
	v.push_back(Album(1977, "Low"));
	v.push_back(Album(1977, "Heroes"));
	v.push_back(Album(1979, "Lodger"));
	v.push_back(Album(1980, "ScaryMonstersAndSuperCreeps"));
	v.push_back(Album(1983, "LetsDance"));
	v.push_back(Album(1984, "Tonight"));
	v.push_back(Album(1987, "NeverLetMeDown"));
	v.push_back(Album(1993, "BlackTieWhiteNoise"));
	v.push_back(Album(1995, "1.Outside"));
	v.push_back(Album(1997, "Earthling"));
	v.push_back(Album(1999, "Hours"));
	v.push_back(Album(2002, "Heathen"));
	v.push_back(Album(2003, "Reality"));
	v.push_back(Album(2013, "TheNextDay"));
	v.push_back(Album(2016, "BlackStar"));
}

int main(){

	int Q;
	cin >> Q;
	makeAlbum();

	while(Q--){

		int S, E;
		cin >> S >> E;
		int cnt = 0;
		for(int i=0; i<v.size(); i++){
			if(S <= v.at(i).year && v.at(i).year <= E){
				cnt++;
			}
		}
		cout<<cnt<<endl;
		for(int i=0; i<v.size(); i++){
			if(S <= v.at(i).year && v.at(i).year <= E){
				cout<<v.at(i).year<<' '<<v.at(i).name<<endl;
			}
		}
	}

	return 0;
}


