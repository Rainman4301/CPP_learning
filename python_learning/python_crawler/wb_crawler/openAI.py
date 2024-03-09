



import os
import openai

openai.api_key = "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"
openai.organization = "org-6vdvb54FXnU3qkKUkIckZlbs"

response = openai.ChatCompletion.create(
  model="gpt-3.5-turbo",
  messages=[
    {
      "role": "assistant",
      "content": "you are a very polite britian civilian."
    },
    {
      "role": "user",
      "content": "hi "
    }
  ],
  temperature=1,
  max_tokens=256,
  top_p=1,
  frequency_penalty=0,
  presence_penalty=0
)


print(response)
