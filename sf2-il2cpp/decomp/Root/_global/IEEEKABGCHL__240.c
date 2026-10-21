// TypeDefIndex 240
// Namespace: 
// public class IEEEKABGCHL : CNIGOFCKBGI
// Fields:
//   private int KNJNHJJNHKN; // 0x6C

// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x3225568]
// IEEEKABGCHL$$.ctor @ RVA 0x3225568

void IEEEKABGCHL___ctor(IEEEKABGCHL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x1b,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  (__this->fields).super.EGBPMNKKPFI = false;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,0xb,(MethodInfo *)0x0);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32255BC]
// IEEEKABGCHL$$HNIHOIAMDPC @ RVA 0x32255BC

void IEEEKABGCHL__HNIHOIAMDPC
               (IEEEKABGCHL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04566f78 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_04566f78 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      *(int32_t *)&(__this->fields).super.field_0x5c = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x322564C]
// IEEEKABGCHL$$GOGPCNMIJOB @ RVA 0x322564C

CNIGOFCKBGI_o * IEEEKABGCHL__GOGPCNMIJOB(IEEEKABGCHL_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  IEEEKABGCHL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04566f79 & 1) == 0) {
    FUN_01bab630(&IEEEKABGCHL_TypeInfo);
    DAT_04566f79 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (IEEEKABGCHL_o *)thunk_FUN_01bda818(IEEEKABGCHL_TypeInfo,method);
    IEEEKABGCHL___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (IEEEKABGCHL_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x32256D0]
// IEEEKABGCHL$$DFBPBPPNIBC @ RVA 0x32256D0

bool IEEEKABGCHL__DFBPBPPNIBC(IEEEKABGCHL_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  if (LDOOMGABFME != (JMIFGHKOLCL_o *)0x0) {
    return *(int *)&(__this->fields).super.field_0x5c <= (LDOOMGABFME->fields).JOEGMBNBPMN;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

