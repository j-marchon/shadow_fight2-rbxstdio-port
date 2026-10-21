// IEDMAJBEPCN$$GOGPCNMIJOB @ RVA 0x350569C

CNIGOFCKBGI_o * IEDMAJBEPCN__GOGPCNMIJOB(IEDMAJBEPCN_o *__this,MethodInfo *method)

{
  CNIGOFCKBGI_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568895 & 1) == 0) {
    auVar2 = FUN_01bab630(&IEDMAJBEPCN_TypeInfo);
    DAT_04568895 = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(IEDMAJBEPCN_TypeInfo);
    CNIGOFCKBGI___ctor(__this_00,0x1f,1,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
              (__this_00,AHDGNOJPPIB,(__this_00->klass->vtable)._12_HNIHOIAMDPC.method);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

