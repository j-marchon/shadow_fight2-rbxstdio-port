// CGALNIOABHK$$BHCAAHDJJJK @ RVA 0x3445E14

bool CGALNIOABHK__BHCAAHDJJJK(System_String_o *KFGHHGACFPE,MethodInfo *method)

{
  bool bVar1;
  int32_t GMGGINDHNPI;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  System_String_array *CJNHFNHJHPE;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568248 & 1) == 0) {
    FUN_01bab630(&Method_CGALNIOABHK_AEEAMOFNOIN_HFEJKLKLDKH__);
    FUN_01bab630(&CGALNIOABHK_AEEAMOFNOIN_TypeInfo);
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<string>__);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    DAT_04568248 = 1;
    method = extraout_x1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(CGALNIOABHK_AEEAMOFNOIN_TypeInfo,method);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  pIVar3 = (Il2CppClass *)GNAFJMPJNKI__CFJCDFEAPFD(GMGGINDHNPI,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = pIVar3;
    thunk_FUN_01c20e04(pIVar2,pIVar3);
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(KFGHHGACFPE,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((System_String_o *)pIVar2->klass,(MethodInfo *)0x0), !bVar1
       )) {
      if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (KFGHHGACFPE == (System_String_o *)0x0) goto LAB_03545f8c;
      CJNHFNHJHPE = System_String__Split
                              (KFGHHGACFPE,CGALNIOABHK_TypeInfo->static_fields->CHGAPDHMOHM,1,
                               (MethodInfo *)0x0);
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_IList_T__o *)CJNHFNHJHPE,
                         Method_DJNBJHPDKDP_OBECCOPBADO<string>__);
      if (!bVar1) {
        predicate = (System_Func_TSource__bool__o *)
                    thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        bVar1 = System_Linq_Enumerable__Any<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)CJNHFNHJHPE,
                           predicate,Method_System_Linq_Enumerable_Any<string>__);
        return bVar1;
      }
    }
    return true;
  }
LAB_03545f8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

