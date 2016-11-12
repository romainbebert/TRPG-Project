class Engine;

virtual class GameState{

	private : 
		Engine engine_;

	public :
		GameState(Engine engine);
		virtual void update(double delta) = 0;
		virtual void render(){ renderer_.render(); }

};
