# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from nasa_r2_common_msgs/JointStatusArray.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import nasa_r2_common_msgs.msg
import std_msgs.msg

class JointStatusArray(genpy.Message):
  _md5sum = "db132c4fff9528f41c0236d435100eda"
  _type = "nasa_r2_common_msgs/JointStatusArray"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
JointStatus[] status

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: nasa_r2_common_msgs/JointStatus
string publisher
string joint
uint32 registerValue
bool coeffsLoaded
bool bridgeEnabled
bool motorEnabled
bool brakeReleased
bool motorPowerDetected
bool embeddedMotCom
bool jointFaulted
"""
  __slots__ = ['header','status']
  _slot_types = ['std_msgs/Header','nasa_r2_common_msgs/JointStatus[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(JointStatusArray, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.status is None:
        self.status = []
    else:
      self.header = std_msgs.msg.Header()
      self.status = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.status)
      buff.write(_struct_I.pack(length))
      for val1 in self.status:
        _x = val1.publisher
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.joint
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_I7B.pack(_x.registerValue, _x.coeffsLoaded, _x.bridgeEnabled, _x.motorEnabled, _x.brakeReleased, _x.motorPowerDetected, _x.embeddedMotCom, _x.jointFaulted))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.status is None:
        self.status = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.status = []
      for i in range(0, length):
        val1 = nasa_r2_common_msgs.msg.JointStatus()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.publisher = str[start:end].decode('utf-8')
        else:
          val1.publisher = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.joint = str[start:end].decode('utf-8')
        else:
          val1.joint = str[start:end]
        _x = val1
        start = end
        end += 11
        (_x.registerValue, _x.coeffsLoaded, _x.bridgeEnabled, _x.motorEnabled, _x.brakeReleased, _x.motorPowerDetected, _x.embeddedMotCom, _x.jointFaulted,) = _struct_I7B.unpack(str[start:end])
        val1.coeffsLoaded = bool(val1.coeffsLoaded)
        val1.bridgeEnabled = bool(val1.bridgeEnabled)
        val1.motorEnabled = bool(val1.motorEnabled)
        val1.brakeReleased = bool(val1.brakeReleased)
        val1.motorPowerDetected = bool(val1.motorPowerDetected)
        val1.embeddedMotCom = bool(val1.embeddedMotCom)
        val1.jointFaulted = bool(val1.jointFaulted)
        self.status.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.status)
      buff.write(_struct_I.pack(length))
      for val1 in self.status:
        _x = val1.publisher
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.joint
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_I7B.pack(_x.registerValue, _x.coeffsLoaded, _x.bridgeEnabled, _x.motorEnabled, _x.brakeReleased, _x.motorPowerDetected, _x.embeddedMotCom, _x.jointFaulted))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.status is None:
        self.status = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.status = []
      for i in range(0, length):
        val1 = nasa_r2_common_msgs.msg.JointStatus()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.publisher = str[start:end].decode('utf-8')
        else:
          val1.publisher = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.joint = str[start:end].decode('utf-8')
        else:
          val1.joint = str[start:end]
        _x = val1
        start = end
        end += 11
        (_x.registerValue, _x.coeffsLoaded, _x.bridgeEnabled, _x.motorEnabled, _x.brakeReleased, _x.motorPowerDetected, _x.embeddedMotCom, _x.jointFaulted,) = _struct_I7B.unpack(str[start:end])
        val1.coeffsLoaded = bool(val1.coeffsLoaded)
        val1.bridgeEnabled = bool(val1.bridgeEnabled)
        val1.motorEnabled = bool(val1.motorEnabled)
        val1.brakeReleased = bool(val1.brakeReleased)
        val1.motorPowerDetected = bool(val1.motorPowerDetected)
        val1.embeddedMotCom = bool(val1.embeddedMotCom)
        val1.jointFaulted = bool(val1.jointFaulted)
        self.status.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_I7B = struct.Struct("<I7B")
