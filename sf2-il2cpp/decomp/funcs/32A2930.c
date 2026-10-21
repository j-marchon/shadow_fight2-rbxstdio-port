// IGJEEGBBNFC$$KCHNOMOPPJM @ RVA 0x32A2930

void IGJEEGBBNFC__KCHNOMOPPJM
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CODKNOKHFDK,MethodInfo *method)

{
  byte bVar1;
  bool FOFCAILEKJD;
  MMFIDKMDADC_o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  FCJBEKHDLAF_o *pFVar2;
  HEFOANCOHDC_o *pHVar3;
  PHDCILJMEHO_o *pPVar4;
  HJNEOLCKEMD_o *pHVar5;
  BMMAPANJCEC_o *__this_02;
  float CJNHFNHJHPE;
  
  if ((DAT_045673da & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&GKHBKFABJKA_TypeInfo);
    DAT_045673da = 1;
  }
  if ((CODKNOKHFDK != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar5 = (CODKNOKHFDK->fields).EDOEMIDBEGO, pHVar5 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (GKHBKFABJKA_TypeInfo->_2).naturalAligment;
    if (((pHVar5->klass->_2).naturalAligment < bVar1) ||
       ((pHVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)GKHBKFABJKA_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar5);
    }
    if ((pHVar5[1].monitor != (NILLKLHKLHG_o *)0x0) &&
       (__this_00 = NILLKLHKLHG__CHKGAHCDFJF(pHVar5[1].monitor,false,(MethodInfo *)0x0),
       __this_00 != (MMFIDKMDADC_o *)0x0)) {
      CJNHFNHJHPE = MMFIDKMDADC__OFFODGKLGOP(__this_00,(MethodInfo *)0x0);
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (pFVar2 == (FCJBEKHDLAF_o *)0x0) {
        return;
      }
      pPVar4 = (__this->fields).HAHNEPLFLFD;
      __this_02 = (pFVar2->fields).HBMCNPFFCHJ;
      if ((pPVar4 == (PHDCILJMEHO_o *)0x0) ||
         (pHVar3 = (pPVar4->fields).MLPFFJNBKBN, pHVar3 == (HEFOANCOHDC_o *)0x0)) {
        FOFCAILEKJD = false;
      }
      else {
        __this_01 = (pHVar3->fields)._BGCNGEAHHFN_k__BackingField;
        FOFCAILEKJD = false;
        if (__this_01 != (OLKKAIFGGAK_o *)0x0) {
          FOFCAILEKJD = OLKKAIFGGAK__HODPOCMNNIN(__this_01,(MethodInfo *)0x0);
        }
      }
      if (__this_02 != (BMMAPANJCEC_o *)0x0) {
        BMMAPANJCEC__FOOHBJNHOKK
                  (__this_02,FOFCAILEKJD,(System_String_o *)pHVar5[1].klass,CJNHFNHJHPE,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

