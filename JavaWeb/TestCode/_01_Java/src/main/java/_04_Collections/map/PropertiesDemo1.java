package _04_Collections.map;

import java.util.Properties;
import java.util.Set;

public class PropertiesDemo1 {
    public static void main(String[] args) {
        //创建集合对象
        Properties prop = new Properties();

        //存储元素
        prop.put("001", "林青霞");
        prop.put("002", "张曼玉");
        prop.setProperty("003", "王祖贤");

        //遍历集合
        Set<String> keySet = prop.stringPropertyNames();
        for (String key : keySet) {
            String value = prop.getProperty(key);
            System.out.println(key + "," + value);
        }
    }
}