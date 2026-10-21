// IKGPGAPFKNE$$MCHLPIHDPDJ @ RVA 0x32479D4

void IKGPGAPFKNE__MCHLPIHDPDJ(IKGPGAPFKNE_o *__this,BKKPAKHJDKB_o *MEJOGHDACNG,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *message;
  GCIFMNHADDF_o *__this_00;
  System_Collections_Generic_List_BECIPDJBAOG__o *__this_01;
  BECIPDJBAOG_o *item;
  BECIPDJBAOG_array *pBVar3;
  
  if ((DAT_045670d0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BECIPDJBAOG>_Add__);
    FUN_01bab630(&StringLiteral_15466);
    DAT_045670d0 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<BECIPDJBAOG>_Add__;
  if (MEJOGHDACNG != (BKKPAKHJDKB_o *)0x0) {
    if ((MEJOGHDACNG->fields).HHJIJKJCEOF == 0) {
      __this_01 = (__this->fields).FCKCGNHILFE;
      if (__this_01 != (System_Collections_Generic_List_BECIPDJBAOG__o *)0x0) {
        item = (MEJOGHDACNG->fields).EBJBJCPBFLE;
        pBVar3 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pBVar3 != (BECIPDJBAOG_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pBVar3->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pBVar3->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04(pBVar3->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          (__this->fields).CEONKIEGMEB = 0.5;
          return;
        }
      }
    }
    else {
      message = System_String__Format
                          (StringLiteral_15466,(Il2CppObject *)MEJOGHDACNG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (GCIFMNHADDF_o *)0x0) {
        GCIFMNHADDF__DEAPPIKAHEP(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

