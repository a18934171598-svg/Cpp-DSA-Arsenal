//#include "SortTest.h"
//
//// 辅助函数：复制数组（保证每个排序都用同样的原始数据）
//template<typename T,typename B>
//void copyArray(const T src, B dest, int len) {
//    for (int i = 0; i < len; i++)
//        dest[i] = src[i];
//}
//void shellCopy(int src[], int dest[], int len) {
//    for (int i = 1; i <= len; i++)
//        dest[i] = src[i-1];
//}
//
//int main() { // 保证正确性
//    static int arr[5000000];       // 原始数据
//    static int tempArr[5000001];   // 每次排序用的副本
//    srand(time(0));
//
//    int length = sizeof(arr) / sizeof(int);
//    cout << "==== 数组长度：" << length << " ====" << endl;
//
//    // 生成随机数
//    cout << "正在生成随机数组..." << endl;
//    for (int i = 0; i < length; i++) {
//        arr[i] = rand() % 1000000000;
//        //arr[i] = 10;
//    }
//    cout << "随机数组生成完成！" << endl << endl;
//
//    clock_t start, end;
//    double time_use;
//
//    
// //   copyArray(arr, tempArr, length);
// //   start = clock();
// //   BubbleSort(tempArr, length);        // 你的冒泡
// //   end = clock();
// //   time_use = (double)(end - start) / CLOCKS_PER_SEC;
// //   cout << "冒泡排序耗时：" << time_use << " 秒" << endl;
// //  /* for (int i = 0;i < length;i++) {
//	//	cout << tempArr[i] << " ";
//	//}*/
// //   cout << endl;
//    // ==========================================
//    // 2. 插入排序
//    // ==========================================
//    //copyArray(arr, tempArr, length);
//    //start = clock();
//    //InsertSort(tempArr, length);        // 你的插入
//    //end = clock();
//    //time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    //cout << "插入排序耗时：" << time_use << " 秒" << endl;
//    ///*for (int i = 0;i < length;i++) {
//    //    cout << tempArr[i] << " ";
//    //}*/
//    //cout << endl;
// 
//    // 3. 希尔排序
//
//    shellCopy(arr, tempArr, length);
//    start = clock();
//    ShellSort(tempArr, length);         // 你的希尔
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "希尔排序耗时：" << time_use << " 秒" << endl;
//    /*for (int i = 1;i <= length;i++) {
//        cout << tempArr[i] << " ";
//    }*/
//    cout << endl;
// 
//    // 4. 快速排序
//
//    copyArray(arr, tempArr, length);
//    start = clock();
//    QuickSort(tempArr, 0, length - 1);  // 你的快排
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "快速排序耗时：" << time_use << " 秒" << endl;
//
//    /*for (int i = 0;i < length;i++) {
//        cout << tempArr[i] << " ";
//    }*/
//
//    cout << endl;
//
//    //计数排序 O(k+n)  空间复杂度O(n+k)
//    //{
//    //    vector<int>vc_a(1000000);
//    //    vector<int>vc_b(1000000);
//    //    copyArray(arr, vc_a, length);
//    //    start = clock();
//    //    CountSort(vc_a, vc_b, 100000, length);  // k取值范围
//    //    end = clock();
//    //    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    //    cout << "计数排序耗时：" << time_use << " 秒" << endl;
//    //    cout << endl;
//    //}
//    // 桶排序  O(nlog2n)    
//    LinkNode dummy;
//    LinkNode* cur = &dummy;
//    vector<LinkNode> vc_list;
//    vc_list.resize(length);
//    for (int i = 0;i < length;i++) {
//        
//        cur->next = &vc_list[i];
//        cur = cur->next;
//    }
//    start = clock();
//    cur = RadixSort(dummy.next);
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "基数排序耗时：" << time_use << " 秒" << endl;
//    cout << endl;
//
//    // 归并排序 空间辅助数组B O(n)
//    vc_b.resize(length);
//    copyArray(arr, tempArr, length);
//    start = clock();
//    MergeSort(tempArr,0,length-1); 
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "归并排序耗时：" << time_use << " 秒" << endl;
//
//    cout << endl;
//
//    // 简单选择排序
//   /* copyArray(arr, tempArr, length);
//    start = clock();
//    SelectSort(tempArr,length);  
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "简单选择排序耗时：" << time_use << " 秒" << endl;
//
//    cout << endl;*/
//
//    // 堆排序
//    shellCopy(arr, tempArr, length);
//    start = clock();
//    HeapSort(tempArr,length-1);  // 你的快排
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    cout << "堆排序耗时：" << time_use << " 秒" << endl;
//
//    cout << endl;
//
//
//    cout << "==== 排序对比完成 ====" << endl;
//    return 0;
//}