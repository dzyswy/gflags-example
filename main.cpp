#include <iostream>
#include <gflags/gflags.h>
using namespace std;
 
// gflags定义类型	描述
DEFINE_bool(is_test, false, "test for bool");   // bool位整型
DEFINE_int32(int32_test, 0, "test for int32");	// 32位整型
DEFINE_int64(int64_test, -1, "test for int64");	// 64位整型
DEFINE_uint64(uint64_test, 0, "test for uint64");	// 无符号64位整型
DEFINE_double(double_test, 0.1, "test for double");	// 浮点类型
DEFINE_string(string_test, "test", "test for string");	// C++ string类型
 
// 定义为全局变量，类似于extern
DECLARE_bool(is_test);
 
 
int main(int argc, char **argv){
 
    gflags::ParseCommandLineFlags(&argc, &argv, true);
 
    if(FLAGS_is_test){
        cout << "FLAGS_is_test is true." << endl;
    }
 
    cout << FLAGS_string_test << endl;
 
    gflags::ShutDownCommandLineFlags();
    return 0;
}