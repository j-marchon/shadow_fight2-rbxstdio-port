// CFMDGLMCNIL$$MPFFOIIBAKO @ RVA 0x3078780

void CFMDGLMCNIL__MPFFOIIBAKO
               (CFMDGLMCNIL_o *__this,OHPOFOPJIMB_o *KCPFFLHCCIN,bool OOPLNJPBEMI,MethodInfo *method
               )

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_OHPOFOPJIMB__o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  OHPOFOPJIMB_array *pOVar4;
  
  if ((DAT_04565fc0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_Add__);
    DAT_04565fc0 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<OHPOFOPJIMB>_Add__;
  if (OOPLNJPBEMI) {
    pSVar3 = (__this->fields).HHMMOAAKGCB;
    if (pSVar3 != (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
      pOVar4 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pOVar4 != (OHPOFOPJIMB_array *)0x0) {
        uVar1 = (pSVar3->fields)._size;
        if (uVar1 < (uint)pOVar4->max_length) {
          (pSVar3->fields)._size = uVar1 + 1;
          pOVar4->m_Items[(int)uVar1] = KCPFFLHCCIN;
          thunk_FUN_01c20e04(pOVar4->m_Items + (int)uVar1,KCPFFLHCCIN);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)KCPFFLHCCIN,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
  else {
    pSVar3 = (__this->fields).MPMNLJJLADE;
    if (pSVar3 != (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
      pOVar4 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pOVar4 != (OHPOFOPJIMB_array *)0x0) {
        uVar1 = (pSVar3->fields)._size;
        if (uVar1 < (uint)pOVar4->max_length) {
          (pSVar3->fields)._size = uVar1 + 1;
          pOVar4->m_Items[(int)uVar1] = KCPFFLHCCIN;
          thunk_FUN_01c20e04(pOVar4->m_Items + (int)uVar1,KCPFFLHCCIN);
          method_00 = extraout_x1;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)KCPFFLHCCIN
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          method_00 = extraout_x1_00;
        }
        CFMDGLMCNIL__POAHJIJOHKG(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

