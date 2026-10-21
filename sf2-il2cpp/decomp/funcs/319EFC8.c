// AHHELIMMIED$$IPMEPDPBHEL @ RVA 0x319EFC8

void AHHELIMMIED__IPMEPDPBHEL(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0329efc8 to 0339efcb has its CatchHandler @ 0329f148 */
                    /* try { // try from 0329efcc to 0339f06f has its CatchHandler @ 0329e9cc */
  if ((DAT_04566acf & 1) == 0) {
    FUN_01bab630(&AHHELIMMIED_TypeInfo);
    DAT_04566acf = 1;
    method = extraout_x1;
  }
  if ((AHHELIMMIED_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AHHELIMMIED_TypeInfo,method);
  }
  AHHELIMMIED_TypeInfo->static_fields->_NKCCFJEBFAN_k__BackingField = CJNHFNHJHPE;
  return;
}

