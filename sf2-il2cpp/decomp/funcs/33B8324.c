// NBCALFOIEAA$$.ctor @ RVA 0x33B8324

void NBCALFOIEAA___ctor(NBCALFOIEAA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  IEFEBEDLHNN_o **ppIVar1;
  
  if ((DAT_04567d88 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04567d88 = 1;
  }
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,5,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  (__this->fields).PCNGAEBMNDH = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).EMCONLBCHAB = 100000.0;
  (__this->fields).ODJMFPBPLNH = -100000.0;
  (__this->fields).HNJEMFFEBBH = -100000.0;
  (__this->fields).GJPJBEBEFDA = 100000.0;
  ppIVar1 = &(__this->fields).HJKLIDCAEOE;
  *ppIVar1 = (IEFEBEDLHNN_o *)0x0;
  thunk_FUN_01c20e04(ppIVar1,0);
  *(undefined4 *)&(__this->fields).super.field_0x5c = 0;
  (__this->fields).NJCALEBCLKL = 3.0;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x034b83e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

