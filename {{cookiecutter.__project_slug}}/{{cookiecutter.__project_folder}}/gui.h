#ifndef _GUI_H_
#define _GUI_H_

#include "interface.h"
#include "displays/{{cookiecutter.display_driver}}.h"

#ifdef __cplusplus
extern "C" {
#endif

#define GUI_PREFERRED_ROTATION 1
#define PREFERRED_THEME lv_theme_default_init

class {{cookiecutter.__project_slug}}: public interface::gui {
    public:
    {{cookiecutter.__project_slug}}(short, short);
};




// Do not modify
#define GUI_CLS {{cookiecutter.__project_slug}}
#define DSP_DRV_CLS display::{{cookiecutter.display_driver}}

#ifdef __cplusplus
}
#endif

#endif