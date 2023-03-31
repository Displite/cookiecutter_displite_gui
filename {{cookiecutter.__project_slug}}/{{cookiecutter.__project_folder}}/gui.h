#ifndef _GUI_H_
#define _GUI_H_

#include "interface.h"
#include "displays/{{cookiecutter.display_driver}}.h"

#ifdef __cplusplus
extern "C" {
#endif

#define GUI_PREFERRED_ROTATION 1

class {{cookiecutter.__project_slug}}: public interface::gui {
    public:
    {{cookiecutter.__project_slug}}(const lv_disp_t *);
};




// Do not modify
#define GUI_CLS {{cookiecutter.__project_slug}}
#define DSP_DRV_CLS display::{{cookiecutter.display_driver}}

#ifdef __cplusplus
}
#endif

#endif