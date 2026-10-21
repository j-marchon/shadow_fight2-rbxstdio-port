// Nekki.SF2.GUI.Menu.MainMenu$$PPEKFEEHHGI @ RVA 0x356DC44

void Nekki_SF2_GUI_Menu_MainMenu__PPEKFEEHHGI
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  
  __this_00 = (__this->fields)._skipTutorialBtn;
                    /* try { // try from 0366dc50 to 0376dc57 has its CatchHandler @ 03672e68 */
                    /* try { // try from 0366dc58 to 0376dc67 has its CatchHandler @ 036731f0 */
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._newPerksCircle;
                    /* try { // try from 0366dc70 to 0376dc7f has its CatchHandler @ 03672e64 */
    if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._newPerksEllipse;
                    /* try { // try from 0366dc90 to 0376dc97 has its CatchHandler @ 03672e60 */
      if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366dca8 to 0376dcaf has its CatchHandler @ 03672e5c */
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

