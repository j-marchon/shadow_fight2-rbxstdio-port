// TypeDefIndex 2629
// Namespace: 
// public class OPMDFMOAMKB : DPDNFOCBGGD
// Fields:
//   private OPMDFMOAMKB.KKMPALIDPHC <GEOGEJAFIJG>k__BackingField; // 0x14
//   private JMDPBFOCHHP.BFPCOCFHFHF <GOPKIGPPKCB>k__BackingField; // 0x18

// ===== public void .ctor(JMDPBFOCHHP.BFPCOCFHFHF MCFPOCKJGBM, OPMDFMOAMKB.KKMPALIDPHC BDFPDPINEIO)  [RVA 0x33B2500]
// OPMDFMOAMKB$$.ctor @ RVA 0x33B2500

void OPMDFMOAMKB___ctor(OPMDFMOAMKB_o *__this,JMDPBFOCHHP_BFPCOCFHFHF_o *MCFPOCKJGBM,
                       int32_t BDFPDPINEIO,MethodInfo *method)

{
  JMDPBFOCHHP_BFPCOCFHFHF_o **ppJVar1;
  
  DPDNFOCBGGD___ctor((DPDNFOCBGGD_o *)__this,1,(MethodInfo *)0x0);
  ppJVar1 = &(__this->fields)._GOPKIGPPKCB_k__BackingField;
  *ppJVar1 = MCFPOCKJGBM;
  thunk_FUN_01c20e04(ppJVar1,MCFPOCKJGBM);
  (__this->fields)._GEOGEJAFIJG_k__BackingField = BDFPDPINEIO;
  return;
}


// ===== private void BCEAICNLDID(JMDPBFOCHHP.BFPCOCFHFHF CJNHFNHJHPE)  [RVA 0x33B2540]
// OPMDFMOAMKB$$BCEAICNLDID @ RVA 0x33B2540

void OPMDFMOAMKB__BCEAICNLDID
               (OPMDFMOAMKB_o *__this,JMDPBFOCHHP_BFPCOCFHFHF_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GOPKIGPPKCB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public OPMDFMOAMKB.KKMPALIDPHC FAPPKKMCAMA()  [RVA 0x33B2548]
// OPMDFMOAMKB$$FAPPKKMCAMA @ RVA 0x33B2548

int32_t OPMDFMOAMKB__FAPPKKMCAMA(OPMDFMOAMKB_o *__this,MethodInfo *method)

{
  return (__this->fields)._GEOGEJAFIJG_k__BackingField;
}


// ===== private void FFCGGHOKDCE(OPMDFMOAMKB.KKMPALIDPHC CJNHFNHJHPE)  [RVA 0x33B2550]
// OPMDFMOAMKB$$FFCGGHOKDCE @ RVA 0x33B2550

void OPMDFMOAMKB__FFCGGHOKDCE(OPMDFMOAMKB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GEOGEJAFIJG_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public JMDPBFOCHHP.BFPCOCFHFHF NODBECJPBDC()  [RVA 0x33B2558]
// OPMDFMOAMKB$$NODBECJPBDC @ RVA 0x33B2558

JMDPBFOCHHP_BFPCOCFHFHF_o * OPMDFMOAMKB__NODBECJPBDC(OPMDFMOAMKB_o *__this,MethodInfo *method)

{
  return (__this->fields)._GOPKIGPPKCB_k__BackingField;
}

