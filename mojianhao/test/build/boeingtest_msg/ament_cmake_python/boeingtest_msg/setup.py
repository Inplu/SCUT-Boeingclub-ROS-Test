from setuptools import find_packages
from setuptools import setup

setup(
    name='boeingtest_msg',
    version='0.0.0',
    packages=find_packages(
        include=('boeingtest_msg', 'boeingtest_msg.*')),
)
