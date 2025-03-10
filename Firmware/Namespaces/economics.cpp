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

    typedef struct 
}