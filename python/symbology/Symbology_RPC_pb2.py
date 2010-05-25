# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


DESCRIPTOR = descriptor.FileDescriptor(
  name='Symbology-RPC.proto',
  package='symbology',
  serialized_pb='\n\x13Symbology-RPC.proto\x12\tsymbology\x1a\x0fSymbology.proto\"\x80\x01\n\x13SubscriptionRequest\x12%\n\x08security\x18\x01 \x03(\x0b\x32\x13.symbology.Security\x12-\n\x0c\x63ounterParty\x18\x02 \x03(\x0b\x32\x17.symbology.CounterParty\"\x13\n\x06Series\x12\t\n\x05PRICE\x10\x00\"\xff\x02\n\rSeriesRequest\x12\x11\n\tstartDate\x18\x01 \x01(\x05\x12\x0f\n\x07\x65ndDate\x18\x02 \x01(\x05\x12\x10\n\x08\x61sOfDate\x18\x03 \x01(\x05\x12%\n\x08security\x18\x04 \x03(\x0b\x32\x13.symbology.Security\x12.\n\rcounteryParty\x18\x05 \x03(\x0b\x32\x17.symbology.CounterParty\x12\x15\n\reventAdjusted\x18\x06 \x01(\x08\x12\x13\n\x0bgetRevision\x18\x07 \x01(\x08\x12\x15\n\rgetSecurityId\x18\x08 \x01(\x08\x12\x0f\n\x07getDate\x18\t \x01(\x08\"\x8c\x01\n\x06Series\x12\x0e\n\nOPEN_PRICE\x10\x00\x12\x0f\n\x0b\x43LOSE_PRICE\x10\x01\x12\x0e\n\nHIGH_PRICE\x10\x02\x12\r\n\tLOW_PRICE\x10\x03\x12\n\n\x06VOLUME\x10\x04\x12\x11\n\rOPEN_INTEREST\x10\x05\x12\n\n\x06RETURN\x10\x06\x12\x0c\n\x08\x44IVIDEND\x10\x07\x12\t\n\x05SPLIT\x10\x08\"\xa7\x01\n\rEntityRequest\x12\n\n\x02id\x18\x01 \x03(\x05\x12\x0f\n\x07payload\x18\x02 \x01(\x0c\"y\n\x06\x45ntity\x12\x0c\n\x08\x43URRENCY\x10\x00\x12\x0b\n\x07\x43OUNTRY\x10\x01\x12\n\n\x06MARKET\x10\x02\x12\x0e\n\nINSTRUMENT\x10\x03\x12\x11\n\rCOUNTER_PARTY\x10\x04\x12\x0b\n\x07\x43OMPANY\x10\x05\x12\x0c\n\x08SECURITY\x10\x06\x12\n\n\x06SYMBOL\x10\x07')



_SUBSCRIPTIONREQUEST_SERIES = descriptor.EnumDescriptor(
  name='Series',
  full_name='symbology.SubscriptionRequest.Series',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='PRICE', index=0, number=0,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=161,
  serialized_end=180,
)

_SERIESREQUEST_SERIES = descriptor.EnumDescriptor(
  name='Series',
  full_name='symbology.SeriesRequest.Series',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='OPEN_PRICE', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='CLOSE_PRICE', index=1, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='HIGH_PRICE', index=2, number=2,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='LOW_PRICE', index=3, number=3,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='VOLUME', index=4, number=4,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='OPEN_INTEREST', index=5, number=5,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='RETURN', index=6, number=6,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='DIVIDEND', index=7, number=7,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='SPLIT', index=8, number=8,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=426,
  serialized_end=566,
)

_ENTITYREQUEST_ENTITY = descriptor.EnumDescriptor(
  name='Entity',
  full_name='symbology.EntityRequest.Entity',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='CURRENCY', index=0, number=0,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='COUNTRY', index=1, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='MARKET', index=2, number=2,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='INSTRUMENT', index=3, number=3,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='COUNTER_PARTY', index=4, number=4,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='COMPANY', index=5, number=5,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='SECURITY', index=6, number=6,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='SYMBOL', index=7, number=7,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=615,
  serialized_end=736,
)


_SUBSCRIPTIONREQUEST = descriptor.Descriptor(
  name='SubscriptionRequest',
  full_name='symbology.SubscriptionRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='security', full_name='symbology.SubscriptionRequest.security', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='counterParty', full_name='symbology.SubscriptionRequest.counterParty', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SUBSCRIPTIONREQUEST_SERIES,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=52,
  serialized_end=180,
)


_SERIESREQUEST = descriptor.Descriptor(
  name='SeriesRequest',
  full_name='symbology.SeriesRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='startDate', full_name='symbology.SeriesRequest.startDate', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='endDate', full_name='symbology.SeriesRequest.endDate', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='asOfDate', full_name='symbology.SeriesRequest.asOfDate', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='security', full_name='symbology.SeriesRequest.security', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='counteryParty', full_name='symbology.SeriesRequest.counteryParty', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='eventAdjusted', full_name='symbology.SeriesRequest.eventAdjusted', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='getRevision', full_name='symbology.SeriesRequest.getRevision', index=6,
      number=7, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='getSecurityId', full_name='symbology.SeriesRequest.getSecurityId', index=7,
      number=8, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='getDate', full_name='symbology.SeriesRequest.getDate', index=8,
      number=9, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SERIESREQUEST_SERIES,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=183,
  serialized_end=566,
)


_ENTITYREQUEST = descriptor.Descriptor(
  name='EntityRequest',
  full_name='symbology.EntityRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='id', full_name='symbology.EntityRequest.id', index=0,
      number=1, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='payload', full_name='symbology.EntityRequest.payload', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _ENTITYREQUEST_ENTITY,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=569,
  serialized_end=736,
)

import Symbology_pb2

_SUBSCRIPTIONREQUEST.fields_by_name['security'].message_type = Symbology_pb2._SECURITY
_SUBSCRIPTIONREQUEST.fields_by_name['counterParty'].message_type = Symbology_pb2._COUNTERPARTY
_SUBSCRIPTIONREQUEST_SERIES.containing_type = _SUBSCRIPTIONREQUEST;
_SERIESREQUEST.fields_by_name['security'].message_type = Symbology_pb2._SECURITY
_SERIESREQUEST.fields_by_name['counteryParty'].message_type = Symbology_pb2._COUNTERPARTY
_SERIESREQUEST_SERIES.containing_type = _SERIESREQUEST;
_ENTITYREQUEST_ENTITY.containing_type = _ENTITYREQUEST;

class SubscriptionRequest(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _SUBSCRIPTIONREQUEST
  
  # @@protoc_insertion_point(class_scope:symbology.SubscriptionRequest)

class SeriesRequest(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _SERIESREQUEST
  
  # @@protoc_insertion_point(class_scope:symbology.SeriesRequest)

class EntityRequest(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _ENTITYREQUEST
  
  # @@protoc_insertion_point(class_scope:symbology.EntityRequest)

# @@protoc_insertion_point(module_scope)