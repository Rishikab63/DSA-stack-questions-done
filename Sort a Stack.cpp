void sortD(stack<int> &s,int elm){
    
    //basecase

    if(s.empty()){
        s.push(elm);
        return;
    }
    int n=s.top();
    if(elm>n){
        s.push(elm);
        return;
    }
    s.pop();
    sortD(s,elm);
    s.push(n);
}



void sortStack(stack<int> &stack)
{
	// Write your code here
    //base case-
    if(stack.empty())
        return;
    int elm=stack.top();
    stack.pop();
    sortStack(stack);
    sortD(stack,elm);
}
