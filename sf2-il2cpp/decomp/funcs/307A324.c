// GBIOMONHPGJ.<>c$$OAJKAJMHIHC @ RVA 0x307A324

System_Collections_Generic_IEnumerable_IEJKLPPLHMO__o *
GBIOMONHPGJ_<>c__OAJKAJMHIHC(GBIOMONHPGJ___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04565fcf & 1) == 0) {
    FUN_01bab630(&GBIOMONHPGJ_TypeInfo);
    DAT_04565fcf = 1;
    method = extraout_x1;
  }
  if ((GBIOMONHPGJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GBIOMONHPGJ_TypeInfo,method);
  }
  return (System_Collections_Generic_IEnumerable_IEJKLPPLHMO__o *)
         GBIOMONHPGJ_TypeInfo->static_fields->IMEAALCCAGP;
}

