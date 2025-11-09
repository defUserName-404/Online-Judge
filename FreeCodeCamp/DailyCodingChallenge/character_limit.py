def can_post(message):
    length = len(message)
    if length <= 40:
        post_type = "short"
    elif length <= 80:
        post_type = "long"
    else:
        post_type = "invalid"
    return post_type + " post"
