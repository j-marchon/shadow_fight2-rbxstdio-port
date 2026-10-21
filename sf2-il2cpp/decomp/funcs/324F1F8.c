// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$BEBGOPNMHON @ RVA 0x324F1F8

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__BEBGOPNMHON
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GeneralMenuList__o *__this_00;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this_01;
  
  if ((DAT_04567118 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__,NAIJBCMHBFK,
                 OPHMGAKOJLP);
    DAT_04567118 = 1;
  }
  __this_00 = (__this->fields).menuList;
  if (__this_00 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (__this->fields).AIAODGKGPEI,
                           Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    bVar1 = DANCCJHADOA__NBEOBEKPHMN(AAJGEHHPMGH,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    bVar1 = DANCCJHADOA__MBCGIMNBKAB(AAJGEHHPMGH,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_01 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0) {
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelecUpItem(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar1 = DANCCJHADOA__OCGAEMGAAOJ(AAJGEHHPMGH,(MethodInfo *)0x0);
      if (__this_01 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0) {
        if (bVar1) {
          Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelecDownItem(__this_01,(MethodInfo *)0x0);
          return;
        }
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__CallIndex
                  (__this_01,(__this_01->fields).selection,AAJGEHHPMGH,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

