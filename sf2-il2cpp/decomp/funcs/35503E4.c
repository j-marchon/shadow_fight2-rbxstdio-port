// LEGDPJHPEOB$$BFCMIJJPDKK @ RVA 0x35503E4

/* WARNING: Type propagation algorithm not settling */

void LEGDPJHPEOB__BFCMIJJPDKK
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar3;
  EEGDOGKBLNG_o *__this_00;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  MMFIDKMDADC_Fields *pMVar8;
  JMDPBFOCHHP_NOPCEDPNNKO_o *__this_01;
  int32_t local_34;
  
  if ((DAT_04568b39 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_10698);
    FUN_01bab630(&StringLiteral_4824);
    FUN_01bab630(&StringLiteral_10693);
    FUN_01bab630(&StringLiteral_7289);
    FUN_01bab630(&StringLiteral_10692);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_7340);
    DAT_04568b39 = 1;
  }
  local_34 = 0;
  if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_03650788:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pMVar8 = &JDGILABGBGH->fields;
  pMVar8->HPACPFLKHPK = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(pMVar8);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (LEGDPJHPEOB_o *)HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  lVar4 = Method_System_Array_Empty<object>__;
  if ((JMDPBFOCHHP_o *)__this == (JMDPBFOCHHP_o *)0x0) goto LAB_03650788;
  __this_01 = (((JMDPBFOCHHP_o *)__this)->fields).OFMMMBIIDAE;
  if (__this_01 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
    if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_03650788;
    pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    pJVar3 = JMDPBFOCHHP_NOPCEDPNNKO__BHJOLIJDBLO(__this_01,pSVar2,(MethodInfo *)0x0);
    if (pJVar3 == (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0) {
      pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_10692,pSVar2,(MethodInfo *)0x0);
      lVar4 = Method_System_Array_Empty<object>__;
      lVar6 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
      if (lVar6 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<object>__);
        lVar6 = *(long *)(lVar4 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01b81620();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      args = (System_Object_array *)**(undefined8 **)(lVar4 + 0xb8);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      goto LAB_03650668;
    }
    pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_7340,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (pJVar3->fields).super.KPDPJONADPJ;
    }
    else {
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_7289,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality(pSVar2,StringLiteral_4824,(MethodInfo *)0x0);
        if (bVar1) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          __this = (LEGDPJHPEOB_o *)0x0;
          if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_03650788;
          local_34 = EEGDOGKBLNG__OHDDLJKGLGA
                               (__this_00,(pJVar3->fields).super.JIJLBFGKNJK,(MethodInfo *)0x0);
          pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
          pMVar8->HPACPFLKHPK = pSVar2;
          goto LAB_03650698;
        }
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        __this = (LEGDPJHPEOB_o *)0x0;
        if (args == (System_Object_array *)0x0) goto LAB_03650788;
        pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        {
          uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar5,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)pSVar2;
        thunk_FUN_01c20e04(args->m_Items,pSVar2);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        puVar7 = &StringLiteral_10698;
        goto LAB_036505b4;
      }
      pSVar2 = (pJVar3->fields).super.APBICPEOMOM;
    }
    pMVar8->HPACPFLKHPK = pSVar2;
LAB_03650698:
    thunk_FUN_01c20e04(pMVar8,pSVar2);
    return;
  }
  lVar6 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
  if (lVar6 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<object>__);
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  args = (System_Object_array *)**(long **)(lVar4 + 0xb8);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  puVar7 = &StringLiteral_10693;
LAB_036505b4:
  pSVar2 = (System_String_o *)*puVar7;
LAB_03650668:
  UnityEngine_Debug__LogErrorFormat(pSVar2,args,(MethodInfo *)0x0);
  return;
}

