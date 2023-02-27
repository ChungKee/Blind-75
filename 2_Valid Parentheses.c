bool isValid(char * s){
    int len = strlen(s);
    char *temp = (char*)malloc(sizeof(char) * len);
    int count = 0;
    for(int i = 0; i < len; i++){
        
        if(s[i] == '(' || s[i] == '[' || s[i] == '{' ){
            temp[count] = s[i];
            count++;
        }else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if((count ) <= 0){
                return false;
            }
            switch(s[i]){
                case ')':
                    if(temp[count-1] != '('){
                        return false;
                    }
                    break;
                case ']':
                    if(temp[count-1] != '['){
                        return false;
                    }
                    break;
                case '}':
                    if(temp[count-1] != '{'){
                        return false;
                    }
                    break;
                default:
                    break;
            }
            count--;
        }
    }
    return (count == 0) ? true:false;
}
