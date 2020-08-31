package _02_Junit;

import org.junit.*;

public class CalculatorTest {


    /**
     *  初始化方法：
     *  1、必须为静态方法
     *  2、在所有方法执行之前，只执行一次
     * */
    @BeforeClass
    public static void doBefore() {
        System.out.println("do Before ... ");
    }

    /**
     *  释放资源方法：
     *  1、必须为静态方法
     *  2、在所有方法执行之后，只执行一次
     * */
    @AfterClass
    public static void doAfter() {
        System.out.println("do After ... ");
    }


    /**
     * 初始化方法：
     *  用于资源申请，所有测试方法在执行之前都会先执行该方法
     */
    @Before
    public void init(){
        System.out.println("init...");
    }

    /**
     * 释放资源方法：
     *  在所有测试方法执行完后，都会自动执行该方法
     */
    @After
    public void close(){
        System.out.println("close...");
    }


    /**
     * 测试add方法
     */
    @Test
    public void testAdd(){
        // System.out.println("我被执行了");
        //1.创建计算器对象
        System.out.println("testAdd...");
        Calculator c  = new Calculator();
        //2.调用add方法
        int result = c.add(1, 2);
        //System.out.println(result);

        //3.断言  我断言这个结果是3
        Assert.assertEquals(3, result);
    }

    @Test
    public void testSub(){
        //1.创建计算器对象
        Calculator c  = new Calculator();
        int result = c.sub(1, 2);
        System.out.println("testSub....");
        Assert.assertEquals(-1,result);
    }
}
