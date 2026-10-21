// TypeDefIndex 1047
// Namespace: 
// public class BFDLCIGIKBJ : CNIGOFCKBGI
// Fields:
//   private string ANGJLMBCKEE; // 0x70

// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x30D4678]
// BFDLCIGIKBJ$$GOGPCNMIJOB @ RVA 0x30D4678

CNIGOFCKBGI_o * BFDLCIGIKBJ__GOGPCNMIJOB(BFDLCIGIKBJ_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CNIGOFCKBGI_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566320 & 1) == 0) {
    auVar2 = FUN_01bab630(&BFDLCIGIKBJ_TypeInfo);
    DAT_04566320 = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(BFDLCIGIKBJ_TypeInfo);
    CNIGOFCKBGI___ctor(__this_00,0x1e,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0
                      );
    (*(__this_00->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
              (__this_00,AHDGNOJPPIB,(__this_00->klass->vtable)._12_HNIHOIAMDPC.method);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE = 2)  [RVA 0x30D4718]
// BFDLCIGIKBJ$$.ctor @ RVA 0x30D4718

void BFDLCIGIKBJ___ctor(BFDLCIGIKBJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x1e,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031d4754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30D4758]
// BFDLCIGIKBJ$$HNIHOIAMDPC @ RVA 0x30D4758

void BFDLCIGIKBJ__HNIHOIAMDPC
               (BFDLCIGIKBJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566321 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566321 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).ANGJLMBCKEE;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string JDENKGGOFPC()  [RVA 0x30D47F4]
// BFDLCIGIKBJ$$JDENKGGOFPC @ RVA 0x30D47F4

System_String_o * BFDLCIGIKBJ__JDENKGGOFPC(BFDLCIGIKBJ_o *__this,MethodInfo *method)

{
  return (__this->fields).ANGJLMBCKEE;
}

