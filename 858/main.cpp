class Solution {
public:
	int mirrorReflection(int p, int q) {
		int times = 0;
		for(int i = 1; ; ++i){
			if((i * p) % q == 0){
				times = i;
				break;
			}
		}
		int qnum = times * p / q;
		if(qnum % 2 == 0) return 2;
		if(times % 2 == 0) return 0;
		return 1;
	}
};