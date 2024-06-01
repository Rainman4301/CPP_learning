

from flask import Flask

app = Flask(__name__)
@app.route('/')
def index():
    return '<h1>happy!</h1>'

if __name__ == '__main__':
    app.run(host='61.56.3.233',port=8080,debug=True)