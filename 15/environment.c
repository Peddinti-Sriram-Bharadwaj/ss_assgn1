/*
Name : 15
Author : Sriram Bharadwaj
Description : 
Write a program to display the environmental variable of the user (use environ). 
Date :- Aug 29 2024
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){

extern char **environ;
while(*environ){
printf("%s\n",*environ);
environ++;
}

return 0;
}

/*__CFBundleIdentifier=com.apple.Terminal
TMPDIR=/var/folders/b8/cky_62q57zxch2nprk7rqs0m0000gn/T/
XPC_FLAGS=0x0
TERM=xterm-256color
SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.5ZtkLWRYt9/Listeners
XPC_SERVICE_NAME=0
TERM_PROGRAM=Apple_Terminal
TERM_PROGRAM_VERSION=454.1
TERM_SESSION_ID=A14DA715-9692-4DBC-BC03-C3F2A44E3701
SHELL=/bin/zsh
HOME=/Users/srirambharadwaj
LOGNAME=srirambharadwaj
USER=srirambharadwaj
PATH=/opt/anaconda3/condabin:/opt/homebrew/bin:/opt/homebrew/sbin:/Library/Frameworks/Python.framework/Versions/3.12/bin:/usr/local/bin:/System/Cryptexes/App/usr/bin:/usr/bin:/bin:/usr/sbin:/sbin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/local/bin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/bin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/appleinternal/bin:/Library/Apple/usr/bin
SHLVL=1
PWD=/Users/srirambharadwaj/iiitb/sem1/ss/assgn1/15
OLDPWD=/Users/srirambharadwaj/iiitb/sem1/ss/assgn1
HOMEBREW_PREFIX=/opt/homebrew
HOMEBREW_CELLAR=/opt/homebrew/Cellar
HOMEBREW_REPOSITORY=/opt/homebrew
INFOPATH=/opt/homebrew/share/info:
CONDA_EXE=/opt/anaconda3/bin/conda
_CE_M=
_CE_CONDA=
CONDA_PYTHON_EXE=/opt/anaconda3/bin/python
CONDA_SHLVL=0
LC_CTYPE=UTF-8
_=/Users/srirambharadwaj/iiitb/sem1/ss/assgn1/15/./environment.out
*/
