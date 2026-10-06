class Solution {
public:
    string trafficSignal(int timer) {
        string color="";
        if(timer==0){
            color="Green";
        }
        else if(timer==30){
            color="Orange";
        }
        else if(timer>30 && timer<=90){
            color="Red";
        }

        else {
            color="Invalid";
        }
        return color;
    }
};

