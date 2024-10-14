# generated from rosidl_generator_py/resource/_idl.py.em
# with input from boeingtest_msg:srv/Shiji.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Shiji_Request(type):
    """Metaclass of message 'Shiji_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('boeingtest_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'boeingtest_msg.srv.Shiji_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__shiji__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__shiji__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__shiji__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__shiji__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__shiji__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Shiji_Request(metaclass=Metaclass_Shiji_Request):
    """Message class 'Shiji_Request'."""

    __slots__ = [
        '_choice',
        '_x',
        '_y',
        '_the',
    ]

    _fields_and_field_types = {
        'choice': 'int32',
        'x': 'float',
        'y': 'float',
        'the': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.the = kwargs.get('the', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.choice != other.choice:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.the != other.the:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def choice(self):
        """Message field 'choice'."""
        return self._choice

    @choice.setter
    def choice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'choice' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'choice' field must be an integer in [-2147483648, 2147483647]"
        self._choice = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def the(self):
        """Message field 'the'."""
        return self._the

    @the.setter
    def the(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'the' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'the' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._the = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Shiji_Response(type):
    """Metaclass of message 'Shiji_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('boeingtest_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'boeingtest_msg.srv.Shiji_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__shiji__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__shiji__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__shiji__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__shiji__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__shiji__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Shiji_Response(metaclass=Metaclass_Shiji_Response):
    """Message class 'Shiji_Response'."""

    __slots__ = [
        '_distance',
        '_factx',
        '_facty',
    ]

    _fields_and_field_types = {
        'distance': 'double',
        'factx': 'float',
        'facty': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance = kwargs.get('distance', float())
        self.factx = kwargs.get('factx', float())
        self.facty = kwargs.get('facty', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.distance != other.distance:
            return False
        if self.factx != other.factx:
            return False
        if self.facty != other.facty:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value

    @builtins.property
    def factx(self):
        """Message field 'factx'."""
        return self._factx

    @factx.setter
    def factx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'factx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'factx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._factx = value

    @builtins.property
    def facty(self):
        """Message field 'facty'."""
        return self._facty

    @facty.setter
    def facty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'facty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'facty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._facty = value


class Metaclass_Shiji(type):
    """Metaclass of service 'Shiji'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('boeingtest_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'boeingtest_msg.srv.Shiji')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__shiji

            from boeingtest_msg.srv import _shiji
            if _shiji.Metaclass_Shiji_Request._TYPE_SUPPORT is None:
                _shiji.Metaclass_Shiji_Request.__import_type_support__()
            if _shiji.Metaclass_Shiji_Response._TYPE_SUPPORT is None:
                _shiji.Metaclass_Shiji_Response.__import_type_support__()


class Shiji(metaclass=Metaclass_Shiji):
    from boeingtest_msg.srv._shiji import Shiji_Request as Request
    from boeingtest_msg.srv._shiji import Shiji_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
