#### Leetcode
用于个人学习，欢迎针对代码提出改进
不当之处欢迎指正
###关于指针
首先从最简单的int类型来讲
int num=0;
int *p = &num;
则p为指向num的一个指针，p与&num等价，而*p与num等价，&p则为p这个指针的地址
而对于数组来说，
double array ={0,1,2};
众所周知，array中存放的是数组的起始地址，实际上是&array[0]，而&array虽然值与array相同，但在意义上并不相同，在&array中，array是被当作数组这种数据类型来看待的，因此&array实际上是数组的地址，
具体区别体现在&array+1与&(array+1)上，前者+1加的是整个数组的地址大小，而后者+1加的是数组当中单个元素的地址大小