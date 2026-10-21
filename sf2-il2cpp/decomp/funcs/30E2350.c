// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$Instantiate @ RVA 0x30E2350

Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Instantiate(MethodInfo *method)

{
  int32_t index;
  Il2CppObject *original;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar2;
  MethodInfo *method_00;
  long lVar3;
  
  if ((DAT_045663c0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidViewContainer>__);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10985);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10415);
    DAT_045663c0 = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10415,Method_UnityEngine_Resources_Load<GameObject>__);
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if ((UnityEngine_Component_o *)**(undefined8 **)(lVar3 + 0xb8) != (UnityEngine_Component_o *)0x0)
  {
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)**(undefined8 **)(lVar3 + 0xb8),(MethodInfo *)0x0
                       );
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 031e2484 to 032e248b has its CatchHandler @ 031e27e4 */
    __this = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 031e24a0 to 032e24a7 has its CatchHandler @ 031e27dc */
    if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo);
    }
    OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_10985,StringLiteral_1,(MethodInfo *)0x0);
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                    /* try { // try from 031e24dc to 032e2507 has its CatchHandler @ 031e27e8 */
      DAT_04565b84 = '\x01';
    }
    __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((__this_00 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      index = UnityEngine_Transform__GetSiblingIndex(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 031e2510 to 032e2517 has its CatchHandler @ 031e27d8 */
      if ((__this != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 031e252c to 032e2533 has its CatchHandler @ 031e2738 */
        UnityEngine_Transform__SetSiblingIndex(pUVar1,index,(MethodInfo *)0x0);
        pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (__this,Method_UnityEngine_GameObject_GetComponent<RaidViewContainer>__);
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
          pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GIENGNEGHPJ(pNVar2,method_00);
          return pNVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

