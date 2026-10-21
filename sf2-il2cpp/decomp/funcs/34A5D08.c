// EBCFKDCOIGA$$APMIAJFIMCG @ RVA 0x34A5D08

PKHLGDMJPMF_o *
EBCFKDCOIGA__APMIAJFIMCG(EBCFKDCOIGA_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  EHEHBPFEIKB_o *pEVar1;
  PKHLGDMJPMF_o *__this_00;
  PKHLGDMJPMF_o **ppPVar2;
  float fVar3;
  float fVar4;
  float in_s1;
  float fVar5;
  
  if ((DAT_045684ec & 1) == 0) {
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_045684ec = 1;
  }
  if ((__this->fields).KLKKKGCPGNE != false) {
    pEVar1 = (__this->fields).DLCDMDDNFCP;
    if (pEVar1 != (EHEHBPFEIKB_o *)0x0) {
      fVar3 = (float)(*(pEVar1->klass->vtable)._7_KILOIOEILFL.methodPtr)
                               (pEVar1,AHEFOIOKDOK,(pEVar1->klass->vtable)._7_KILOIOEILFL.method);
      pEVar1 = (__this->fields).IPPMJFKOBLF;
      if (pEVar1 != (EHEHBPFEIKB_o *)0x0) {
        fVar5 = in_s1;
        fVar4 = (float)(*(pEVar1->klass->vtable)._7_KILOIOEILFL.methodPtr)
                                 (pEVar1,AHEFOIOKDOK,(pEVar1->klass->vtable)._7_KILOIOEILFL.method);
        __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
        fVar4 = fVar4 - fVar3;
        fVar5 = fVar5 - in_s1;
        goto LAB_035a5dbc;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
  fVar4 = 0.0;
  fVar5 = 0.0;
LAB_035a5dbc:
  PKHLGDMJPMF___ctor(__this_00,fVar4,fVar5,(MethodInfo *)0x0);
  ppPVar2 = &(__this->fields).MLAJEAKHLBF;
  *ppPVar2 = __this_00;
  thunk_FUN_01c20e04(ppPVar2,__this_00);
  return *ppPVar2;
}

