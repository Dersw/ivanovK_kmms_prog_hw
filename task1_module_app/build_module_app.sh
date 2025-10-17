CPP_FILES="io.cpp sortings.cpp main.cpp"
APP=example
DIR=bin

mkdir -p $DIR

if [ -f /$DIR/$APP ]; then rm $DIR/$APP
fi

g++ $CPP_FILES -o $DIR/$APP

cd $DIR && ./$APP
