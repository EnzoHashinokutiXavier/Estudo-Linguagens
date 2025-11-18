FROM gcc:4.9
WORKDIR /app
COPY . .
RUN g++ src/main.cpp -o ex
EXPOSE 8080
CMD ["./ex"]