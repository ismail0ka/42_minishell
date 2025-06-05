/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarouat <ikarouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:12:29 by ikarouat          #+#    #+#             */
/*   Updated: 2025/06/02 14:41:49 by ikarouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_parser.h"

t_command	*parse(char *line)
{
	t_token 	*tokens;
	t_ast		*ast;
	t_command	*cmds;

	cmds = NULL;
	tokens = tokenize(line);
	if (!tokens)
		return (NULL);
	while (tokens != NULL)
		(printf("<%s , %i>\n", tokens->value, tokens->type), tokens = tokens->next);
	//Validate conformance to grammar
	ast = ;
	//Prepare command for execution
	cmds = ;
	if (!cmds)
	{
		free(tokens);
		return (NULL);
	}
	return (cmds);
}
