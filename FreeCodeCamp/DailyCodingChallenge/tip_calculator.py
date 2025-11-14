# ! 2025-10-20
# ? Given the price of your meal and a custom tip percent, return an array with three tip values; 15%, 20%, and the custom amount.
# ?
# ? Prices will be given in the format: "$N.NN".
# ? Custom tip percents will be given in this format: "25%".
# ? Return amounts in the same "$N.NN" format, rounded to two decimal places.
# ? For example, given a "$10.00" meal price, and a "25%" custom tip value, return ["$1.50", "$2.00", "$2.50"].

def calculate_tips(meal_price: str, custom_tip: str) -> list[str]:
    meal_price = float(meal_price[1:])
    custom_tip = float(custom_tip[:-1])
    return [_format_float(_calculate_tip(meal_price, 15)),
            _format_float(_calculate_tip(meal_price, 20)),
            _format_float(_calculate_tip(meal_price, custom_tip))]


def _calculate_tip(meal_price: float, tip_percent: float) -> float:
    return round(meal_price * tip_percent / 100, 2)


def _format_float(num: float) -> str:
    return str("$" + "{:.2f}".format(num))
