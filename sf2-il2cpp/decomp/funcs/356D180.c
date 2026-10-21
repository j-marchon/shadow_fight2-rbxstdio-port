// Nekki.SF2.GUI.Menu.MainMenu$$LDCBIKHNKKL @ RVA 0x356D180

void Nekki_SF2_GUI_Menu_MainMenu__LDCBIKHNKKL
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  int32_t KGBNBLGMCBF;
  UnityEngine_UI_Image_o *pUVar1;
  System_Action_bool__o *CJNHFNHJHPE;
  System_Action_MenuScroll_OAPJJKKCANC__o *CJNHFNHJHPE_00;
  System_Action_o *CJNHFNHJHPE_01;
  NDPMLPGANCI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568c47 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* try { // try from 0366d1b0 to 0376d1b7 has its CatchHandler @ 036732bc */
    FUN_01bab630(&System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 0366d1c8 to 0376d1cf has its CatchHandler @ 036732b8 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_GKFNLJGEFOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KBCAFHKPLJD__);
                    /* try { // try from 0366d1dc to 0376d1e3 has its CatchHandler @ 036732b4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KGNGNPNKAID__);
    DAT_04568c47 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MainMenu__JGOEDIHMJLB(__this,method);
                    /* try { // try from 0366d1f4 to 0376d1fb has its CatchHandler @ 036732b0 */
  Nekki_SF2_GUI_Menu_MainMenu__PPEKFEEHHGI(__this,method_00);
                    /* try { // try from 0366d1fc to 0376d20b has its CatchHandler @ 036732ac */
  Nekki_SF2_GUI_Menu_MainMenu__FEEIBFFCAAH(__this,method_01);
  pUVar1 = (__this->fields)._backgroundPicture;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuScroll__Init
              ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._backgroundPicture;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366d224 to 0376d25f has its CatchHandler @ 0367333c */
      *(undefined2 *)((long)&(pUVar1->fields).super.super.m_OnDirtyMaterialCallback + 6) = 0x101;
      CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      Nekki_SF2_GUI_Menu_MenuScroll__add_OnChanging
                ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._backgroundPicture;
                    /* try { // try from 0366d27c to 0376d287 has its CatchHandler @ 036732a8 */
      CJNHFNHJHPE_00 =
           (System_Action_MenuScroll_OAPJJKKCANC__o *)
           thunk_FUN_01bda818(System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366d298 to 0376d29f has its CatchHandler @ 036732a4 */
                    /* try { // try from 0366d2b0 to 0376d2b7 has its CatchHandler @ 036732a0 */
        Nekki_SF2_GUI_Menu_MenuScroll__add_OnRolling
                  ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._backgroundPicture;
        CJNHFNHJHPE_01 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0366d2c4 to 0376d2cb has its CatchHandler @ 0367329c */
        System_Action___ctor();
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366d2dc to 0376d2e3 has its CatchHandler @ 03673298 */
                    /* try { // try from 0366d2e4 to 0376d2f3 has its CatchHandler @ 03673294 */
          method_02 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_Menu_MenuScroll__add_OnTouch
                    ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,CJNHFNHJHPE_01,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._backgroundPicture;
          if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
            Nekki_SF2_GUI_Menu_MenuScroll__Collapse
                      ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,0.0,(MethodInfo *)0x0);
            __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            if (__this_00 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0366d30c to 0376d347 has its CatchHandler @ 03673310 */
              KGBNBLGMCBF = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Menu_MainMenu__UpdateCurrentButton(__this,KGBNBLGMCBF,method_02);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

