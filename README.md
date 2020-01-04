it is providing to write simply code enviroment.  
you can write only test code with imgui and you don't need to prepare window and graphics.  



like this.  


    int main(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmdLine, int nCmdShow)
    {
    	Application app;   

    	app.update([&]()
    		{
    			// do something...
    			ImGui::Begin("Hello, world!");
    			ImGui::End();
    		});

    	return 0;
    }


write test code only at main.cpp
