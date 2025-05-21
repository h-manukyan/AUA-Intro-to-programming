from flask import Flask, request, jsonify
import blockchain  # this is your Python-C++ bridge via ctypes

app = Flask(__name__)

@app.route("/create_user", methods=["POST"])
def create_user():
    username = request.json.get("username")
    if blockchain.create_user(username):
        return jsonify({"message": "User created!"}), 200
    return jsonify({"error": "User creation failed"}), 400

@app.route("/connect", methods=["POST"])
def connect():
    user1 = request.json.get("user1")
    user2 = request.json.get("user2")
    if blockchain.connect_users(user1, user2):
        return jsonify({"message": "Connected and rewarded"}), 200
    return jsonify({"error": "Connection failed"}), 400

@app.route("/transfer", methods=["POST"])
def transfer():
    sender = request.json.get("from")
    receiver = request.json.get("to")
    amount = request.json.get("amount")
    if blockchain.transfer_token(sender, receiver, amount):
        return jsonify({"message": "Transfer successful"}), 200
    return jsonify({"error": "Transfer failed"}), 400

@app.route("/balances", methods=["GET"])
def balances():
    return jsonify(blockchain.get_balances()), 200

if __name__ == "__main__":
    app.run(debug=True)

