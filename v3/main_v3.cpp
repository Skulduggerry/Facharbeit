#include "../definitions.h"
#include "../utils.h"
#include "quick_sort_v3.h"

int main() {
    std::vector<sort::AlgorithmInformation> algorithm_information{
            {sort::quicksort<sort::Sortable::iterator>,                  "quicksort",
                    {
                            {sort::BEST_CASE,  sort::quicksort_best_case_generator},
                            {sort::WORST_CASE, sort::quicksort_worst_case_generator}
                    }
            },
            {sort::quicksort_random_partition<sort::Sortable::iterator>, "quicksort_random_partition",
                    {
                            {sort::WORST_CASE, sort::quicksort_worst_case_generator}
                    }
            }
    };

    sort::benchmark(algorithm_information);
    sort::output(algorithm_information);
}