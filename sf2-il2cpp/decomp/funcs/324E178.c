// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$LoadSection @ RVA 0x324E178

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadSection
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t BACJDPMBFFE,
               MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  NLPJLHOEAOE_o *__this_02;
  System_Collections_Generic_List_GeneralMenuList__o *pSVar4;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this_03;
  Il2CppObject *pIVar5;
  System_Enum_o local_58;
  int32_t local_48;
  
                    /* try { // try from 0334e184 to 0344e1d7 has its CatchHandler @ 0334e00c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e170 with catch @ 0334e1b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e0f4 with catch @ 0334e1b4
                        */
  if ((DAT_04567120 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e140 with catch @ 0334e1b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e0c4 with catch @ 0334e1bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e150 with catch @ 0334e1c0
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&JIAOLFMAECH_TypeInfo);
                    /* try { // try from 0334e1d8 to 0344e1db has its CatchHandler @ 0334e1fc */
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
                    /* try { // try from 0334e1dc to 0344e203 has its CatchHandler @ 0334e00c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8564);
    DAT_04567120 = 1;
  }
                    /* catch() { ... } // from try @ 0334e1d8 with catch @ 0334e1fc */
  local_58.klass = (System_Enum_c *)JIAOLFMAECH_TypeInfo;
                    /* try { // try from 0334e204 to 0344e217 has its CatchHandler @ 0334e278 */
  local_58.monitor = (void *)0xffffffffffffffff;
  local_48 = BACJDPMBFFE;
  pSVar3 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334e0d4 with catch @ 0334e218
                       try { // try from 0334e218 to 0344e22f has its CatchHandler @ 0334e00c */
  pSVar3 = System_String__Concat(StringLiteral_8564,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0334e230 to 0344e233 has its CatchHandler @ 0334e254 */
                    /* try { // try from 0334e234 to 0344e25b has its CatchHandler @ 0334e00c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  iVar1 = (__this->fields).AIAODGKGPEI;
                    /* catch() { ... } // from try @ 0334e230 with catch @ 0334e254 */
  (__this->fields).AIAODGKGPEI = BACJDPMBFFE;
  (__this->fields).FFPCEMDJGIK = iVar1;
                    /* try { // try from 0334e25c to 0344e263 has its CatchHandler @ 0334e278 */
  if (BACJDPMBFFE == 0) {
    __this_00 = (__this->fields).continueButton;
                    /* try { // try from 0334e264 to 0344e26f has its CatchHandler @ 0334e00c */
    if (__this_00 == (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)0x0) goto LAB_0334e380;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0334e270 to 0344e277 has its CatchHandler @ 0334e278 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0334e204 with catch @ 0334e278
                       catch(type#2 @ 00000000) { ... } // from try @ 0334e25c with catch @ 0334e278
                       catch(type#2 @ 00000000) { ... } // from try @ 0334e270 with catch @ 0334e278
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    __this_02 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_02 == (NLPJLHOEAOE_o *)0x0) goto LAB_0334e380;
    bVar2 = NLPJLHOEAOE__LHOFBEBHPDE(__this_02,(MethodInfo *)0x0);
    if (bVar2) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_0456647b == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_0456647b = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO != -1;
    }
    else {
      bVar2 = false;
    }
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_0334e380;
    UnityEngine_GameObject__SetActive(__this_01,bVar2,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields).menuList;
  if (pSVar4 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    __this_03 = (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (__this->fields).AIAODGKGPEI,
                           Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    pSVar4 = (__this->fields).menuList;
    if (((pSVar4 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
        (pIVar5 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,
                             (__this->fields).AIAODGKGPEI,
                             Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
        pIVar5 != (Il2CppObject *)0x0)) &&
       (__this_03 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0)) {
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
                (__this_03,*(int32_t *)&pIVar5[3].klass,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0334e380:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

