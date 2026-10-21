// Nekki.SF2.GUI.Menu.MainMenu$$Show @ RVA 0x356DF5C

void Nekki_SF2_GUI_Menu_MainMenu__Show(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
                    /* try { // try from 0366df68 to 0376df6f has its CatchHandler @ 036731e0 */
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0366df80 to 0376df87 has its CatchHandler @ 036731dc */
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

