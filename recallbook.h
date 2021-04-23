#include "bits/stdc++.h"
using namespace std;

namespace rb {
	// it splits numbers and makes vector of integers out of that
	std::vector<int> splitnum(int n){
		std::vector<int> v;

		while(n){
			int x = n % 10;
			v.push_back(x);
			n /= 10;
		}
		return v;
	}

	template <typename T>
	vector<T> getVec(){
		string s;
		getline(cin, s);
		stringstream ss(s);

		vector<T> vec;
		T ext;
		while(ss>>ext){
			vec.push_back(ext);
		}
		return vec;
	}

	int repeatations(vector<int> y, int num){
		int count = 0;
		for(int i=0; i < y.size(); i++){
			if(num == y[i]) count++;
		}
		return count;
	}

	set<int> repeatingvals(vector<int> y){
		set<int> reps;
		for(int i=0; i < y.size(); i++){
			int curval = y[i];
			int count = 0;
			for(int i=0; i < y.size(); i++){
				if(curval== y[i]) count++;
			}
			if(count > 1) reps.insert(curval);
		}
		return reps;
	}

	set<int> nonrepeatingvals(vector<int> y){
		set<int> reps;
		for(int i=0; i < y.size(); i++){
			int curval = y[i];
			int count = 0;
			for(int i=0; i < y.size(); i++){
				if(curval== y[i]) count++;
			}
			if(count == 1) reps.insert(curval);
		}
		return reps;
	}

}