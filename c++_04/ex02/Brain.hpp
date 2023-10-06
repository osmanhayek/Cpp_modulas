/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:20:47 by ohayek            #+#    #+#             */
/*   Updated: 2023/09/16 20:59:32 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(void);
    Brain(const std::string* idea);
    Brain(const Brain& obj);
    ~Brain(void);

    Brain&                  operator=(const Brain& obj);
    const std::string*      getIdeas(void) const;
};
