// Nekki.SF2.GUI.Dialogs.LotteryDialog.KEFEEBDDFDD$$MoveNext @ RVA 0x328E990

bool Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD__MoveNext
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  UnityEngine_WaitForEndOfFrame_o *__this_00;
  UnityEngine_WaitForEndOfFrame_o **ppUVar4;
  long lVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  int32_t iVar8;
  LPGLKMNHELJ_o *pLVar9;
  Il2CppObject **ppIVar10;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this_01;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Menu_MainMenu_o *x_00;
  int32_t local_24;
  
  if ((DAT_04567303 & 1) == 0) {
                    /* try { // try from 0338e9ac to 0348e9b7 has its CatchHandler @ 0338ea38 */
    FUN_01bab630(&DPLBMJODBEK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
                    /* try { // try from 0338e9f0 to 0348ea1b has its CatchHandler @ 0338ea3c */
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    FUN_01bab630(&StringLiteral_14560);
    DAT_04567303 = 1;
    method = extraout_x1;
  }
  uVar1 = (__this->fields).__1__state;
  if (3 < uVar1) {
    return false;
  }
  __this_01 = (__this->fields).__4__this;
                    /* try { // try from 0338ea28 to 0348ea2b has its CatchHandler @ 0338ea48 */
                    /* try { // try from 0338ea2c to 0348ea2f has its CatchHandler @ 0338ea40 */
  switch(uVar1) {
  case 0:
                    /* try { // try from 0338ea30 to 0348ea33 has its CatchHandler @ 0338ea34 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ea30 with catch @ 0338ea34
                       try { // try from 0338ea34 to 0348ea63 has its CatchHandler @ 0338e8a8 */
    (__this->fields).__1__state = -1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338e9ac with catch @ 0338ea38
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338e9f0 with catch @ 0338ea3c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ea2c with catch @ 0338ea40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338e97c with catch @ 0338ea44
                        */
    __this_00 = (UnityEngine_WaitForEndOfFrame_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ea28 with catch @ 0338ea48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338e914 with catch @ 0338ea4c
                        */
    UnityEngine_WaitForEndOfFrame___ctor(__this_00,(MethodInfo *)0x0);
    ppUVar4 = &(__this->fields)._delay_5__2;
    *ppUVar4 = __this_00;
    thunk_FUN_01c20e04(ppUVar4,__this_00);
                    /* try { // try from 0338ea64 to 0348ea7b has its CatchHandler @ 0338ead4 */
    if ((__this_01 == (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0) ||
       (pLVar9 = (__this_01->fields).DKMMBMBMJBO, pLVar9 == (LPGLKMNHELJ_o *)0x0))
    goto LAB_0338ec8c;
    iVar2 = (pLVar9->fields).BGHFADDGPAD;
    if (iVar2 != 0) {
                    /* try { // try from 0338ea7c to 0348eac3 has its CatchHandler @ 0338e8a8 */
      if (iVar2 != 1) {
                    /* try { // try from 0338ebec to 0348ebf7 has its CatchHandler @ 0338ec78 */
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        pLVar9 = (__this_01->fields).DKMMBMBMJBO;
        if (pLVar9 != (LPGLKMNHELJ_o *)0x0) {
          local_24 = (pLVar9->fields).BGHFADDGPAD;
          pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(DPLBMJODBEK_TypeInfo,&local_24);
          if (args != (System_Object_array *)0x0) {
                    /* try { // try from 0338ec30 to 0348ec5b has its CatchHandler @ 0338ec7c */
            if ((pIVar6 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = pIVar6;
              thunk_FUN_01c20e04(args->m_Items,pIVar6);
                    /* try { // try from 0338ec68 to 0348ec6b has its CatchHandler @ 0338ec88 */
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0338ec6c to 0348ec6f has its CatchHandler @ 0338ec80 */
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 0338ec70 to 0348ec73 has its CatchHandler @ 0338ec74 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ec70 with catch @ 0338ec74
                       try { // try from 0338ec74 to 0348eca3 has its CatchHandler @ 0338eae8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ebec with catch @ 0338ec78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ec30 with catch @ 0338ec7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ec6c with catch @ 0338ec80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ebbc with catch @ 0338ec84
                        */
              UnityEngine_Debug__LogErrorFormat(StringLiteral_14560,args,(MethodInfo *)0x0);
              return false;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ec68 with catch @ 0338ec88
                        */
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
        goto LAB_0338ec8c;
      }
      ppIVar10 = &(__this->fields).__2__current;
      *ppIVar10 = (Il2CppObject *)(__this->fields)._delay_5__2;
      thunk_FUN_01c20e04(ppIVar10);
      iVar8 = 3;
      goto LAB_0338eba0;
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    goto LAB_0338eb2c;
  case 3:
    (__this->fields).__1__state = -1;
    goto LAB_0338ebb4;
  }
  lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
                    /* try { // try from 0338eac4 to 0348ead3 has its CatchHandler @ 0338ead4 */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
                    /* catch() { ... } // from try @ 0338ea64 with catch @ 0338ead4
                       catch() { ... } // from try @ 0338eac4 with catch @ 0338ead4 */
                    /* try { // try from 0338ead8 to 0348eadb has its CatchHandler @ 0338eae4 */
                    /* try { // try from 0338eadc to 0348eae7 has its CatchHandler @ 0338e8a8 */
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar5 + 0xb8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338ead8 with catch @ 0338eae4
                        */
                    /* try { // try from 0338eae8 to 0348eb53 has its CatchHandler @ 0338eae8
                       catch() { ... } // from try @ 0338eae8 with catch @ 0338eae8
                       catch() { ... } // from try @ 0338ec74 with catch @ 0338eae8
                       catch() { ... } // from try @ 0338ecbc with catch @ 0338eae8
                       catch() { ... } // from try @ 0338ed1c with catch @ 0338eae8 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    ppIVar10 = &(__this->fields).__2__current;
    *ppIVar10 = (Il2CppObject *)(__this->fields)._delay_5__2;
    thunk_FUN_01c20e04(ppIVar10);
    (__this->fields).__1__state = 1;
    return true;
  }
LAB_0338eb2c:
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
                    /* try { // try from 0338eb54 to 0348eb7f has its CatchHandler @ 0338ec8c */
  x_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    ppIVar10 = &(__this->fields).__2__current;
    *ppIVar10 = (Il2CppObject *)(__this->fields)._delay_5__2;
    thunk_FUN_01c20e04(ppIVar10);
    iVar8 = 2;
LAB_0338eba0:
    (__this->fields).__1__state = iVar8;
    return true;
  }
LAB_0338ebb4:
  if (__this_01 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0) {
                    /* try { // try from 0338ebbc to 0348ebe7 has its CatchHandler @ 0338ec84 */
    Nekki_SF2_GUI_Dialogs_LotteryDialog__PGDMPHCECDF(__this_01,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_LotteryDialog__BMMFIILCION(__this_01,(MethodInfo *)0x0);
    return false;
  }
LAB_0338ec8c:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338eb54 with catch @ 0338ec8c
                        */
  FUN_01bab8c8();
}

