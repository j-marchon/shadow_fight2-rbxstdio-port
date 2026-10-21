// HDBPKHNKOGI$$NCMDLPOGBPE @ RVA 0x3194938

void HDBPKHNKOGI__NCMDLPOGBPE(HDBPKHNKOGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  AAPGCAPGBLG_o *__this_00;
  System_String_o *PHLFGGGHGAK;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566a59 & 1) == 0) {
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_04566a59 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields)._IMJDKOBJMAJ_k__BackingField,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (!bVar1) {
    __this_00 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (AAPGCAPGBLG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = AAPGCAPGBLG__BAFDBLCFCPO
                      (__this_00,(__this->fields)._IMJDKOBJMAJ_k__BackingField,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
    if (!bVar1) {
      return;
    }
  }
  PHLFGGGHGAK = HDBPKHNKOGI__JEOMMIPAKPE(__this,method_00);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
  }
  NGCBNMBJMOE__MMHFNAEHAKC(PHLFGGGHGAK,false,(MethodInfo *)0x0);
  return;
}

