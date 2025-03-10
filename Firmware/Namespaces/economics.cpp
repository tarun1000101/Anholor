namespace economics{
    
    typedef struct cash flow{
        double2048_t number_of_cash_flows;
        double2048_t cash_flows[number_of_cash_flows];
    };

    typedef struct single_payment_future_amount{
        double2048_t principal;
        double2048_t interest_rate;
        double2048_t payment_period;
        double2048_t future_amount;
    };

    typedef struct uniform_annual_payments_future_amount{
        double2048_t principal;
        double2048_t number_of_cash_flows;
        double2048_t cash_flows[number_of_cash_flows];
        double2048_t interest_rate;
        double2048_t payment_period;
        double2048_t future_amount;
    };

    typedef struct annual_payments_future_amount{
        double2048_t principal;
        double2048_t number_of_cash_flows;
        double2048_t cash_flows[number_of_cash_flows];
        double2048_t interest_rate;
        double2048_t payment_period;
        double2048_t future_amount;
    };

    typedef struct arithmetic_series{
        double2048_t arthimetic_factor;
        double2048_t number_of_cash_flows;
        double2048_t cash_flows[number_of_cash_flows];
    };

    typedef struct geometric_series{
        double2048_t geometric_factor;
        double2048_t number_of_cash_flows;
        double2048_t cash_flows[number_of_cash_flows];
    };

    typedef struct geometric_series{
        double2048_t geometric_factor;
    };

    typedef struct rate_of_return{
        double2048_t rate_of_return_1;
        double2048_t rate_of_return_2;
        double2048_t present_worth_1;
        double2048_t present_worth_2;
    };

    typedef struct alternative{
        double2048_t number_of_costs;
        double2048_t number_of_types_of_costs;
        double2048_t costs_matrix[number_of_types_of_costs][number_of_costs];
    };
}