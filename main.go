package main

/*
extern void Func();
*/
import "C"

//go:generate swig -go -intgosize 64 -cgo -c++ gen/gen.i
import (
  gen "./gen"
	"unsafe"
)

//export Func
func Func() {
	println("alternative sucks")
}

func main(){
  p := gen.NewPass((gen.X_swig_fnptr)(unsafe.Pointer(C.Func)))
  obj := gen.NewGen(p)
  println(obj.Test())
}
