from flask import Flask, render_template
import json

app = Flask(__name__)
app.secret_key = "S4Ss0"

DATA_PATH = "data.json"

@app.route('/')
def index():
    return render_template('index.html', data=get_data())

def get_data():
    try:
        with open(DATA_PATH, "r") as f:
            return json.load(f)
    except:
        return "Not found", 404

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0', port=8080)