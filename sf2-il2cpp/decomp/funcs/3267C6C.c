// BDGDJDGHMJI$$BCEONJKKFKD @ RVA 0x3267C6C

void BDGDJDGHMJI__BCEONJKKFKD(KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  EEGDOGKBLNG_o *__this;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  
  if ((DAT_045671d2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5674);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5675);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5676);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5677);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OMFJHNMDIBF>__);
    DAT_045671d2 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OMFJHNMDIBF>__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((pIVar2 != (Il2CppObject *)0x0) && (__this != (EEGDOGKBLNG_o *)0x0)) {
        EEGDOGKBLNG__KILLKMHKIMI(__this,(PIADCKMDDAK_o *)pIVar2[2].klass,false,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5674,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5675,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                 FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
        if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
          if ((int)pNVar6->max_length != 0) {
            pNVar6->m_Items[0] = 6;
            Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03367ea8;
        }
      }
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5676,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5677,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar6->max_length != 0) {
          pNVar6->m_Items[0] = 6;
          Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
          return;
        }
LAB_03367ea8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

