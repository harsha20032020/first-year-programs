from transformers import pipeline

count = 0
classifier = pipeline('sentiment-analysis')

with open("/home/Documents/ICT/sentiment_bucket_31.txt") as fp: 
    for line in fp: 
        count += 1
        print("Line {}: {}\n{}".format(count, line, classifier(line)))
        print("\n")