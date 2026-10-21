// Nekki.SF2.GUI.Tutorial.TutorialCanvas$$Awake @ RVA 0x318FD6C

void Nekki_SF2_GUI_Tutorial_TutorialCanvas__Awake
               (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._Blocker;
                    /* try { // try from 0328fd80 to 0338fdab has its CatchHandler @ 0328fefc */
  if ((__this_00 != (UnityEngine_UI_Graphic_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

