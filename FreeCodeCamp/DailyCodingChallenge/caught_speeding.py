# ! 2025-09-26
# ? Given an array of numbers representing the speed at which vehicles were observed traveling,
# ? and a number representing the speed limit, return an array with two items, the number of vehicles that were speeding,
# ? followed by the average amount beyond the speed limit of those vehicles.
# ? If there were no vehicles speeding, return [0, 0].
def speeding(speeds: list[int], limit) -> list:
    speeding_vehicle_count = 0
    total_amount_beyond_speeding_limit = 0
    for speed in speeds:
        if speed > limit:
            speeding_vehicle_count += 1
            total_amount_beyond_speeding_limit += speed - limit
    if speeding_vehicle_count == 0:
        return [0, 0]
    return [speeding_vehicle_count, total_amount_beyond_speeding_limit / speeding_vehicle_count]
