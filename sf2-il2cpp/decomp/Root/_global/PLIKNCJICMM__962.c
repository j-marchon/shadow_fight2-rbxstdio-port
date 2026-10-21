// TypeDefIndex 962
// Namespace: 
// public class PLIKNCJICMM : CNIGOFCKBGI
// Fields:
//   private string EPODFMDFJEK; // 0x70
//   private int NCJNAEMHOLK; // 0x78

// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x30AE2D0]
// PLIKNCJICMM$$GOGPCNMIJOB @ RVA 0x30AE2D0

CNIGOFCKBGI_o * PLIKNCJICMM__GOGPCNMIJOB(PLIKNCJICMM_o *__this,MethodInfo *method)

{
  PLIKNCJICMM_o *__this_00;
  MethodInfo *extraout_x1;
  int32_t in_w2;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_045661bf & 1) == 0) {
    FUN_01bab630(&PLIKNCJICMM_TypeInfo);
    DAT_045661bf = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (PLIKNCJICMM_o *)thunk_FUN_01bda818(PLIKNCJICMM_TypeInfo,method);
    PLIKNCJICMM___ctor(__this_00,AHDGNOJPPIB,in_w2,in_x3);
    if (__this_00 != (PLIKNCJICMM_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x30AE344]
// PLIKNCJICMM$$.ctor @ RVA 0x30AE344

void PLIKNCJICMM___ctor(PLIKNCJICMM_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x24,3,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,0xc,(MethodInfo *)0x0);
  return;
}


// ===== public int BGFPNBONGKN()  [RVA 0x30AE398]
// PLIKNCJICMM$$BGFPNBONGKN @ RVA 0x30AE398

int32_t PLIKNCJICMM__BGFPNBONGKN(PLIKNCJICMM_o *__this,MethodInfo *method)

{
  return (__this->fields).NCJNAEMHOLK;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30AE3A0]
// PLIKNCJICMM$$HNIHOIAMDPC @ RVA 0x30AE3A0

void PLIKNCJICMM__HNIHOIAMDPC
               (PLIKNCJICMM_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_045661c0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045661c0 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).EPODFMDFJEK = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        uVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields).NCJNAEMHOLK = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string DCHJMCHODPA()  [RVA 0x30AE49C]
// PLIKNCJICMM$$DCHJMCHODPA @ RVA 0x30AE49C

System_String_o * PLIKNCJICMM__DCHJMCHODPA(PLIKNCJICMM_o *__this,MethodInfo *method)

{
  return (__this->fields).EPODFMDFJEK;
}

