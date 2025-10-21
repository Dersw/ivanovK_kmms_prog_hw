CPP_FILES="after_refactoring_2.cpp"
APP=example
DIR=bin

mkdir -p $DIR

if [ -f /$DIR/$APP ]; then rm $DIR/$APP
fi

g++ $CPP_FILES -o $DIR/$APP

cd $DIR && ./$APP
