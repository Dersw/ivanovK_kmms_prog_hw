CPP_FILES="generator.cpp io.cpp prefix_sum.cpp main.cpp request_handler.cpp"
APP=example
DIR=bin

mkdir -p $DIR

if [ -f /$DIR/$APP ]; then rm $DIR/$APP
fi

g++ $CPP_FILES -o $DIR/$APP

cd $DIR && ./$APP
