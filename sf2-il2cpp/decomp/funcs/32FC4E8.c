// Nekki.SF2.GUI.Menu.MenuExpPanel$$EBKOKBBGNFM @ RVA 0x32FC4E8

void Nekki_SF2_GUI_Menu_MenuExpPanel__EBKOKBBGNFM
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  System_String_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  int32_t local_14;
  
  __this_00 = (__this->fields).OKNKKHGBECG;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    local_14 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033fc508 to 034fc50f has its CatchHandler @ 033fc5dc */
    pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._labelLevel;
    if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033fc520 to 034fc523 has its CatchHandler @ 033fc5d4 */
                    /* try { // try from 033fc52c to 034fc547 has its CatchHandler @ 033fc5c4 */
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar1,(pUVar2->klass->vtable)._75_set_text.method);
  }
  return;
}

