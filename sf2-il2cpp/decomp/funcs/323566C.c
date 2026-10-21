// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$EODGBHJEKCE @ RVA 0x323566C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__EODGBHJEKCE
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int32_t iVar4;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *BCJJJBOCPJJ;
  MethodInfo *in_x3;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *pSVar5;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *__this_00;
  
  if ((DAT_04567020 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Item__);
    DAT_04567020 = 1;
  }
  __this_00 = (__this->fields).HCJLLBHBLBE;
  if (__this_00 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
    iVar4 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)(__this->fields).PDGBIIFJGDO,
                       Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_IndexOf__);
    pSVar5 = (__this->fields).HCJLLBHBLBE;
    if (pSVar5 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
      iVar1 = (pSVar5->fields)._size;
      iVar3 = iVar4 + iVar1 + -1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar3 / iVar1;
      }
      BCJJJBOCPJJ = (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               iVar3 - iVar2 * iVar1,
                               Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Item__
                              );
      Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BDGMIPJPICN
                (__this,BCJJJBOCPJJ,true,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

