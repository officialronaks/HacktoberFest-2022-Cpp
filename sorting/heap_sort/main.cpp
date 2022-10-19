#include<bits/stdc++.h>
using namespace std;

void Insert(int ind,vector<int> &v){
	int par=ind/2;
	while(par>=1){
		if(v[ind]>v[par]){
			swap(v[ind],v[par]);
			ind=par;
			par=ind/2;
		}
		else break;
	}
}

void Delete(int hs,vector<int> &v){
	swap(v[1],v[hs]);
	int ind=1;
	int child1=2*ind;
	int child2=2*ind+1;
	while((child1<hs && v[ind]<v[child1]) || (child2<hs && v[ind]<v[child2])){
		if(child1<hs && child2<hs){
			if(v[child1]>=v[child2]){
				swap(v[ind],v[child1]);
				ind=child1;
				child1=2*ind;
				child2=2*ind+1;
			}
			else{
				swap(v[ind],v[child2]);
				ind=child2;
				child1=2*ind;
				child2=2*ind+1;
			}
		}
		else if(child1<hs){
			swap(v[ind],v[child1]);
			ind=child1;
			child1=2*ind;
			child2=2*ind+1;
		}
		else{
			swap(v[ind],v[child2]);
			ind=child2;
			child1=2*ind;
			child2=2*ind+1;
		}
		if(child1>=hs && child2>=hs) break;
	}
}

void heap_sort(vector<int> &v){
	int n=v.size()-1;
	int hs=1;	// hs = heap size
	for(int i=2 ; i<=n ; i++){
		Insert(i,v);
		hs++;
	}
	// The heap is formed
	for(int i=1 ; i<=n ; i++){
		Delete(hs,v);
		hs--;
	}	
}
 
int main(){
   int n;
   cin>>n;
   vector<int> v(n+1,0);
   for(int i=1 ; i<=n ; i++){
   	cin>>v[i];
   }
   heap_sort(v);
   for(int i=1 ; i<=n ; i++){
   	cout<<v[i]<<" ";
   }
   cout<<"\n";
   return 0;
}