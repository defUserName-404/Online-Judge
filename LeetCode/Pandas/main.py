import pandas as pd


def test():
    data = {
        "name": ["Tatiana", "Khaled", "Alex", "Jonathan", "Stefan", "Tommy"],
        "species": ["Snake", "Giraffe", "Leopard", "Monkey", "Bear", "Panda"],
        "age": [98, 50, 6, 45, 100, 26],
        "weight": [379, 410, 328, 50, 912, 347],
    }
    animals = pd.DataFrame(data)
    print(animals.query("weight > 100").sort_values("weight", ascending=False)["name"])


if __name__ == "__main__":
    test()
