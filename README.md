# Windows上使用VSCode结合mingw编译和调试C程序

本文:

[Windows上使用VSCode结合mingw编译和调试C程序](https://blog.csdn.net/ubuntu64fan/article/details/106689478)


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

- 创建目录链接

因为 vscdebug项目在C盘, 所以为了调试, 还需要创建驱动器链接. 以管理员运行 cmd, 输入下面的命令:

	C:\Windows\system32>cd \
	
	C:\>mklink /J "/C" "C:\"
	为 /C <<===>> C:\ 创建的联接

如果代码在 E:\ 则上面的改为:

	C:\>mklink /J "/E" "E:\"


- 开始调试源代码

直接用vscode打开vscdebug目录, 按 F5 调试. 或者用 cygwin, 切换到 vscdebug目录, 输入命令: code .
启动项目, 按F5调试.

