# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


DESCRIPTOR = descriptor.FileDescriptor(
  name='Revision.proto',
  package='',
  serialized_pb='\n\x0eRevision.proto\"\\\n\x08Revision\x12\x10\n\x08sequence\x18\x01 \x01(\x05\x12\x19\n\x11lastEffectiveDate\x18\x02 \x01(\x05\x12\x0f\n\x07\x64\x65leted\x18\x03 \x01(\x08\x12\x12\n\npreviousId\x18\x04 \x01(\x05')




_REVISION = descriptor.Descriptor(
  name='Revision',
  full_name='Revision',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='sequence', full_name='Revision.sequence', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='lastEffectiveDate', full_name='Revision.lastEffectiveDate', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='deleted', full_name='Revision.deleted', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='previousId', full_name='Revision.previousId', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=18,
  serialized_end=110,
)



class Revision(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _REVISION
  
  # @@protoc_insertion_point(class_scope:Revision)

# @@protoc_insertion_point(module_scope)