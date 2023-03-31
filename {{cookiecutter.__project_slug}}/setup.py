from setuptools import setup, find_packages

setup(
    name='{{cookiecutter.__project_folder}}',
    version='0.1',
    packages=find_packages(include=["{{cookiecutter.__project_folder}}"]),
    package_data={"{{cookiecutter.__project_folder}}": ["*.h", "*.cpp", "*.c", "*.cmake"]},
)