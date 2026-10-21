// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToNextItem @ RVA 0x310D518

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToNextItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,float GGMALJLKHHB,int32_t JGEFFOIOPFI,
               MethodInfo *method)

{
  int JDEFJPHCNMM;
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_TableView_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *x;
  
  if ((DAT_0456655c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456655c = 1;
  }
  x = (__this->fields).HCMDPJADLOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar3 = (__this->fields).BAADKBDJJPJ;
    if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      __this_00 = (__this->fields)._TableView;
      JDEFJPHCNMM = (__this->fields).AINAHFKFDKG + JGEFFOIOPFI;
      iVar1 = (pSVar3->fields)._size + -1;
      if (iVar1 <= JDEFJPHCNMM) {
        JDEFJPHCNMM = iVar1;
      }
      (__this->fields).AINAHFKFDKG = JDEFJPHCNMM;
      if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
        goto LAB_0320d5cc;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0320d5cc:
  return (bool)(~bVar2 & 1);
}

