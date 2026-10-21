// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$BKPCNIBCIJD @ RVA 0x323571C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BKPCNIBCIJD
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *BCJJJBOCPJJ;
  MethodInfo *in_x3;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *pSVar4;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *__this_00;
  
  if ((DAT_0456701f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_get_Item__);
    DAT_0456701f = 1;
  }
  __this_00 = (__this->fields).HCJLLBHBLBE;
  if (__this_00 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
    iVar3 = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)(__this->fields).PDGBIIFJGDO,
                       Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_IndexOf__);
    pSVar4 = (__this->fields).HCJLLBHBLBE;
    if (pSVar4 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
      iVar1 = (pSVar4->fields)._size;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (iVar3 + 1) / iVar1;
      }
      BCJJJBOCPJJ = (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (iVar3 + 1) - iVar2 * iVar1,
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

