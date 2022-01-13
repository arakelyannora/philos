#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# define ARG_ERROR 1
# define MALLOC_ERROR 2
# define CREATE_PTHREAD_ERROR 3
# define JOIN_PTHREAD_ERROR 4

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>

typedef struct s_philo
{
    int l_f;
    int r_f;
    int tot_meals;
    unsigned int time_of_death;
    pthread_t thread;
    struct s_data *data;
    pthread_mutex_t eating;
}              t_philo;

typedef struct s_info
{
    int philos_count;
    unsigned int time_to_die;
    int time_to_eat;
    int time_to_sleep;
    int must_eat_num;
    int finish;
    int eat_finish;
    unsigned int create_date;
    pthread_mutex_t *forks;
    pthread_mutex_t print;
    pthread_mutex_t eat;
    pthread_mutex_t main;
    t_philo *philos;
}              t_info;