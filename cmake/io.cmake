# var-system

#set(SAY "ayin!") # SAY = "ayin!"

if(SAY) # if defined
  message("What to say? Say: ${SAY}")
endif()

if(ANDROID OR LINUX)
  message("linux")
endif()
