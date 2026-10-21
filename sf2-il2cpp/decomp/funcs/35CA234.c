// CEKMGBEGCBI$$LHMIDKOPILI @ RVA 0x35CA234

void CEKMGBEGCBI__LHMIDKOPILI
               (CEKMGBEGCBI_o *__this,System_Nullable_int__o OGPGLGPMEPD,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  DBIINAFCKME_o *pDVar3;
  System_String_o *JLNPKGGFFDD;
  System_Nullable_int__Fields local_28;
  
  local_28 = OGPGLGPMEPD.fields;
  if ((DAT_04568f94 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
                    /* try { // try from 036ca274 to 037ca377 has its CatchHandler @ 036ca274
                       catch() { ... } // from try @ 036ca274 with catch @ 036ca274
                       catch() { ... } // from try @ 036ca408 with catch @ 036ca274
                       catch() { ... } // from try @ 036ca48c with catch @ 036ca274
                       catch() { ... } // from try @ 036ca530 with catch @ 036ca274 */
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&StringLiteral_4938);
    DAT_04568f94 = 1;
  }
  if (((ulong)OGPGLGPMEPD.fields & 0xff) == 0) {
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_28,-1,Method_System_Nullable<int>__ctor__);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar3 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
  if (pDVar3 != (DBIINAFCKME_o *)0x0) {
    iVar1 = (pDVar3->fields).GLNNPKDAIPI;
    iVar2 = System_Nullable<int>__get_Value
                      ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_get_Value__);
    if (iVar1 == iVar2) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar3 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
    iVar2 = System_Nullable<int>__get_Value
                      ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_get_Value__);
    if (pDVar3 != (DBIINAFCKME_o *)0x0) {
      DBIINAFCKME__LCLOIIOOOMB(pDVar3,iVar2,(MethodInfo *)0x0);
      pDVar3 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
      if (pDVar3 != (DBIINAFCKME_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pDVar3,true,(MethodInfo *)0x0);
        JLNPKGGFFDD = System_String__Format
                                (StringLiteral_4938,(Il2CppObject *)(__this->fields).LHCCMHBFOBB,
                                 (MethodInfo *)0x0);
                    /* try { // try from 036ca378 to 037ca39f has its CatchHandler @ 036ca4a0 */
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

