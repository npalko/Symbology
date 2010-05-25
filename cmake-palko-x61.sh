#!/bin/bash
protoc --cpp_out=src --python_out=src --proto_path=protobuf protobuf/*.proto