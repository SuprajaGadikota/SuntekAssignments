bool isValid(char * s){
    int n=strlen(s);
    char *stack = malloc(n);
    int i,top = 0;
    char c1,c2;
    
    for (i = 0; i < n; i++) {
        c1 = s[i];
        if (c1 == ')') {
            if (top == 0)
                return false;
            c2 = stack[--top];
            if (c2 != '(')
                return false;
        }
        else if (c1 == '}') {
            if (top == 0)
                return false;
            c2 = stack[--top];
            if (c2 != '{')
                return false;
        }
        else if (c1 == ']') {
            if (top == 0)
                return false;
            c2 = stack[--top];
            if (c2 != '[')
                return false;
        }
        else {
            stack[top++] = c1;
        }
    }
    
    return top == 0;
}