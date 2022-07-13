class Solution {
public:
    string interpret(string command) {
        
        string ans  = "";
        
    for(int i = 0;i<command.size();i++)
    {

  if(command[i] == '('  and  command[i+1]==')'){
      ans.push_back('o');
      i++;
  }
else if(command[i]=='('  and command[i+1]=='a' and command[i+2]== 'l' and command[i+3]== ')'){
    ans.push_back('a');
    ans.push_back('l');
        i = i+3;
}
    
    else if(command[i]== 'G'){
        ans.push_back('G') ;
        
    
    }
    
    }
        return ans;
    }
};