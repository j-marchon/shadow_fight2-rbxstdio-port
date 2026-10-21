// BBJEEHDMNGJ$$MAHFCKJGBPP @ RVA 0x31B7468

void BBJEEHDMNGJ__MAHFCKJGBPP(BBJEEHDMNGJ_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  long lVar1;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *pNVar2;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_01;
  UnityEngine_Transform_o *INPDGILCEBL;
  LabelButton_o **ppLVar3;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
  if ((DAT_04566bbe & 1) == 0) {
                    /* catch() { ... } // from try @ 032b7460 with catch @ 032b748c */
    FUN_01bab630(&Method_BBJEEHDMNGJ_OANGGKCBAOJ__);
                    /* try { // try from 032b749c to 033b74a3 has its CatchHandler @ 032b74b8 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 032b74a4 to 033b74af has its CatchHandler @ 032b736c */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032b74b0 to 033b74b7 has its CatchHandler @ 032b74b8 */
    DAT_04566bbe = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b749c with catch @ 032b74b8
                       catch(type#2 @ 00000000) { ... } // from try @ 032b74b0 with catch @ 032b74b8
                        */
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
    lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    if (**(long **)(lVar1 + 0xb8) != 0) {
      (__this->fields).PMMMEDPGNFO =
           *(Nekki_SF2_GUI_Shop_Forge_ForgePanel_o **)(**(long **)(lVar1 + 0xb8) + 0x110);
      thunk_FUN_01c20e04();
      lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
           (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) &&
         (pNVar2 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent
                             ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8),
                              (MethodInfo *)0x0),
         pNVar2 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0)) {
        ppLVar3 = &(__this->fields).MEIDNEHHHKI;
        *ppLVar3 = (pNVar2->fields)._ForgeOpenButton;
        thunk_FUN_01c20e04(ppLVar3);
        if (*ppLVar3 != (LabelButton_o *)0x0) {
          SFButton__set_IsFlashing((SFButton_o *)*ppLVar3,true,(MethodInfo *)0x0);
          if (*ppLVar3 != (LabelButton_o *)0x0) {
            __this_02 = (UnityEngine_Events_UnityEvent_o *)
                        ((*ppLVar3)->fields).super.super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
              AKJJAPEHKCG__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)*ppLVar3,(MethodInfo *)0x0);
              __this_01 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
              if ((*ppLVar3 != (LabelButton_o *)0x0) &&
                 (INPDGILCEBL = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)*ppLVar3,(MethodInfo *)0x0),
                 __this_01 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) {
                Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                          (__this_01,INPDGILCEBL,(UnityEngine_Vector2_o)0x43820000,90.0,
                           (MethodInfo *)0x0);
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

