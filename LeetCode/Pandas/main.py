import pandas as pd


def test():
    data = [[1, 2, 3], [1, 2, 4], [1, 3, 3], [2, 1, 1], [2, 2, 1], [2, 3, 1], [2, 4, 1]]
    teacher = pd.DataFrame(
        data, columns=["teacher_id", "subject_id", "dept_id"]
    ).astype({"teacher_id": "Int64", "subject_id": "Int64", "dept_id": "Int64"})
    teacher = (
        teacher.groupby("teacher_id")["subject_id"].nunique().reset_index(name="cnt")
    )
    print(teacher)


if __name__ == "__main__":
    test()
