#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

//for the implementation of the hash function. The key is passed through a hash function to get an integer. 
//in a bucket array, the keyvalue pair is stored. 

//hash function has two things, the hash code and teh compression function 
// hash code good distribution can return any integer, the compression function convert the number to the size of the bucket array %bucket_size

//int identity function
//string, ascii sum of individual elements //sum of first 3 character
//string is converted to a base to the power p 
//for abc a.p^3 + b.p^2 + c*p^1 + d p is a prime no like 29,31,37 to get a good distribution 

//collision there is two ways to take care of it 
//closed hashing and open hashing
//closed hashing : create a linked list at that point. Each bucket is a head of a linked list(sepereate chains)
//openhsdhin : alternate insex is found
//h(K) = H(k) + f(i)
//linear probing f(i) = i //H(k) + f(i)%n // this coudl cause clustering 
//quadratic probing //f(i) = i2
//whenloadfactor becomes >0.7 we do re hashing to improve performance 


template <typename V>
class MapNode{

	public: 
		string key;
		V value;
		MapNode* next;

		MapNode(string key, V value){
			this->key = key;
			this->value = value;
		}

		~MapNode(){
			delete next;
		}
};


template <typename V>

class myMap{
	private: 
		MapNode<V>** buckets;
		int count;
		int numBuckets;

		int getBucketIndex(string key){

			int hashcode = 0;
			int base = 1;
			int p = 37;

			for (int i = key.size()-1; i>=0; i++){
					hashcode += key[i] * base;
					base = base * p;
					hashcode = hashcode % numBuckets;
					base = base	% numBuckets;
			}

			return hashcode % numBuckets;
		}

	public:

		void rehash(){
			myMap<V>** temp = buckets;
			temp = new myMap<V>*[2*numBuckets];
			for (int i = 0; i < 2*numBuckets; i++){
				buckets[i] = NULL;
			}
			int oldBucketSize = numBuckets;
			numBuckets *= 2;
			count = 0;

			for (int i = 0; i < oldBucketSize; i++){
				MapNode<V>* head = temp[i];
				while(head!=NULL){
					string key = head->key;
					V value = head->value;
					insert(key,value);
					head = head->next;
				}
			}

			for (int i = 0; i < oldBucketSize; i++){
				delete temp[i];
			}

			delete[] temp;
		}

		myMap(){
			count = 0;
			numBuckets = 5;
			buckets = new MapNode<V>*[numBuckets];
			for (int i = 0; i < numBuckets; ++i){
				buckets[i] = NULL;
			}
		}

		~myMap(){
			for (int i = 0; i < numBuckets; ++i){
				delete buckets[i];
			}
			delete[] buckets;

		}

		int size(){
			return count;
		}

		V getValue(string key){

			int bucketIndex = getBucketIndex(key);
			MapNode<V>*head = buckets[bucketIndex];
			while(head != NULL){
				if(head->key == key){
					return head->value;
				}
				head = head->next;
			}

			return 0;
		}

		double getLoadFactor(){
			double loadFactor = (1.0*count)/numBuckets;
			return loadFactor;
		}

		void insert(string key, V value){
			int bucketIndex = getBucketIndex(key);
			MapNode<V> *head = buckets[bucketIndex];
			while(head->next!=NULL){
				if(head->key == key){
					head->value = value;
				}
				head = head->next;
			}

			MapNode<V> *node = new MapNode<V>(key,value);
			node->next = buckets[bucketIndex];
			buckets[bucketIndex] = node;
			count++;
			double loadFactor = (1.0*count)/numBuckets;
			if(loadFactor > 0.7){
				rehash();
			}
		}

		V remove(string key){

			int bucketIndex = getBucketIndex(key);
			MapNode<V> *head = buckets[bucketIndex];
			MapNode<V> *prev = NULL;

			while(head!=NULL){
				if(head->key == key){
					if(prev == NULL){
						buckets[bucketIndex] = head->next;
					}
					else{
						prev->next = head->next;				
					}
					V value = head->value;
					head->next = NULL;
					delete head;
					count--;
					return value;
				}
				prev = head;
				head = head->next;
			}

			return 0;
		}

};

int main(){

	myMap<int> ourmap;

	for (int i = 0; i < 10; i++){
		char c = '0' + i;
		string key = "abc";
		key = key + c;
		int value = i+1;
		ourmap.insert(key,value);	
	}

	cout<<ourmap.size()<<endl;

	return 0;
}