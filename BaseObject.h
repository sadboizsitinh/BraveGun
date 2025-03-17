#ifndef BASE_OBJECT_H_
#define BASE_OBJECT_H_

#include "CommonFunc.h"

class BaseObject
{
public:
	BaseObject() : rect_({ 0, 0, 0, 0 }), p_object_(nullptr) {} // Khởi tạo giá trị mặc định
	~BaseObject() { Free(); }

	void SetRect(int x, int y) { rect_.x = x; rect_.y = y; }  // Bỏ `const &`
	SDL_Rect GetRect() const { return rect_; }
	SDL_Texture* GetObject() const { return p_object_; }

	bool LoadImg(std::string path, SDL_Renderer* screen);
	void Render(SDL_Renderer* des, const SDL_Rect* clip = nullptr);
	void Free();
protected:
	SDL_Texture* p_object_;
	SDL_Rect rect_;
};

#endif  // BASE_OBJECT_H_
