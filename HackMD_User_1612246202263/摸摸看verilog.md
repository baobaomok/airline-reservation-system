# 摸摸看verilog

```
害我媽不借我筆電
我摸摸看怎麼用mac寫verilog好了
```
### 觀念一（基本架構）
```
module 模組名稱( In1, In2, Out1, Out2, InOut1 );

    input in1, in2;
    output Out1, Out2;
    inout InOut1;

    wire In1, In2, Out1;
    wire InOut1;
    reg Out2;

    // 以下為三種層級分別描述 In1 與 In2 and 做 and 運算的方法
    // 邏輯閘層次( Gate Level )
    and and1( Out1, In1, In2 );

    // 資料流層次( Dataflow Level )
    assign Out1 = In1 & In2;

    // 行為層次( Behavior Level )
    allways @(*) begin
        Out2 = In1 & In2;
    end

endmodule
```

### 補充
```
與 C 語言相同，有 // 及 /**/ 兩種註解方式
module 後面要記得加上分號；
```

### 觀念二(資料型態)
```
  0　　　邏輯0
　1　　　邏輯1
　x或X　 未知的值( Unknow )或浮接( Floating )
　z或Z　 高阻抗( High Impendence )
```
#### 連接線Net ( wire、wand、wor )
```
* 沒有記憶性
* 預設值為z
* 將兩個wire連在一起是不允許的
* 若是型態為wand/wor則例外
```
example:
```
module 模組名稱( a, b, c, d, e );

    input a, b;
    output c, d, e;

    wire c;
    wand d;
    wor e;

    // wire接一起 → 錯誤
    assign c = a;
    assign c = b;

    // wire-and → d = a&b
    assign d = a;
    assign d = b;

    // wire-or → e = a|b
    assign e = a;
    assign e = b;

endmodule
```