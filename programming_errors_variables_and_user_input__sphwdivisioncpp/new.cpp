
bool binarySearchOfVector(vector<int>& values, int valueToFind, int& index){
    int size, first, last, middle;
    bool answer;
    size = values.size();
	first = 0;
	last = size - 1;
	middle = (first + last) / 2;
	while (first <= last){
		if(values.at(index) < valueToFind){
			first = index + 1;
		}
		else if(values.at(index) == valueToFind){
			cout << valueToFind << " found at location " << index + 1 << endl;
			answer = true;
			return answer;
		}
		else{
			 last = index - 1;
		}
		index = (first + last) / 2;
	}
	
	int main(){
	    vector<int> value {7,2,3,4,6,7);
	    binarySearchOfVector(values, 6, int& index);
	}