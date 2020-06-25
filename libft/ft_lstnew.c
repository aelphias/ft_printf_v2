/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 02:46:26 by aelphias          #+#    #+#             */
/*   Updated: 2020/03/07 20:56:05 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

/* What should it do?
1) initializy elements of structure by copy
2)allocate and return link
 */


/* • content : The data contained in the link. The void * allows to store any kind of
data.
• content_size : The size of the data stored. The void * type doesn’t allow you to know the size of the pointed data, as a consequence, it is necessary to save its size. For instance, the size of the string "42" is 3 bytes and the 32bits integer 42 has a size of 4 bytes.
• next : The next link’s address or NULL if it’s the last link.      */

t_list  *ft_lstnew(void const *content, size_t  content_size)
{
    printf("{ 4 }");
    t_list *node;
    
    if (!(node = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    printf("{ 5 }");

    if (content == NULL)
        node->content = NULL;
    else
        ft_memcpy(node->content, content, content_size);
    node->next = NULL;
    return (node);
}

int main(void)
{
    int a;
    t_list *list;
    char *str = "love is the answer";
    
    a = 45;
    printf("{ 1 }\n");
    list = ft_lstnew(&a, sizeof(int));
    printf("{ 2 }");
    printf("%s", list->content);
    //printf("NULL\n");
    return (0);
}
/* t_list *data;
    
    if (!(data = (t_list *)malloc(sizeof(t_list))))
        return(NULL);
    if (content == NULL)
    {
        data->content = NULL;
        content_size = 0;
    }
    if (!(data->content = (void *)malloc(content_size)))
        return(NULL);
    ft_memcpy(data->content, content, content_size); 
    data->content = (void *)content;
    data->content_size = content_size;
    data->next = NULL;
    return (data); */
