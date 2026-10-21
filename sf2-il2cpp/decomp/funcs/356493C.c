// LKLNALMFJEB$$.ctor @ RVA 0x356493C

void LKLNALMFJEB___ctor(LKLNALMFJEB_o *__this,System_String_o *AAIHDEKMIJG,int32_t NLLKBIJIFNI,
                       bool BCDABCLFIOF,MethodInfo *method)

{
  System_String_o *str0;
  
  if ((DAT_04568be5 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1492);
    DAT_04568be5 = 1;
  }
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  if (BCDABCLFIOF) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    str0 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
    AAIHDEKMIJG = System_String__Concat(str0,StringLiteral_1492,AAIHDEKMIJG,(MethodInfo *)0x0);
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

