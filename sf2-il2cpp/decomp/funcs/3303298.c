// AEGOLGIJEBI$$PHGPECNGPEG @ RVA 0x3303298

System_String_o *
AEGOLGIJEBI__PHGPECNGPEG
          (System_String_o *JGHIJMJNJLE,int32_t FEDCJPALCBN,int32_t LCOKDKPMKIE,
          System_String_o *DLNELFKJCII,System_String_o *LBLEPJOEKHP,MethodInfo *method)

{
  int32_t iVar1;
  KAMNHNFJCBK_o *pKVar2;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar3;
  MethodInfo *in_x6;
  
  if ((DAT_04567732 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567732 = 1;
  }
  iVar1 = PCOEHCPGBBG__FPFFNFCMAMM
                    (JGHIJMJNJLE,DLNELFKJCII,FEDCJPALCBN,LCOKDKPMKIE,(MethodInfo *)0x0);
  if (-1 < iVar1) {
    return JGHIJMJNJLE;
  }
  iVar1 = PCOEHCPGBBG__FPFFNFCMAMM
                    (JGHIJMJNJLE,LBLEPJOEKHP,FEDCJPALCBN,LCOKDKPMKIE,(MethodInfo *)0x0);
  if (JGHIJMJNJLE != (System_String_o *)0x0) {
    if (iVar1 < 0) {
      pSVar3 = System_String__Insert(JGHIJMJNJLE,LCOKDKPMKIE,DLNELFKJCII,(MethodInfo *)0x0);
      return pSVar3;
    }
    pKVar2 = AEGOLGIJEBI__NAIFCOFJMGJ
                       (JGHIJMJNJLE,iVar1,(JGHIJMJNJLE->fields)._stringLength + -1,true,
                        StringLiteral_1,false,in_x6);
    if (pKVar2 == (KAMNHNFJCBK_o *)0x0) {
      return JGHIJMJNJLE;
    }
    __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
    pSVar3 = System_String__Substring
                       (JGHIJMJNJLE,0,(pKVar2->fields)._ACAPMJLHGIA_k__BackingField + -1,
                        (MethodInfo *)0x0);
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append(__this,pSVar3,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this,DLNELFKJCII,(MethodInfo *)0x0);
      pSVar3 = System_String__Substring
                         (JGHIJMJNJLE,(pKVar2->fields)._DMNBLKDCIOM_k__BackingField + 1,
                          (MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this,pSVar3,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03403404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

