#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

class PriorityQueue{
	vector<int> pq;

	public:	

		void insert(int element){
			pq.push_back(element); //CBT correct heap sint 
			int cI = pq.size() - 1;

			//up hepify
			while(cI > 0){
				int pI = (cI-1)/2;
				if(pq[cI] < pq[pI]){
					swap(pq[cI],pq[pI]);
					cI=pI;
				}
				else{
					break;
				}		
			}

		}

		int removeMin(){
			if(isEmpty()){
				return 0;
			}
			int ans = pq[0];
			swap(pq[0],pq[pq.size()-1]);
			pq.pop_back();
			//down Heapify

			int pI = 0;

			while(true){

				int lcI = 2*pI + 1;
				int rcI = 2*pI + 2;
				int mini = pI;

				if(lcI < pq.size() && (pq[lcI] < pq[mini])){
					mini = lcI;
				}

				if(rcI < pq.size() && pq[rcI] < pq[mini]){
					mini = rcI;
				}

				if(mini == pI){
					break;
				}

				swap(pq[pI],pq[mini]);
				pI = mini;


			}

			return ans;

		}

		int getMin(){
			if(isEmpty()){
				return 0;
			}
			return pq.at(0);
		}

		bool isEmpty(){
			return pq.size() == 0;
		}

		int getSize(){
			return pq.size();
		}

};


int main(){

	PriorityQueue p;

	p.insert(100);
	p.insert(10);
	p.insert(15);
	p.insert(4);
	p.insert(17);
	p.insert(21);
	p.insert(67);

	cout<<p.getSize()<<endl;
	cout<<p.getMin()<<endl;

	while(!p.isEmpty()){
		cout<<p.removeMin()<<" ";
	}

	cout<<endl;

	return 0;
}