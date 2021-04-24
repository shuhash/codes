import platform

print(dir(platform))

import platform

mysystem = platform.uname()

print(f"System : {mysystem.system}")
mysystem.node
mysystem.release
mysystem.version
mysystem.machine
mysystem.processor
