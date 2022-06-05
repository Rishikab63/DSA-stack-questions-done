void sortD(stack<int> &s,int elm){
    
    //basecase

    if(s.empty()){
        s.push(elm);   //if empty, push the fetched element into the stack
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
    if(stack.empty())   //checking if its empty
        return;
    int elm=stack.top();
    stack.pop();
    sortStack(stack);   //recursive call of the same function to fetch the element
    sortD(stack,elm);   //another function called to sort the elements.
}
