// Nekki.SF2.GUI.Menu.MainMenu$$GetScrollBtn @ RVA 0x356E714

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Menu_MainMenu__GetScrollBtn(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  
  pUVar1 = (__this->fields)._backgroundPicture;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366e720 to 0376e727 has its CatchHandler @ 03672c08 */
    return (UnityEngine_UI_Button_o *)(pUVar1->fields).super.super.m_RectTransform;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

