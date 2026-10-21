// Nekki.SF2.GUI.Tutorial.TutorialCanvas$$OMGKLOIPHAJ @ RVA 0x318FF04

void Nekki_SF2_GUI_Tutorial_TutorialCanvas__OMGKLOIPHAJ
               (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fed4 with catch @ 0328ff04
                        */
  __this_00 = (__this->fields)._Blocker;
                    /* try { // try from 0328ff14 to 0338ff17 has its CatchHandler @ 0328ff28 */
  if ((__this_00 != (UnityEngine_UI_Graphic_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 0328ff14 with catch @ 0328ff28 */
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

