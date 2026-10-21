// TypeDefIndex 384
// Namespace: 
// public class NCGOMGGFPJH : IENLNOEDCFF
// Fields:
//   public float AIJAPBNPOEL; // 0x28
//   public float EIOLJNHIADE; // 0x2C

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x347D2AC]
// NCGOMGGFPJH$$EPBENPDCBFE @ RVA 0x347D2AC

bool NCGOMGGFPJH__EPBENPDCBFE(NCGOMGGFPJH_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    fVar2 = (AHEFOIOKDOK->fields).MHICEIKDEEN / (AHEFOIOKDOK->fields).GOOIGGNHMJM;
    if ((__this->fields).AIJAPBNPOEL <= fVar2) {
      bVar1 = fVar2 <= (__this->fields).EIOLJNHIADE;
    }
    else {
      bVar1 = false;
    }
    return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x347D2F8]
// NCGOMGGFPJH$$.ctor @ RVA 0x347D2F8

void NCGOMGGFPJH___ctor(NCGOMGGFPJH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  float fVar1;
  MGNDHCBAPEN_float__float__o *pMVar2;
  
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,7,(MethodInfo *)0x0);
  pMVar2 = GIAMPEGMNHE__DOLFIEDIDHN(AHDGNOJPPIB,0.0,0.0,(MethodInfo *)0x0);
  if (pMVar2 != (MGNDHCBAPEN_float__float__o *)0x0) {
    fVar1 = (pMVar2->fields).DOKHHBGJICA;
    (__this->fields).AIJAPBNPOEL = (pMVar2->fields).PHPELPFMOII;
    (__this->fields).EIOLJNHIADE = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

