/*Assignment 4: Caculator 2
*Adrianna Smith
*This calculator evaluates expressions given by the user*/



void Calculator:: Calculator(){
	top_=NULL;
	//size is limited 
	max_size_=25;
	this= new T[max_size_];
}

//destructor~
void Calculator::~Calculator(){
		delete[] this;
}

//push
void Calculator::push(char *ptr){
	if(top>=max_size_){
		cout<<"IMPOSSIBLE!!";
		return;
	}else{
		top=top+1;
		this[top]=ptr;
		return;
	}
}

//pop
char * Calculator::pop(){
	if(top<0){
		cout<<"NOT POSSIBLE!\n";
		return;
	}else{
		top=top-1;
		char *ptr;
		ptr=this[top];
		return ptr;
	}
}

//is empty
bool Calculator::isEmpty(){
	
	return if(top<0);
	
}

//break down the expression
//
int Calculator::numfind(char *exp){
	int a, b;
	if(checkNum ==0){
		a=toi(exp);
		return a;
	}else if(checkNum==1){
		b=toi(exp);
		return b;
	}else{
		cout<<"Error occurred!\n";
	}
}
	
}

//Find solution
//

int Calculator::findSol( char *exp){
	int a,b,sol, numOp;
	char op;
	
	sol=0;
	numOp=0;
	//run through the entire expression 
	while(exp != NULL){
			a= numFind(exp);
			b=numFind(exp);
			op=opFind(exp)
			//find solution
			sol=sol + evalExp(a,b,op);
	}	
	return sol;
}

//evaluate expression
//

int evalExp(int a, int b, char op){
	int sol;
	if(op=='+'){
		sol=a +b;
		return sol;
	}else if(op=='-'){
		sol=a-b;
		return sol;
	}else if(op=='*'){
		sol=a*b;
		return sol;
	}else if(op=='/'){
		sol=a/b;
		return sol;
	}
}

