// KKLJIDJBFEI$$PFBKEJLANIE @ RVA 0x3145D18

void KKLJIDJBFEI__PFBKEJLANIE
               (System_String_o *GJCPJIFKLAI,KAMBBJFPLGM_o *HEHMPFLAEGE,EKCGNICFDEO_o *JLICGPAEBHN,
               KKLJIDJBFEI_EKJEAINHKPL_o *param_4,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Text_StringBuilder_o *pSVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  EOLFEKNCPLM_o *pEVar5;
  GKLPDMLELJF_o *pGVar6;
  int32_t local_54;
  int64_t local_48;
  
  if ((DAT_0456678c & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&StringLiteral_16549);
    FUN_01bab630(&StringLiteral_19925);
    FUN_01bab630(&StringLiteral_16214);
    FUN_01bab630(&StringLiteral_18915);
    FUN_01bab630(&StringLiteral_18394);
    FUN_01bab630(&StringLiteral_16184);
    FUN_01bab630(&StringLiteral_18127);
    FUN_01bab630(&StringLiteral_19789);
    DAT_0456678c = 1;
  }
  pSVar2 = (param_4->fields).sb;
  if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendLine(pSVar2,(MethodInfo *)0x0);
    ppSVar1 = (System_String_o **)&StringLiteral_19925;
    if (HEHMPFLAEGE != (KAMBBJFPLGM_o *)0x0) {
      ppSVar1 = (System_String_o **)&StringLiteral_18127;
    }
    pSVar2 = (param_4->fields).sb;
    pSVar3 = System_String__Concat(GJCPJIFKLAI,StringLiteral_16214,*ppSVar1,(MethodInfo *)0x0);
    if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
      if (HEHMPFLAEGE == (KAMBBJFPLGM_o *)0x0) {
        return;
      }
      pEVar5 = (HEHMPFLAEGE->fields).FLAFELDNABC;
      if ((pEVar5 != (EOLFEKNCPLM_o *)0x0) &&
         (pGVar6 = (pEVar5->fields).MCOPPCNPAHF, pGVar6 != (GKLPDMLELJF_o *)0x0)) {
        local_48 = (pGVar6->fields).ANAJGHJEEOC;
        pSVar2 = (param_4->fields).sb;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_48);
        pSVar3 = System_String__Format(StringLiteral_18915,pIVar4,(MethodInfo *)0x0);
        if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
          pSVar2 = (param_4->fields).sb;
          pSVar3 = KKLJIDJBFEI__HFDKNFKJIIP(HEHMPFLAEGE,param_4,method_00);
          pSVar3 = System_String__Concat(StringLiteral_16549,pSVar3,(MethodInfo *)0x0);
          if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
            pSVar2 = (param_4->fields).sb;
            pSVar3 = System_String__Concat
                               (StringLiteral_19789,(pGVar6->fields).LLBEKLPKDHK,(MethodInfo *)0x0);
            if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
              local_54 = (HEHMPFLAEGE->fields).EMOLIBOCKJK;
              pSVar2 = (param_4->fields).sb;
              pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_54);
              pSVar3 = System_String__Format(StringLiteral_18394,pIVar4,(MethodInfo *)0x0);
              if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
                ppSVar1 = (System_String_o **)&StringLiteral_19925;
                if (JLICGPAEBHN != (EKCGNICFDEO_o *)0x0) {
                  ppSVar1 = &(JLICGPAEBHN->fields).BJGJOHGJCKC;
                }
                pSVar2 = (param_4->fields).sb;
                pSVar3 = System_String__Concat
                                   (GJCPJIFKLAI,StringLiteral_16184,*ppSVar1,(MethodInfo *)0x0);
                if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine(pSVar2,pSVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

