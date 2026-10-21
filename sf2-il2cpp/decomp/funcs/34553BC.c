// CLFCKIFNGHA$$KPOPGHNAGAE @ RVA 0x34553BC

/* WARNING: Removing unreachable block (ram,0x03555558) */

bool CLFCKIFNGHA__KPOPGHNAGAE
               (System_String_o *AFKICLAFDKC,System_String_o *AMBCAJJIEOE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  IAGNPGHOAIC_o *__this;
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *pMVar4;
  IAGNPGHOAIC_array *pIVar5;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  bool local_34 [4];
  
  if ((DAT_045682c4 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&IAGNPGHOAIC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_Add__);
    DAT_045682c4 = 1;
  }
  __this = (IAGNPGHOAIC_o *)thunk_FUN_01bda818(IAGNPGHOAIC_TypeInfo);
  IAGNPGHOAIC___ctor(__this,AFKICLAFDKC,AMBCAJJIEOE,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_34[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_34,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<IAGNPGHOAIC>_Add__;
  __this_00 = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (__this_00 != (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
    pIVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar5 != (IAGNPGHOAIC_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pIVar5->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pIVar5->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pIVar5->m_Items + (int)uVar1,__this);
        pMVar4 = extraout_x1;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        pMVar4 = extraout_x1_00;
      }
      if (local_34[0] != false) {
        System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
        pMVar4 = extraout_x1_01;
      }
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar4 = extraout_x1_02;
      }
      bVar3 = CLFCKIFNGHA__HIPBEBHBDLE(__this,pMVar4);
      if (bVar3) {
        pMVar4 = extraout_x1_03;
        if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar4 = extraout_x1_04;
        }
        CLFCKIFNGHA__OCNFNLFGLNG(__this,pMVar4);
      }
      return bVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

