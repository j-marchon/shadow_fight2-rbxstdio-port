// DKEOKAONIIB$$FDDKGLOPBEG @ RVA 0x32EC600

void DKEOKAONIIB__FDDKGLOPBEG
               (int32_t FPHIPPIDHBO,int32_t FPDJMIBLBAH,int32_t AIHGKMMPALK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_String_o *arg1;
  System_String_o *arg2;
  System_Collections_Generic_List_string__o *__this;
  DKEOKAONIIB_StaticFields *pDVar4;
  System_String_array *pSVar5;
  int32_t local_2c;
  int32_t local_28;
  int32_t iStack_24;
  
  local_2c = AIHGKMMPALK;
  local_28 = FPDJMIBLBAH;
  iStack_24 = FPHIPPIDHBO;
  if ((DAT_04567642 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&StringLiteral_198);
    DAT_04567642 = 1;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
  if (pDVar4->LDBHFHDLBND != false) {
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
    }
    if (pDVar4->GIGIAMDJECC != false) {
      pSVar3 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
      arg1 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
      arg2 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      pSVar3 = System_String__Format
                         (StringLiteral_198,(Il2CppObject *)pSVar3,(Il2CppObject *)arg1,
                          (Il2CppObject *)arg2,(MethodInfo *)0x0);
      if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo);
      }
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      __this = DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar5 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar5 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar5->m_Items[(int)uVar1] = pSVar3;
            thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,pSVar3);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

