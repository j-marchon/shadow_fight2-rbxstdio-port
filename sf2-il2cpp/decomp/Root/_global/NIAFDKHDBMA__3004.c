// TypeDefIndex 3004
// Namespace: 
// public class NIAFDKHDBMA : AJNNHGGLGIF
// Fields:
//   private string MLNFANFAMOO; // 0x58
//   private int DKOHFAHBPPE; // 0x60

// ===== public int KBGOKDKFCGG()  [RVA 0x34A9094]
// NIAFDKHDBMA$$KBGOKDKFCGG @ RVA 0x34A9094

int32_t NIAFDKHDBMA__KBGOKDKFCGG(NIAFDKHDBMA_o *__this,MethodInfo *method)

{
  return (__this->fields).DKOHFAHBPPE;
}


// ===== public string FPLFENHOKHM()  [RVA 0x34A909C]
// NIAFDKHDBMA$$FPLFENHOKHM @ RVA 0x34A909C

System_String_o * NIAFDKHDBMA__FPLFENHOKHM(NIAFDKHDBMA_o *__this,MethodInfo *method)

{
  return (__this->fields).MLNFANFAMOO;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x34A90A4]
// NIAFDKHDBMA$$HNIHOIAMDPC @ RVA 0x34A90A4

void NIAFDKHDBMA__HNIHOIAMDPC
               (NIAFDKHDBMA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568512 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568512 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).MLNFANFAMOO = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        uVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields).DKOHFAHBPPE = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(NIAFDKHDBMA GOAHBPBJCKC)  [RVA 0x34A9190]
// NIAFDKHDBMA$$.ctor @ RVA 0x34A9190

void NIAFDKHDBMA___ctor(NIAFDKHDBMA_o *__this,NIAFDKHDBMA_o *GOAHBPBJCKC,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04568513 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568513 = 1;
  }
  ppSVar1 = &(__this->fields).MLNFANFAMOO;
  *ppSVar1 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar1);
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,(AJNNHGGLGIF_o *)GOAHBPBJCKC,(MethodInfo *)0x0);
  if (GOAHBPBJCKC != (NIAFDKHDBMA_o *)0x0) {
    (__this->fields).MLNFANFAMOO = (GOAHBPBJCKC->fields).MLNFANFAMOO;
    thunk_FUN_01c20e04(ppSVar1);
    (__this->fields).DKOHFAHBPPE = (GOAHBPBJCKC->fields).DKOHFAHBPPE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x34A9220]
// NIAFDKHDBMA$$.ctor @ RVA 0x34A9220

void NIAFDKHDBMA___ctor(NIAFDKHDBMA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  if ((DAT_04568514 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568514 = 1;
  }
  (__this->fields).MLNFANFAMOO = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,0x23,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x035a929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

