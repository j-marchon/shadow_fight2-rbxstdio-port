// Nekki.SF2.GUI.Shop.ItemsPanel$$BDABFHFADAC @ RVA 0x310ED40

bool Nekki_SF2_GUI_Shop_ItemsPanel__BDABFHFADAC
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,
               System_Func_HOOAAGABMBL__bool__o *DFHDGELMHHG,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  ulong uVar2;
  MethodInfo *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  int32_t index;
  
  if ((DAT_04566570 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    DAT_04566570 = 1;
  }
  pSVar3 = (__this->fields).BAADKBDJJPJ;
  if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    index = (pSVar3->fields)._size;
    do {
      index = index + -1;
      if (index < 0) {
        return false;
      }
      pSVar3 = (__this->fields).BAADKBDJJPJ;
      if ((pSVar3 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) ||
         (pIVar1 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__),
         DFHDGELMHHG == (System_Func_HOOAAGABMBL__bool__o *)0x0)) goto LAB_0320ee10;
      uVar2 = (*(code *)(DFHDGELMHHG->fields).super.super.invoke_impl)
                        ((DFHDGELMHHG->fields).super.super.method_code,pIVar1,
                         (DFHDGELMHHG->fields).super.super.method);
    } while ((uVar2 & 1) == 0);
    pSVar3 = (__this->fields).BAADKBDJJPJ;
    if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__;
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          (MethodInfo_26E4ADC *)
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this,pIVar1[1].monitor,0.0,method_00);
      }
      return pIVar1 != (Il2CppObject *)0x0;
    }
  }
LAB_0320ee10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

