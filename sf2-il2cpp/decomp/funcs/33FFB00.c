// MGNPHCAAEIO$$NAHBGMCPFGG @ RVA 0x33FFB00

Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *
MGNPHCAAEIO__NAHBGMCPFGG(int32_t FKGMMAEOIMI,MethodInfo *method)

{
  bool bVar1;
  byte bVar2;
  int index;
  MGNPHCAAEIO_c *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this;
  HOOAAGABMBL_o *pHVar3;
  int64_t iVar4;
  HOOAAGABMBL_o *pHVar5;
  OPAAGMJJLCN_o *__this_00;
  HOOAAGABMBL_o **ppHVar6;
  Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *pNVar7;
  MethodInfo *extraout_x1;
  int index_00;
  
  if ((DAT_04567fe3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&OPAAGMJJLCN_TypeInfo);
    DAT_04567fe3 = 1;
    method = extraout_x1;
  }
  method_00 = MGNPHCAAEIO_TypeInfo;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this = MGNPHCAAEIO__GDDFDEGAFBN((MethodInfo *)method_00);
  if (__this != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    if (0 < (__this->fields)._size) {
      index_00 = 1;
      do {
        index = index_00 + -1;
        pHVar3 = (HOOAAGABMBL_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,index,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
        if (pHVar3 == (HOOAAGABMBL_o *)0x0) goto LAB_034ffcc4;
        iVar4 = HOOAAGABMBL__FKKAEBAKBOO(pHVar3,(MethodInfo *)0x0);
        if (FKGMMAEOIMI <= iVar4) {
          pHVar3 = (HOOAAGABMBL_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this,index,
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          if (index < (__this->fields)._size + -1) {
            pHVar5 = (HOOAAGABMBL_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this,index_00,
                                Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          }
          else {
            pHVar5 = (HOOAAGABMBL_o *)0x0;
          }
          if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
            return (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *)0x0;
          }
          __this_00 = (OPAAGMJJLCN_o *)thunk_FUN_01bda818(OPAAGMJJLCN_TypeInfo);
          OPAAGMJJLCN___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 != (OPAAGMJJLCN_o *)0x0) {
            (__this_00->fields).LAAFDEECMEH = pHVar3;
            thunk_FUN_01c20e04(&__this_00->fields,pHVar3);
            ppHVar6 = &(__this_00->fields).KIGLPGDMOMK;
            *ppHVar6 = pHVar5;
            thunk_FUN_01c20e04(ppHVar6,pHVar5);
            pNVar7 = (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *)
                     GCIFMNHADDF__ACDDKABEBAP(0x168,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
            if (pNVar7 == (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *)0x0) {
              return (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *)0x0;
            }
            bVar2 = (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_TypeInfo->_2).naturalAligment;
            if ((((Nekki_SF2_GUI_Dialogs_BaseDialog_c *)pNVar7->klass)->_2).naturalAligment < bVar2)
            {
              return (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *)0x0;
            }
            if ((((Nekki_SF2_GUI_Dialogs_BaseDialog_c *)pNVar7->klass)->_2).typeHierarchy
                [(ulong)bVar2 - 1] !=
                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_TypeInfo) {
              return (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *)0x0;
            }
            return pNVar7;
          }
          goto LAB_034ffcc4;
        }
        bVar1 = index_00 < (__this->fields)._size;
        index_00 = index_00 + 1;
      } while (bVar1);
    }
    return (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *)0x0;
  }
LAB_034ffcc4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

