# Java 哼哼哈嘻新手村

## [按我回主頁](https://hackmd.io/O0iQ0w_bQdmtgqBqhx-EZg?view)

### 開始java project  (安裝jdk+eclipse IDE+create main.java)

1. search jdk download
2. search eclipcs download
3. 好懶喔就打開eclipse open new project就好囉！
4. 程式架構
```
public class main {
        /*class的名稱*/
 public static void main(String[] args ){
                /*main函式的名稱*/
      System.out.println("hello world!!!");
 }

}
```

### 從你的鍵盤輸入 System.out.println();
> java好物件導向喔喔！class所組成的感覺沒有指標也太爽
```
public class main {

 public static void main(String[] args ){
  // TODO Auto-generated method stub
  System.out.println("hello guys");
  System.out.println("kekekkekeke...");
  System.out.println("Well done bro");
  System.out.println("我好無聊希望我可以拿java來寫題\n但實在太無聊了\n進度緩慢");
  System.out.println("kekekkekeke...");
  //bye 拉各位
  //this is a comment
  /*
   * this is also a comment
   * haiya
   */
 }

}
```

### 從螢幕輸出   import java.util.Scanner;
> scanner的用法import java.util.Scanner
```
import java.util.Scanner;

public class main {

 public static void main(String[] args ){
  Scanner scanner = new Scanner(System.in);
  System.out.println("我超無聊你也是嗎？");
  String ans = scanner.nextLine();
  System.out.println("這是你的答案： "+ans);
  System.out.println("喔是喔");
 }

}
```

### GUI入門    import javax.swing.JOptionPane;
>這很酷誒，c++ ->c ->java就像石器時代通往金屬器時代
```
import javax.swing.JOptionPane;

public class main {

 public static void main(String[] args ){
  String name = JOptionPane.showInputDialog("Enter your name");
  JOptionPane.showMessageDialog(null,"hello "+name);
  
  int age = Integer.parseInt(JOptionPane.showInputDialog("Enter your age"));
  JOptionPane.showMessageDialog(null,"你有夠老: "+age);
 }

}
```

### 使用數學工具 Math.abc();
>常見的就max,min,abs,sqrt...and so on.
>我的天我有夠懶
>還講一堆廢話
>下面附的程式碼是讓使用者輸入兩個double作為三角形的兩底，
>然後輸出三角形斜邊長
```
import java.util.Scanner;

public class main {
	public static void main(String[] args ){
		//球鞋邊長的小program
		
		double x;
		double y;
		double z;
		
		Scanner scanner = new Scanner(System.in);
		System.out.println("enter side x = ");
		x = scanner.nextDouble(); 
		System.out.println("enter side y = ");
		y = scanner.nextDouble();
		
		//使用Math()工具
		z = Math.sqrt((x*x)+(y*y));
		
		System.out.println("the answer is "+z);
		
		scanner.close();		
	}
}
```
### Random的用法
```
import java.util.Random;

public class main {
	public static void main(String[] args ){
		Random random = new Random();
		int x = random.nextInt(6);//0-5
		int y = random.nextInt(6) + 1;//1-6
		System.out.println("range from 0 to 5: " +x);
		System.out.println("range from 1 to 6: " +y);
	}

}

```
### 流程控制if else
>其實都跟c差不多辣
>switch也是豪爽喔
```
import java.util.Scanner;

public class main {
	public static void main(String[] args ){
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("you are playing a game! please q or Q to quit");
		String response = scanner.next();
		
		if(response.equals("q")||response.equals("Q")) {
			System.out.println("you quit the game");
		}
		else {
			System.out.println("you're still playing the game");
		}
	}
}

```

### arrays(2D arrays用法跟c一樣也想跳過)

>java的for loop and while loop 都跟c一樣
>所以我都跳過
>直接跳到array
以下展示兩個用法
1. 直接宣告：String[] cars = {"carmaro","covette","Tesla"};
2. 先宣告array大小再進行賦值：String[] animals = new String[3];
```
public class main {
	public static void main(String[] args ){
		String[] cars = {"carmaro","covette","Tesla"};
		
		cars[0] = "Mustang";
		
		String[] animals = new String[3];
		animals[0] = "dog";
		animals[1] = "cat";
		animals[2] = "elephant";
		
		for(int i = 0;i<animals.length;i++) {
			System.out.println(animals[i]);
		}
	}
}

```
### string method
```
public class main {
	public static void main(String[] args ){
		String name = "Bro";
		
		boolean result = name.equals("Bro");
		int result2 = name.length();
		boolean result3 = name.isEmpty();
		String name2 = name.replace('o','i');
		
		System.out.println(name2);
	}
}

```

### Wrapper Classes in Java(v.s.primitive data types)
![](https://i.imgur.com/6HzEwKj.png)
```

```

### Array List
>a resizable array

### 2D Array List


