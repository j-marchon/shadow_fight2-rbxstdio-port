// BackKeyManager$$AddBackKeyController @ RVA 0x31AC064

void BackKeyManager__AddBackKeyController
               (BackKeyManager_o *__this,HAFLPBGEGCI_o *ELHFHAPBFMI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  
  if ((DAT_04566b48 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HAFLPBGEGCI>_Add__);
    DAT_04566b48 = 1;
  }
  BackKeyManager__RemoveBackKeyController(__this,ELHFHAPBFMI,method);
  lVar2 = Method_System_Collections_Generic_List<HAFLPBGEGCI>_Add__;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).EEFJHDPNBNG;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)ELHFHAPBFMI;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,ELHFHAPBFMI);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)ELHFHAPBFMI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

