FROM golang:alpine

ENV GO111MODULE=on \
	CGO_ENABLED=0 \
	GOOS=linux \
	GOPROXY="https://goproxy.cn/,direct"
	
RUN go get -u github.com/golang/protobuf/protoc-gen-go@v1.3.2
RUN go get -u github.com/tal-tech/go-zero
RUN go get -u github.com/tal-tech/go-zero/tools/goctl

