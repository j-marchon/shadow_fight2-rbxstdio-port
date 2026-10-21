// ACBCKKIEOCE$$.ctor @ RVA 0x3583580

void ACBCKKIEOCE___ctor(ACBCKKIEOCE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  CBOEGGBIJMD_o *__this_00;
  CBOEGGBIJMD_o **ppCVar1;
  FFJHOBJFOLI_o *pFVar2;
  FFJHOBJFOLI_o **ppFVar3;
  
  if ((DAT_04568ce2 & 1) == 0) {
    FUN_01bab630(&CBOEGGBIJMD_TypeInfo);
    FUN_01bab630(&FFJHOBJFOLI_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568ce2 = 1;
  }
  __this_00 = (CBOEGGBIJMD_o *)thunk_FUN_01bda818(CBOEGGBIJMD_TypeInfo);
  CBOEGGBIJMD___ctor(__this_00,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).EDMFBKICBPB;
  *ppCVar1 = __this_00;
  thunk_FUN_01c20e04(ppCVar1,__this_00);
  pFVar2 = (FFJHOBJFOLI_o *)thunk_FUN_01bda818(FFJHOBJFOLI_TypeInfo);
  FFJHOBJFOLI___ctor(pFVar2,0,0,0,0,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).FFBMBKHHLPO;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x20,1,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  *(undefined4 *)&(__this->fields).super.field_0x5c = 0;
  (__this->fields).AHNCOKJAGPN = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).APBICPEOMOM = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).CDGJHNFHJDI = false;
  (__this->fields).NBGPKFHLCOG = true;
  (__this->fields).EPBLDDIIKFF = false;
  (__this->fields).EKEJMKEFJIO = 0;
  (__this->fields).JAAGMIKHEPA = 0.0;
  (__this->fields).PJDAFHGHKIE = 0.0;
  (__this->fields).KLEMGCNKPGL = 50.0;
  (__this->fields).EGOKMNOIJBP = 0.0;
  (__this->fields).BJKHPKFDGEE = -50.0;
  (__this->fields).JGIBNAHJPGC = 0.0;
  pFVar2 = (FFJHOBJFOLI_o *)thunk_FUN_01bda818(FFJHOBJFOLI_TypeInfo);
  FFJHOBJFOLI___ctor(pFVar2,0,0,0,0,(MethodInfo *)0x0);
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03683714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

