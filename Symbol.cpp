class Symbol{
private:
	int level, exp, daily, goal, type;
public:
	void setValue(int _level, int _exp, int _daily, int _goal, int _type){
		level = _level;
		exp = _exp;
		daily = _daily;
		goal = _goal;
		type = _type;
	}
	int getLevel(){
		return level;
	}
	int getExp(){
		return exp;
	}
	int calcTime(){
		int i, exp_sum = 0;
		for(i=level; i<goal;i++){
			exp_sum+= need[i];
		}
		exp_sum -= exp;
		return ceil((double)exp_sum/daily);
	}
	long long calcMeso(){
		int i;
		long long meso_sum = 0;
		if(type == 0){
			for(i=level; i<goal;i++){
				meso_sum += price0[i];
			}
		}
		else{
			for(i=level; i<goal;i++){
				meso_sum += price[i];
			}
		}
		return meso_sum;
	}
};