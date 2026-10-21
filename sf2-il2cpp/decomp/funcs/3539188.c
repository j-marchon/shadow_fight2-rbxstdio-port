// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$OOIMKCKLBAI @ RVA 0x3539188

System_Collections_Generic_List_KMDOLFBIGNC__o *
Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__OOIMKCKLBAI
          (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_KMDOLFBIGNC__o *__this_00;
  KMDOLFBIGNC_o *__this_01;
  PGICCMFLDPI_o *__this_02;
  PGICCMFLDPI_o **ppPVar3;
  MethodInfo *extraout_x1;
  KMDOLFBIGNC_array *pKVar4;
  int iVar5;
  
  if ((DAT_04568ab4 & 1) == 0) {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568ab4 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KMDOLFBIGNC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
  __this_01 = (KMDOLFBIGNC_o *)thunk_FUN_01bda818(KMDOLFBIGNC_TypeInfo);
  KMDOLFBIGNC___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (KMDOLFBIGNC_o *)0x0) {
    (__this_01->fields).HCBJCMDLODI = 1;
    (__this_01->fields).PDOMCPONBNB = 1;
    __this_02 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
    PGICCMFLDPI___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (PGICCMFLDPI_o *)0x0) {
      (__this_02->fields).GDKPGIBMFPA = 1;
      ppPVar3 = &(__this_01->fields).PNGGPPDKHPH;
      *ppPVar3 = __this_02;
      thunk_FUN_01c20e04(ppPVar3,__this_02);
      if (__this_00 != (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) {
        iVar5 = 10;
        while( true ) {
          lVar2 = Method_System_Collections_Generic_List<KMDOLFBIGNC>_Add__;
          pKVar4 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pKVar4 == (KMDOLFBIGNC_array *)0x0) break;
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pKVar4->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pKVar4->m_Items[(int)uVar1] = __this_01;
            thunk_FUN_01c20e04(pKVar4->m_Items + (int)uVar1,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) {
            return __this_00;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

