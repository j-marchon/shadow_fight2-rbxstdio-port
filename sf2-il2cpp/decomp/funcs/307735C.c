// KKCBGIBKOCP$$EGKJEEBJAGH @ RVA 0x307735C

UnityEngine_Sprite_o *
KKCBGIBKOCP__EGKJEEBJAGH
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,bool CKNMMCNCCCL,
          bool GMDKAHCJGBD,MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Sprite_o *pUVar5;
  MethodInfo *method_00;
  System_String_o *AFKICLAFDKC;
  
  if ((DAT_04565fb2 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04565fb2 = 1;
  }
  if (HCAAAAMDCNO != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pSVar2 = System_String__Split(HCAAAAMDCNO,0x2e,0,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_array *)0x0) {
      if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      AFKICLAFDKC = pSVar2->m_Items[0];
      pSVar3 = AFKICLAFDKC;
      if (!CKNMMCNCCCL) {
        if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = KKCBGIBKOCP__GCOFAABGDIM(AFKICLAFDKC,GMDKAHCJGBD,method_00);
      }
      pSVar4 = System_String__Concat(OOKEKJMFKPE,pSVar3,(MethodInfo *)0x0);
      if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo);
      }
      x = (UnityEngine_Object_o *)AMHFFFODDOC__EOLACNMEFKC(pSVar4,HCAAAAMDCNO,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = System_String__Concat(StringLiteral_14092,pSVar3,(MethodInfo *)0x0);
        if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo);
        }
        x = (UnityEngine_Object_o *)AMHFFFODDOC__EOLACNMEFKC(pSVar4,HCAAAAMDCNO,(MethodInfo *)0x0);
      }
                    /* try { // try from 031774d4 to 032774e3 has its CatchHandler @ 0317807c */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03177500 to 03277503 has its CatchHandler @ 03177d84 */
                    /* try { // try from 03177504 to 03277513 has its CatchHandler @ 03177f08 */
      if ((bVar1) &&
         (bVar1 = System_String__op_Inequality(AFKICLAFDKC,pSVar3,(MethodInfo *)0x0), bVar1)) {
                    /* try { // try from 03177514 to 0327753b has its CatchHandler @ 031771b8 */
        pSVar3 = System_String__Concat(OOKEKJMFKPE,AFKICLAFDKC,(MethodInfo *)0x0);
        if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo);
        }
                    /* try { // try from 0317753c to 0327754b has its CatchHandler @ 03177fb8 */
        x = (UnityEngine_Object_o *)AMHFFFODDOC__EOLACNMEFKC(pSVar3,HCAAAAMDCNO,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03177568 to 0327756b has its CatchHandler @ 03177d64 */
        if (bVar1) {
                    /* try { // try from 0317756c to 0327757b has its CatchHandler @ 03177da0 */
                    /* try { // try from 0317757c to 032775a3 has its CatchHandler @ 031771b8 */
          pSVar3 = System_String__Concat(StringLiteral_14092,AFKICLAFDKC,(MethodInfo *)0x0);
          if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo);
          }
                    /* try { // try from 031775a4 to 032775b3 has its CatchHandler @ 03177dac */
          pUVar5 = AMHFFFODDOC__EOLACNMEFKC(pSVar3,HCAAAAMDCNO,(MethodInfo *)0x0);
          return pUVar5;
        }
      }
                    /* try { // try from 031775d0 to 032775d3 has its CatchHandler @ 03177d4c */
      return (UnityEngine_Sprite_o *)x;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031775d4 to 032775e3 has its CatchHandler @ 03177d7c */
  FUN_01bab8c8();
}

