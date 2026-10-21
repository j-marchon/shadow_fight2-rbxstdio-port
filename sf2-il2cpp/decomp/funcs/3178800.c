// Nekki.SF2.GUI.Pvp.SelectModule$$BJBEBBGINAH @ RVA 0x3178800

void Nekki_SF2_GUI_Pvp_SelectModule__BJBEBBGINAH
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_SelectModule_o *__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  System_Action_T0__T1__T2__o *pSVar4;
  System_Enum_o *pSVar5;
  long lVar6;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *pNVar7;
  MethodInfo *method_00;
  OCOAGJDCJPL_o *__this_01;
  JPGJLKENNCC_o *__this_02;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_04566969 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    DAT_04566969 = 1;
  }
  Nekki_SF2_GUI_UIModule__BJBEBBGINAH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP(__this_00,method_00);
  (*(__this->klass->vtable)._8_SetSecondPlayerAvailable.methodPtr)
            (__this,(ulong)bVar1,(__this->klass->vtable)._8_SetSecondPlayerAvailable.method);
  (*(__this->klass->vtable)._9_FDDCDDKINHH.methodPtr)
            (__this,(__this->klass->vtable)._9_FDDCDDKINHH.method);
  (*(__this->klass->vtable)._12_HCKMKFBGPIM.methodPtr)
            (__this,(__this->klass->vtable)._12_HCKMKFBGPIM.method);
  pUVar2 = (__this->fields)._shadowImage;
  if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 032788c0 to 03378953 has its CatchHandler @ 032788c0
                       catch() { ... } // from try @ 032788c0 with catch @ 032788c0
                       catch() { ... } // from try @ 0327895c with catch @ 032788c0
                       catch() { ... } // from try @ 032789b4 with catch @ 032788c0
                       catch() { ... } // from try @ 032789d8 with catch @ 032788c0
                       catch() { ... } // from try @ 03278a10 with catch @ 032788c0 */
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
              (0,0,0,0,pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
    pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
      __this_01 = (pNVar3->fields).KIHMKIEFOEI;
      pSVar4 = (System_Action_T0__T1__T2__o *)
               thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
      System_Action<Int32Enum,_int,_Int32Enum>___ctor();
      local_34 = 0;
      pSVar5 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
      if (__this_01 != (OCOAGJDCJPL_o *)0x0) {
        FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                  ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar4,pSVar5,
                   Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
        pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
          __this_02 = (pNVar3->fields).GMLEPHMBMPD;
          pSVar4 = (System_Action_T0__T1__T2__o *)
                   thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* try { // try from 03278954 to 0337895b has its CatchHandler @ 032789bc */
                    /* try { // try from 0327895c to 033789af has its CatchHandler @ 032788c0 */
          System_Action<Int32Enum,_int,_Int32Enum>___ctor();
          local_38 = 0;
          pSVar5 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
          if (__this_02 != (JPGJLKENNCC_o *)0x0) {
            FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                      ((FMKGOOONJKB_T0__T1__T2__o *)__this_02,pSVar4,pSVar5,
                       Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
            lVar6 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01b81620();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
                    /* try { // try from 032789b0 to 033789b3 has its CatchHandler @ 032789b8 */
                    /* try { // try from 032789b4 to 033789d3 has its CatchHandler @ 032788c0 */
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032789b0 with catch @ 032789b8
                        */
              lVar6 = FUN_01b81620();
            }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03278954 with catch @ 032789bc
                        */
            if ((**(long **)(lVar6 + 0xb8) != 0) &&
               (pNVar7 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)
                          (**(long **)(lVar6 + 0xb8) + 200),
               pNVar7 != (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) {
                    /* try { // try from 032789d4 to 033789d7 has its CatchHandler @ 03278a00 */
                    /* try { // try from 032789d8 to 03378a07 has its CatchHandler @ 032788c0 */
              Nekki_SF2_GUI_Pvp_PvPHintController__SetLeftHintListAnimationAvailable
                        (pNVar7,true,(MethodInfo *)0x0);
              lVar6 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_01b81620();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 032789d4 with catch @ 03278a00 */
                lVar6 = FUN_01b81620();
              }
                    /* try { // try from 03278a08 to 03378a0f has its CatchHandler @ 03278a24 */
                    /* try { // try from 03278a10 to 03378a1b has its CatchHandler @ 032788c0 */
              if ((**(long **)(lVar6 + 0xb8) != 0) &&
                 (pNVar7 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)
                            (**(long **)(lVar6 + 0xb8) + 200),
                 pNVar7 != (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) {
                    /* try { // try from 03278a1c to 03378a23 has its CatchHandler @ 03278a24 */
                Nekki_SF2_GUI_Pvp_PvPHintController__SetRightHintListAnimationAvailable
                          (pNVar7,true,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03278a08 with catch @ 03278a24
                       catch(type#2 @ 00000000) { ... } // from try @ 03278a1c with catch @ 03278a24
                        */
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

