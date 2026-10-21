// TypeDefIndex 3436
// Namespace: 
// public class LKLNALMFJEB : Attribute
// Fields:
//   private readonly string <MLEPHDNBABJ>k__BackingField; // 0x10
//   private readonly MPNLOEAPLNP <LBIOIEOOJLN>k__BackingField; // 0x18

// ===== public void .ctor(string AAIHDEKMIJG, MPNLOEAPLNP NLLKBIJIFNI = 1, bool BCDABCLFIOF = True)  [RVA 0x356493C]
// LKLNALMFJEB$$.ctor @ RVA 0x356493C

void LKLNALMFJEB___ctor(LKLNALMFJEB_o *__this,System_String_o *AAIHDEKMIJG,int32_t NLLKBIJIFNI,
                       bool BCDABCLFIOF,MethodInfo *method)

{
  System_String_o *str0;
  
  if ((DAT_04568be5 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04568be5 = 1;
  }
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  if (BCDABCLFIOF) {
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    str0 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
    AAIHDEKMIJG = System_String__Concat(str0,StringLiteral_1492/*"/"*/,AAIHDEKMIJG,(MethodInfo *)0x0);
  }
  if (__this != (LKLNALMFJEB_o *)0x0) {
    (__this->fields)._MLEPHDNBABJ_k__BackingField = AAIHDEKMIJG;
    thunk_FUN_01c20e04(&__this->fields,AAIHDEKMIJG);
    (__this->fields)._LBIOIEOOJLN_k__BackingField = NLLKBIJIFNI;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCODMKBDGIA()  [RVA 0x35649FC]
// LKLNALMFJEB$$KCODMKBDGIA @ RVA 0x35649FC

System_String_o * LKLNALMFJEB__KCODMKBDGIA(LKLNALMFJEB_o *__this,MethodInfo *method)

{
  return (__this->fields)._MLEPHDNBABJ_k__BackingField;
}


// ===== public MPNLOEAPLNP KLMMOLEABGM()  [RVA 0x3564A04]
// LKLNALMFJEB$$KLMMOLEABGM @ RVA 0x3564A04

int32_t LKLNALMFJEB__KLMMOLEABGM(LKLNALMFJEB_o *__this,MethodInfo *method)

{
  return (__this->fields)._LBIOIEOOJLN_k__BackingField;
}

