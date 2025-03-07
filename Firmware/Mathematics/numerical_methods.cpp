class numerical_methods{
    public:

        double return_limit_result(double point){
            /** Explanation:
             *  Lim(variable -> point) = f(variable).
             *  In this case, variable would be equal to the point in the curve or line.
             *  Lim (variable -> point) means the curve is going to an infinitisemally small value, it might as well be the point in the curve or line.
             */
            return point;
        }
    
        double evaluate_function(string expression, double point){
            double result = 0;
            return result;
        }

        double single_variable_limit(double point, string expression){
            /**  Function explanation:
            * Lim (variable -> point) (f(variable)) = f(point)  
            */

            double result = evaluate_function(expression, point);
            return result;
        }

        double single_variable_integration(string expression, double point, double margin_of_error, double precision){

            /**Explanation of function
             * Evaluates the infinitismally small value of the function and then, adds them up.
             */

            double differentiation_result = single_variable_differentiation(margin_of_error, point, expression);
            long single_variable_integration_result = 0;
            int precision_integer = 0;

            if (precision < 0)
                precision_integer = (-1) * (precision);
            else if (precision > 0)
                precision_integer = precision;

            for (int i = 0; i < precision; i++)
                single_variable_integration_result = single_variable_integration_result + differentiation_result;
            return single_variable_integration_result;
        }

        double multivariable_integration(string expression1, string expression2, double x_point1, double x_point2, double y_point1, double y_point2, double margin_of_error_point1, double margin_of_error_point2, double dx_precision, double dy_precision){
            /** Explanation of below statements:
            * Integration is analogus to addtion.
            * Differentiation is analogus to subtraction.
            * When intgeration is done, limits are the ones that are being evaluated.
            * Evaluate the functions with respect to those limits.
            * Is prone to error.
            */

            double dy1 = evaluate_function(expression2, y_point1);
            double dy2 = evaluate_function(expression2, y_point2);
            double dx1 = evaluate_function(expression1, x_point1);
            double dx2 = evaluate_function(expression2, x_point2);

            double multivariable_integration_result = (dy2 - dy1) * (dx2 - dx1);

            return multivariable_integration_result;
        }

        double single_variable_differentiation (double margin_of_error, double point, string expression){
            double differentiation_result = (evaluate_function(expression, point+margin_of_error) - evaluate_function(expression, margin_of_error))/ evaluate_function (expression, margin_of_error);
            return differentiation_result;
        }
};