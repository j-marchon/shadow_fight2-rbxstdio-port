// NAKKKCKOHGH$$GOGPCNMIJOB @ RVA 0x311C3B0

CNIGOFCKBGI_o * NAKKKCKOHGH__GOGPCNMIJOB(NAKKKCKOHGH_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CNIGOFCKBGI_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  CNIGOFCKBGI_c *pCVar2;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_045665f2 & 1) == 0) {
    auVar3 = FUN_01bab630(&NAKKKCKOHGH_TypeInfo);
    DAT_045665f2 = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(NAKKKCKOHGH_TypeInfo);
    CNIGOFCKBGI___ctor(__this_00,0xc,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0)
    ;
    pCVar2 = __this_00->klass;
    *(undefined4 *)&(__this_00->fields).field_0x5c = 0;
    (*(pCVar2->vtable)._12_HNIHOIAMDPC.methodPtr)
              (__this_00,AHDGNOJPPIB,(pCVar2->vtable)._12_HNIHOIAMDPC.method);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

