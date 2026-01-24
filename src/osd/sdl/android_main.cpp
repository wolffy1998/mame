#ifdef __ANDROID__

// 随便返回结果，重写的myosd不走这里通信
extern "C" int SDL_main(int argc, char *argv[]) {
    return 0; 
}

// Using this in main library to prevent linker removing SDL_main
int dummy_main(int argc, char** argv)
{
	return SDL_main(argc, argv);
}

#endif /* __ANDROID__ */
