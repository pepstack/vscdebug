# Windows��ʹ��VSCode���mingw����͵���C����

����:

[Windows��ʹ��VSCode���mingw����͵���C����](https://blog.csdn.net/ubuntu64fan/article/details/106689478)


- settings.json

		{
		    "java.home": "C:\\DEVPACK\\Java\\jdk1.8.0_162",
		    "java.help.firstView": "gettingStarted",
		    "remote.SSH.remotePlatform": {
		        "pc": "linux",
		        "vm-cent7": "linux"
		    },
		    "java.configuration.checkProjectSettingsExclusions": false,
		    "java.jdt.ls.vmargs": "-XX:+UseParallelGC -XX:GCTimeRatio=4 -XX:AdaptiveSizePolicyWeight=90 -Dsun.zip.disableMemoryMapping=true -Xmx1G -Xms100m -javaagent:\"/home/cl/.vscode-server/extensions/gabrielbb.vscode-lombok-1.0.1/server/lombok.jar\"",
		    "editor.suggestSelection": "first",
		    "vsintellicode.modify.editor.suggestSelection": "automaticallyOverrodeDefaultValue",
		    "window.zoomLevel": 1,
		    "git.ignoreLegacyWarning": true,
		    "editor.formatOnSave": true,
		    "terminal.integrated.shell.windows": "${env:MSYS64_HOME}/usr/bin/bash.exe",
		    "terminal.integrated.shellArgs.windows": ["--login"],
		    "terminal.integrated.env.windows": {
		        "MSYSTEM": "MINGW64",
		        "CONTITLE": "MinGW x64",
		        "C_INCLUDE_PATH": "/mingw64/include",
		        "CPLUS_INCLUDE_PATH": "/mingw64/include"
		    }
		}

- ����Ŀ¼����

��Ϊ vscdebug��Ŀ��C��, ����Ϊ�˵���, ����Ҫ��������������. �Թ���Ա���� cmd, �������������:

	C:\Windows\system32>cd \
	
	C:\>mklink /J "/C" "C:\"
	Ϊ /C <<===>> C:\ ����������

��������� E:\ ������ĸ�Ϊ:

	C:\>mklink /J "/E" "E:\"


- ��ʼ����Դ����

ֱ����vscode��vscdebugĿ¼, �� F5 ����. ������ cygwin, �л��� vscdebugĿ¼, ��������: code .
������Ŀ, ��F5����.

