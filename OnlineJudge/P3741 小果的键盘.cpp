//#include<iostream>
//#include<sstream>
//#include<vector>
//using namespace std;
//
//int main() {
//	// 最大化VK 操作或者不操作
//	// 输出最多出现几次
//	int n;
//	cin >> n;
//	string s;
//	cin.ignore(100, '\n');
//	// cin只去除前面的后面不管
//	// 遇到\n就停止
//	getline(cin,s);
//	
//
//	// 有先后
//	
//	
//	// 不能的原因是VV KK KV  
//	// 其中KK延续影响 VV 和KV不延续
//
//	// 存在好事成双或多吗 不存在 但有破坏风险
//	// 改掉的刚好是别人的
//	// 怎么统计 
//	// 不能修改的情况
//	// 单个没法
//	int count = 0;
//	vector<string> v_s;
//	vector<int> v_i;
//	for (int i = 0;i < s.size();i++) {
//		// 统计个数
//		// 一个句子
//		
//		if (s[i] == 'V') {
//			if (i + 1 != s.size() &&  s[i + 1] == 'K')  // 越界
//			{	//收集结束,新的开始
//				v_i.push_back(i);
//				i++;
//				count++;
//			}
//			// 下一个是V或尾部
//		}
//		// 是K 按顺序push
//
//	}
//
//
//	// v_i.size 记下所有VK组的编号
//	int init = 0,end = 0;
//	if (v_i.size())
//		end = v_i[0] - 1;
//	for (int i = 0;i < v_i.size();i++) {
//		string s1;
//		for (int j = init;j <= end;j++) // end是编号
//			s1 += s[j];
//
//		if (s1 != "")
//			v_s.push_back(s1);
//
//		if (i + 1 == v_i.size()) {
//			init = v_i[i]+2;
//			end = s.size();
//			break;
//		}
//		else if (v_i[i] - v_i[i + 1] == -2) {  // 最后一组VK后面可能还有
//			// 说明没空间
//			continue;
//		}
//		
//
//		init = v_i[i] + 2;
//		end = v_i[i + 1] - 1;
//		
//	}
//
//
//	string end_str;
//	for (int j = init;j < end;j++)
//		end_str += s[j];
//	if(end_str!="")
//	v_s.push_back(end_str);
//	//  针对句子的改动
//
//	if (v_s.size() == 0&&v_i.size()==0) {  // 没有边界是只有单KKK 和VVV...符合 VKVK...也没有边界
//		v_s.push_back(s);
//	}
//
//	for (int i = 0;i < v_s.size();i++) {
//		if (v_s[i].size() >= 3)
//		{
//			count++;
//			break;
//		}
//		if (v_s[i].size() == 1) {
//			continue;
//		}
//		if (v_s[i][0] == 'K' && v_s[i][1] == 'V') {
//			continue;
//		}
//		if (v_s[i][0] == 'V' && v_s[i][1] == 'K') {
//			continue;
//		}
//		// VV和KK
//		count++;
//		break;
//	}
//	cout << count;
//
//}