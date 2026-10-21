// Nekki.SF2.GUI.Menu.MainMenu$$Hide @ RVA 0x356D600

void Nekki_SF2_GUI_Menu_MainMenu__Hide(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0366d61c to 0376d623 has its CatchHandler @ 03673690 */
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

