//#include <stdio.h>
//#define MAX 101
//char stack[MAX];//栈----装100个字符
//int stack_1[MAX];//运算栈
//char s[MAX];//用来获取字符
//char rpn[MAX];//用来存储逆波兰表达式
//int top = -1, up = 0;//栈指针和字符串数组指针
//void push(char c) { stack[++top] = c; 
//stack[top]; }
//char pop() { return stack[top--]; }
//char peek() { return stack[top]; }
//int isEmpty() { return top == -1; }
//int priority(char op) {
//	if (op == '+' || op == '-') return 1;
//	if (op == '*' || op == '/') return 2;
//	return 0;
//}
//int main() 
//{
//	int len = 0;
//	fgets(s, sizeof(s), stdin);
//	while (s[len] != '\0'&& s[len] != '\n')
//		len++;
//	for (int i = 0; i < len; i++)
//	{
//		char C = s[i];
//		int c1 = C - '0';
//		if (c1 >= 0 && c1 <= 9)
//		{
//			while (i < len && s[i] >= '0' && s[i] <= '9') {
//				rpn[up++] = s[i];
//				i++;
//			}
//			rpn[up++] = ' '; // 用空格分隔数字，防止 1 和 2 变成 12
//			i--;
//		}
//		else if (C!=' '&&C!=')')
//		{
//			char c2 = peek();
//			if (priority(C) <= priority(c2) && priority(C) != 0 && priority(c2) != 0&&C!='(')//如果上一个优先级大于下一个先把前面相同或更高的运算符出栈，再入栈
//			{
//				while (!isEmpty())
//				{
//					if (peek() == ')' || peek() == '(')
//						break;
//					rpn[up++] = pop();
//					if (priority(peek()) < priority(stack[top + 1]))
//						break;
//				}
//			}
//			push(C);//不是)和没有运算符问题的入栈
//		}
//		else if(C==')')//出栈直到最近的一个左括号
//		{
//			while (!isEmpty())
//			{
//				if (peek() == '(')
//				{
//					pop();
//					break;
//				}
//				rpn[up++] = pop();//括号里面的全部入栈
//			}
//		}
//	}
//	while (!isEmpty())
//		rpn[up++] = pop();
//	top = -1;
//	for (int i = 0; i < up; i++)
//	{
//		char v = rpn[i];
//		int a = v-'0';
//		if (v == ' ') continue; // 跳过空格
//		if (v >= '0' && v <= '9') // 提取多位数
//		{
//			int num = 0;
//			while (i < up && rpn[i] >= '0' && rpn[i] <= '9') {
//				num = num * 10 + (rpn[i] - '0');
//				i++;
//			}
//			i--; 
//			stack_1[++top] = num; // 数字入栈
//		}
//		else if(top>0)
//		{
//			int result=0;
//			int num1 = stack_1[top--];
//			int num2 = stack_1[top--];
//			switch (v)
//			{
//				case'+':{result = num2 + num1;break;}
//				case'-':{result = num2 - num1;break;}
//				case'*':{result = num2 * num1;break;}
//				case'/':{result = num2 / num1;break;}
//			}
//			stack_1[++top] = result;
//		}
//		else
//			printf("运算错误!\n");
//	}
//	printf("%d",stack_1[0]);
//}