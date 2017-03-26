//如果转换文件一行只有关键字和一个space，会发生什么

while (ifs1 >> keyValue&&getline(ifs1, mappedValue))
//如果和11.33一样写这样sub的时候就会有问题，要写成书上的那样
trans[keyValue] = mappedValue.substr(1);