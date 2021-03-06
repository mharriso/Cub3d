#include <mlx.h>
#include <stdio.h>
void	heart(void *mlx_ptr, void *win_ptr, int s_x, int s_y, int color)
{
	char heart[13][20] =
    {
	"   *****    *****   ",
    "  ******    ******  ",
    " ********  ******** ",
    "********************",
    " ****************** ",
	"  ****************  ",
    "   **************   ",
	"    ************    ",
    "     **********     ",
	"      ********      ",
    "       ******       ",
	"        ****        ",
    "         **         "
    };
	for(int x = 0; x < 20; x++)
			for(int y = 0; y < 13; y++)
				if(heart[y][x] == '*')
					mlx_pixel_put(mlx_ptr, win_ptr, x + s_x, y + s_y, color);
}
// def	maxOnesAfterRemoveItem(nums):
// 	maxOnes = 0
// 	l = len(nums)
// 	i = 0
// 	left = 0
// 	right = 0
// 	while i < l and nums[i] == 0:
// 		i += 1
// 	while i < l:
// 		zero = 0
// 		left += nums[i]
// 		while i < l - 1 and nums[i] == 0:
// 	return maxOnes

// maxOnes = maxOnesAfterRemoveItem([0, 0, 1, 0, 1,0,1,1,1,1,1, 0])
// print(maxOnes)

void	big_heart(void *mlx_ptr, void *win_ptr, int s_x, int s_y, int color)
{
	float	dx;
	float	dy;

	dx = (float)s_x / 20;
	dy = (float)s_y / 13;

	char heart[13][20] =
    {
	"   *****    *****   ",
    "  ******    ******  ",
    " ********  ******** ",
    "********************",
    " ****************** ",
	"  ****************  ",
    "   **************   ",
	"    ************    ",
    "     **********     ",
	"      ********      ",
    "       ******       ",
	"        ****        ",
    "         **         "
    };
	for(int x = 0; x < s_x; x++)
			for(int y = 0; y < s_y; y++)
				if(heart[(int)(y / dy)][(int)(x / dx)] == '*')
					mlx_pixel_put(mlx_ptr, win_ptr, x, y, color);
}




// def delete_spaces(s):
// 	l = len(s) - 1
// 	if l == -1:
// 		return
// 	i = 0
// 	c = 'w'
// 	while i < l and s[i] == c:
// 		i += 1
// 	while l and s[l] == c:
// 		l -= 1
// 	while i <= l:
// 		if s[i] != c or s[i - 1] != c:
// 			print(s[i], end='')
// 		i += 1;

int main()
{
	void	*mlx;
	void	*win;


	int rx = 1000;
	int ry = 1000;

	mlx = mlx_init();
	win = mlx_new_window(mlx, rx, ry, "HEART");
	int color = 0x00FF0000;

	// for(int s_y = 5; s_y < 970; s_y += 25)
	// 	for(int s_x = 5; s_x < 970; s_x += 25)
	// 			heart(mlx_ptr, win_ptr, s_x, s_y, color += 2700000);

	big_heart(mlx, win, rx, ry, color);

	mlx_loop(mlx);
}
