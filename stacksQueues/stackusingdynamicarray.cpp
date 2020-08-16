
//task is remove the constraint on size of array defining by user and make it dynamic 
 class stackUsingArray{
	private:
	//ptr for array 
	int *data;
	//where to add new element
	int nextIndex;
	//added due to overflow check of stack
	int capacity;
	
	public:
	stackUsingArray(){
	//capacity=4;
	   data=new int[4];//data=new int[capacity];
	 //where to place the element
	nextIndex=0;
	capacity=4;
	
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
	//cout<<"Stack Full";
	//return;
		int *newData=new int[2*capacity];
		for(int i=0 ;i<capacity;i++){
			newData[i]=data[i];
		}
		capacity*=2;
		//the below two statement can not be interchanged since if we point to newdata then is delete is performed
		//then it will delete the newData wala array not previous since it was lost and and have the memory in heap too
		//but we cannot access that memory SO BE WARNED!!
		delete []data;
		data=newData;
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
