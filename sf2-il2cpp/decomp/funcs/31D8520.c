// EDIHAKCJAMI$$.ctor @ RVA 0x31D8520

void EDIHAKCJAMI___ctor(EDIHAKCJAMI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  FFJHOBJFOLI_o *pFVar1;
  FFJHOBJFOLI_o **ppFVar2;
  
  if ((DAT_04566cfc & 1) == 0) {
    FUN_01bab630(&FFJHOBJFOLI_TypeInfo);
    DAT_04566cfc = 1;
  }
  pFVar1 = (FFJHOBJFOLI_o *)thunk_FUN_01bda818(FFJHOBJFOLI_TypeInfo);
  FFJHOBJFOLI___ctor(pFVar1,0,0,0,0,(MethodInfo *)0x0);
  ppFVar2 = &(__this->fields).KGDFAPCDMPE;
  *ppFVar2 = pFVar1;
  thunk_FUN_01c20e04(ppFVar2,pFVar1);
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,6,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  pFVar1 = (FFJHOBJFOLI_o *)thunk_FUN_01bda818(FFJHOBJFOLI_TypeInfo);
  FFJHOBJFOLI___ctor(pFVar1,0,0,0,0,(MethodInfo *)0x0);
  *ppFVar2 = pFVar1;
  thunk_FUN_01c20e04(ppFVar2,pFVar1);
  (__this->fields).EKEJMKEFJIO = 0;
  (__this->fields).JAAGMIKHEPA = 0.0;
  (__this->fields).ANOLCJDAGPJ = 3;
  (__this->fields).NBGPKFHLCOG = false;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032d862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

