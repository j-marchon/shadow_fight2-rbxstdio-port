// TypeDefIndex 903
// Namespace: 
// private class KIOBDEIAMOO.PAMLCCDLNHF : KHKFAMNELAM
// Fields:

// ===== public void .ctor()  [RVA 0x30983A0]
// KIOBDEIAMOO.PAMLCCDLNHF$$.ctor @ RVA 0x30983A0

void KIOBDEIAMOO_PAMLCCDLNHF___ctor(KIOBDEIAMOO_PAMLCCDLNHF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HKMKBOKAPLP(FDONBPJEDJJ EHKEOHNBLCK, string NONPLOOOOAG)  [RVA 0x30983A8]
// KIOBDEIAMOO.PAMLCCDLNHF$$HKMKBOKAPLP @ RVA 0x30983A8

void KIOBDEIAMOO_PAMLCCDLNHF__HKMKBOKAPLP
               (KIOBDEIAMOO_PAMLCCDLNHF_o *__this,int32_t EHKEOHNBLCK,System_String_o *NONPLOOOOAG,
               MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  int32_t local_44;
  
  if ((DAT_045660fb & 1) == 0) {
    FUN_01bab630(&FDONBPJEDJJ_TypeInfo);
    FUN_01bab630(&StringLiteral_16312/*"adQualitySdkInitFailed"*/);
    FUN_01bab630(&StringLiteral_22406/*"{0}: {1}\n	{2}"*/);
    DAT_045660fb = 1;
  }
  local_44 = EHKEOHNBLCK;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(FDONBPJEDJJ_TypeInfo,&local_44);
  JLNPKGGFFDD = System_String__Format
                          (StringLiteral_22406/*"{0}: {1}\n	{2}"*/,StringLiteral_16312/*"adQualitySdkInitFailed"*/,arg1,(Il2CppObject *)NONPLOOOOAG,
                           (MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== public void FBBMGKBICJP()  [RVA 0x309846C]
// KIOBDEIAMOO.PAMLCCDLNHF$$FBBMGKBICJP @ RVA 0x309846C

void KIOBDEIAMOO_PAMLCCDLNHF__FBBMGKBICJP(KIOBDEIAMOO_PAMLCCDLNHF_o *__this,MethodInfo *method)

{
  if ((DAT_045660fc & 1) == 0) {
    FUN_01bab630(&StringLiteral_16313/*"adQualitySdkInitSuccess"*/);
    DAT_045660fc = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_16313/*"adQualitySdkInitSuccess"*/,(MethodInfo *)0x0);
  return;
}

