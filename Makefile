stuff = gen/gen.go gen/gen_wrap.cxx
run: gen/gen.go
	go run main.go
gen/gen.go: gen/gen.i gen/gen.hpp gen/gen.cxx
	go generate
	sed -i -e s,_swig_fnptr,X_swig_fnptr,g gen/gen.go
clean:
	rm -f $(stuff)
.PHONY: clean
