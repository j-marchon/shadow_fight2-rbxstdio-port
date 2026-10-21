// Nekki.SF2.GUI.Shop.ItemsPanel$$NIGJNNJIOGE @ RVA 0x310F338

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_Shop_ItemsPanel__NIGJNNJIOGE
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,
               System_Func_HOOAAGABMBL__bool__o *DFHDGELMHHG,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar2;
  Il2CppObject *pIVar3;
  ulong uVar4;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_0456656f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    DAT_0456656f = 1;
  }
  pSVar2 = (__this->fields).BAADKBDJJPJ;
  if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    if (iVar1 < 1) {
      return false;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          (MethodInfo_26E4ADC *)
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      if (DFHDGELMHHG == (System_Func_HOOAAGABMBL__bool__o *)0x0) break;
      uVar4 = (*(code *)(DFHDGELMHHG->fields).super.super.invoke_impl)
                        ((DFHDGELMHHG->fields).super.super.method_code,pIVar3,
                         (DFHDGELMHHG->fields).super.super.method);
      if ((uVar4 & 1) != 0) {
        pSVar2 = (__this->fields).BAADKBDJJPJ;
        if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__;
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          if (pIVar3 != (Il2CppObject *)0x0) {
            Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this,pIVar3[1].monitor,0.0,method_00);
            return true;
          }
          return false;
        }
        break;
      }
      if (iVar1 + -1 == index) {
        return false;
      }
      pSVar2 = (__this->fields).BAADKBDJJPJ;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

