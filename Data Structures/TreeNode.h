#pragma once
template<class T>
class TNode {
public:
	T Value;
	TNode* Right;
	TNode* Left;
	TNode* Parent;
};

