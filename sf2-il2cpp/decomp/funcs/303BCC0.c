// AMJMGFCCAKN$$FDPFMIPBLPH @ RVA 0x303BCC0

System_String_o * AMJMGFCCAKN__FDPFMIPBLPH(AMJMGFCCAKN_o *__this,MethodInfo *method)

{
  Il2CppObject *arg2;
  MethodInfo *extraout_x1;
  IGFGDDANEPE_o *pIVar1;
  GGLKHCAIGDI_o *pGVar2;
  System_String_o *pSVar3;
  System_String_o *arg1;
  int64_t local_38;
  
  if ((DAT_04565d88 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&StringLiteral_22461);
    DAT_04565d88 = 1;
    method = extraout_x1;
  }
  pIVar1 = (__this->fields).MNELBNHIKGH;
  if ((pIVar1 != (IGFGDDANEPE_o *)0x0) &&
     (pGVar2 = (__this->fields).PHAGOJCOMPN, pGVar2 != (GGLKHCAIGDI_o *)0x0)) {
    pSVar3 = (pIVar1->fields).NPFMOEOIEKM;
    arg1 = (pGVar2->fields)._COIPKAKHDFP_k__BackingField;
    local_38 = AMJMGFCCAKN__IEMNJCLKOIP(__this,method);
    arg2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_38);
    pSVar3 = System_String__Format
                       (StringLiteral_22461,(Il2CppObject *)pSVar3,(Il2CppObject *)arg1,arg2,
                        (MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

