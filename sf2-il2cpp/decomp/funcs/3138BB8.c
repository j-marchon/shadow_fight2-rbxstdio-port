// NJNCPNBIPCD$$EGLDLNFHJPJ @ RVA 0x3138BB8

bool NJNCPNBIPCD__EGLDLNFHJPJ
               (NJNCPNBIPCD_o *__this,int32_t *OGPGLGPMEPD,
               System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ,
               System_String_o *EBOHIPKPFDJ,MethodInfo *method)

{
  int index;
  int iVar1;
  bool bVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  IGFGDDANEPE_o *pIVar3;
  KKEKJDLEJIL_o *pKVar4;
  MethodInfo *method_00;
  System_String_o *pSVar5;
  
  if ((DAT_04566714 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_18968);
    DAT_04566714 = 1;
  }
  if (GHAAKPDHIJJ == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_03238e0c;
  index = *OGPGLGPMEPD;
  iVar1 = (GHAAKPDHIJJ->fields)._size;
  if (iVar1 <= index) {
    *OGPGLGPMEPD = index - iVar1;
    return false;
  }
  method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__;
  IKKAMAMLIKA = (HOOAAGABMBL_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,index,
                           (MethodInfo_26E4ADC *)
                           Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) goto LAB_03238e0c;
  pSVar5 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar3 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar5,(MethodInfo *)0x0);
  if (pIVar3 == (IGFGDDANEPE_o *)0x0) {
    bVar2 = AMIINPEKKFB__CNDGBHMOMJB(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar5 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar5,(MethodInfo *)0x0);
      if (pIVar3 == (IGFGDDANEPE_o *)0x0) goto LAB_03238e0c;
      goto LAB_03238cd8;
    }
  }
  else {
LAB_03238cd8:
    NJNCPNBIPCD__GCAIMMCAPFP((NJNCPNBIPCD_o *)pIVar3,(pIVar3->fields).PCBECBEFJOI,method_00);
  }
  pSVar5 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar3 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar5,(MethodInfo *)0x0);
  if (pIVar3 != (IGFGDDANEPE_o *)0x0) {
    (__this->fields).PJKFHNAHDEK = (pIVar3->fields).PCBECBEFJOI;
    thunk_FUN_01c20e04();
    bVar2 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_14870,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_11017,(MethodInfo *)0x0);
      if (bVar2) {
        pKVar4 = (__this->fields).MFFEOOLICJE;
        if (pKVar4 == (KKEKJDLEJIL_o *)0x0) goto LAB_03238e0c;
        (pKVar4->fields).NBHGHLIPCAP = (__this->fields).PJKFHNAHDEK;
      }
      else {
        bVar2 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_8772,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar5 = System_String__Concat(StringLiteral_18968,EBOHIPKPFDJ,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
          return true;
        }
        pKVar4 = (__this->fields).MFFEOOLICJE;
        if (pKVar4 == (KKEKJDLEJIL_o *)0x0) goto LAB_03238e0c;
        (pKVar4->fields).AIDDHEHFBEG = (__this->fields).PJKFHNAHDEK;
      }
LAB_03238dac:
      thunk_FUN_01c20e04();
      return true;
    }
    pKVar4 = (__this->fields).MFFEOOLICJE;
    if (pKVar4 != (KKEKJDLEJIL_o *)0x0) {
      (pKVar4->fields).PNAAPNFPCPI = (__this->fields).PJKFHNAHDEK;
      goto LAB_03238dac;
    }
  }
LAB_03238e0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

