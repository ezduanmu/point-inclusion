// This inclusion is necessary, or LEDA's includes will get mad.
#include <limits.h>
// -------------------------------------------------------------
#include <LEDA/graphics/window.h>
#include <LEDA/graphics/color.h>
using namespace leda;

main() {

  // create and display window
  window W(200, 200);
  W.display();

  // draw points
  W.draw_point(32, 48);
  W.draw_point(63, 90);
  W.draw_point(17, 24);
  W.draw_point(56, 62);
  W.draw_point(45, 45);

  W.read_mouse();

  // draw line segments
  W.draw_segment(17, 24, 32, 48);
  W.draw_segment(32, 48, 45, 45);

  W.read_mouse();

  // delete  a segment
  W.draw_segment(32, 48, 45, 45, white);
  W.read_mouse();

  W.draw_segment(32, 48, 63, 90);
  W.draw_segment(63, 90, 45, 45);
  W.draw_segment(45, 45, 15, 24);

  W.read_mouse();
  W.close();

}
