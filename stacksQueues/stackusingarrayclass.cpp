 class stackUsingArray{
	private:
	//ptr for array 
	int *data;
	//where to add new element
	int nextIndex;
	//added due to overflow check of stack
	int capacity;
	
	public:
	stackUsingArray(int totalSize){
	 data=new int[totalSize];
	 //where to place the element
	nextIndex=0;
	capacity=totalSize;	
	}

	//return the number of elements present in my stack
	int size(){
	  return nextIndex;	
	}
	bool isEmpty(){
	   /*
	 if(nextIndex==0){
		return true;	
		} 
	else{
		return false;		
	}
	*/	
	//short cut to the above conditionals
	return nextIndex==0;
	/*
		if nextIndex is the 0
		then statement evaluate true and return True
		else return false
	*/
	}
	
	//INSERT ELEMENT
	
	void push(int element){
        //check overflow and then
 	if(nextIndex==capacity){
	cout<<"Stack Full";
	return;
	}   
	data[nextIndex]=element;
	nextIndex++;  
	}
	//Delete 
	int pop(){
		if(isEmpty()){
			cout<<"Stack is Empty"<<endl;
			return INT_MIN ;
		}
		//although this sounds as data won't be deleted but actually it will create a case to overwrite if insert happens
		nextIndex--;
		return data[nextIndex];
	}
	//TOP
	int top(){
		if(isEmpty()){
			cout<<"Stack is Empty"<<endl;
			return INT_MIN; //add climits	
		}
		return data[nextIndex-1];	
	
	}

	
};
