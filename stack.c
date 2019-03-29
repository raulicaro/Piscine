/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:53:06 by rlima             #+#    #+#             */
/*   Updated: 2018/11/10 18:59:15 by rlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**g_stack;
int		g_top = -1;
int		*g_num_stack;
int		g_num_top = -1;

void  stack_push(char *str)
{
  g_stack[++g_top] = (char *)malloc(sizeof(*str) * (ft_strlen(str) + 1));
  ft_strcpy(g_stack[g_top], str);
}

char   *stack_pop()
{
  return ((g_top != -1) ? g_stack[g_top--] : 0);
}

char  *stack_peek()
{
  return ((g_top != -1) ? g_stack[g_top] : 0);
}

int   stack_is_empty()
{
  return ((g_top == -1) ? 1 : 0);
}

void  num_stack_push(int n)
{
  g_num_stack[++g_num_top] = n;
}

int   num_stack_pop(void)
{
  return ((g_num_top != -1) ? g_num_stack[g_num_top--] : 0);
}

int  num_stack_peek(void)
{
  return ((g_num_top != -1) ? g_num_stack[g_num_top] : 0);
}

char  **infix_to_postfix(char **str, int num_tokens)
{
  char  **output;
  int   t;
  int   i;
  char *temp;

  output = (char **)malloc(sizeof(**output) * (num_tokens + 1));
  t = 0;
  i = 0;

  while (*str != 0)
  {
    if (is_operand(**str))
    {
      output[t] = (char *)malloc(sizeof(*output) * (strlen(*str) + 1));
      output[t] = *str;
      t++;
    }
    if (is_left_paren(**str))
    {
      stack_push(*str);
    }
    if (is_right_paren(**str))
    {
      while (!stack_is_empty() && !is_left_paren(*stack_peek()))
      {
        output[t] = (char *)malloc(sizeof(*output) * (strlen(stack_peek()) + 1));
        strcpy(output[t], stack_pop());
        t++;
      }
      stack_pop();
    }
    if (is_operator(**str))
    {
      if (stack_is_empty() || is_left_paren(*stack_peek()))
      {
        stack_push(*str);
      }
      else
      {
        while (!stack_is_empty() && !is_left_paren(*stack_peek()) && (precedence(**str) <= precedence(*stack_peek())))
        {
          output[t] = (char *)malloc(sizeof(*output) * (strlen(stack_peek()) + 1));
          strcpy(output[t], stack_pop());
          t++;
        }
        stack_push(*str);
      }
    }
    str++;
  }

  while (!stack_is_empty())
  {
    printf("Emptying stack: %s (length %d)\n", stack_peek(), strlen(stack_peek()));
    output[t] = (char *)malloc(sizeof(*output) * strlen(stack_peek()));
    strcpy(output[t], stack_pop());
    t++;
  }
  output[t] = 0;
  return (output);
}
