#pragma once
#include <vector>

// list of entropy values to be removed
//typedef std::vector<int> 

template <class T>
class WaveFunctionCollapse {
	WaveFunctionCollapse(std::vector<T> entropyList, int size) {
		for (int i = 0; i < size; i++) {
			children.push_back(new CollapseChild<T>(entropyList));
		}
	}
	std::vector<CollapseChild<T>*> children;

};

template<class T>
class CollapseChild {
	CollapseChild(std::vector<T> list) {
		this->entropyList = list;
		this->states = list; // as we haven't collapsed yet, all states r possible
	}
	// entropy, collapse func
	std::vector<T> entropyList;
	std::vector<T> states;
};