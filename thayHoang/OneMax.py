import numpy as np
import random

def randomm(N, l):
    parents = np.random.randint(2, size = (N, l))
    return parents

population_size = 512
problem_size = 40

parents = np.zeros((population_size, problem_size))
parents = randomm(population_size, problem_size)

generation = 0

def check_correct(s1, s2):
    for i in range(problem_size):
        if (s1[i] != s2[i]):
            return False
    return True

def check_convergence(population):
    for i in range (population - 1):
        if check_correct(parents[i], parents[i + 1]) == False:
            return False
    return True

def cross_over(parents, N, l):
    
    offspring = parents.copy()
    i = 0

    while (i < N - 1):
        for j in range(0, l):
            r = random.uniform(0, 1)
            #print(r)
    
            if (r < 0.5):
              offspring[i][j], offspring[i + 1][j] = offspring[i + 1][j], offspring[i][j]
        i += 2
    
    return offspring

def crossover_onepoint(parents, n, l):
    offspring = parents.copy()
    i = 0
    
    while (i < n - 1):
        r = random.randint(1, l - 2)
        
        for j in range(r, l):        
            offspring[i][j], offspring[i + 1][j] = offspring[i + 1][j], offspring[i][j]
        i += 2
        
    return offspring

def one_max(a):
    sum = 0
    
    for i in a:
        sum += i
    
    return sum

def tournament_selection(pool, fitness_pool, population_size):
    cnt = -1

    for i in range(2):
        si = np.arange(2 * population_size)
        np.random.shuffle(si)

        best = 0
        best_idx = -1

        for i in range(2 * population_size):
            if (i % 4 == 3):
                cnt += 1
                parents[cnt] = pool[best_idx]
                best = 0
                best_idx = -1
            else:
                if (fitness_pool[si[i]] >= best):
                    best = fitness_pool[si[i]]
                    best_idx = si[i]
    return parents

while (check_convergence(population_size) is not True):

    generation += 1
    print('Generation #' + str(generation) + ':')
    
    offspring = cross_over(parents, population_size, problem_size)
    
    pool = np.vstack((parents, offspring))

    fitness_parents = []
    for j in range(population_size):
        fitness_parents.append(one_max(parents[j]))

    fitness_offspring = []
    for i in range(population_size):
        fitness_offspring.append(one_max(offspring[i]))    
    fitness_pool = fitness_parents.copy()
    fitness_pool = np.array(np.vstack((fitness_parents, fitness_offspring)))

    for i in fitness_offspring:
        fitness_pool.append(i)

    tournament_selection(pool, fitness_pool, population_size)
    print(parents)

for i in range(population_size):
    print(parents[i], end = ' ')
    print(fitness_parents[i])
   
