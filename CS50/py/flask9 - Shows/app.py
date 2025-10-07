from cs50 import SQL
from flask import Flask, render_template, request, jsonify

app = Flask(__name__)

db = SQL("sqlite:///shows.db")


@app.route("/")
def index():
    return render_template("index.html")


@app.route("/search")
def search():
    #query = "%" + request.args.get("q") + "%"
    #shows = db.execute("SELECT * FROM shows WHERE title LIKE ?", query) 
    #return render_template("search.html", shows=shows)
    query = request.args.get("q")
    if query :
        shows = db.execute("SELECT * FROM shows WHERE title LIKE ? LIMIT 50", "%" + query + "%") 
    else:
        shows = []
    return jsonify(shows)