// OHPOPCKPNDL$$EPBENPDCBFE @ RVA 0x32323E0

bool OHPOPCKPNDL__EPBENPDCBFE
               (OHPOPCKPNDL_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  float fVar2;
  
  if ((DAT_04566fe5 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04566fe5 = 1;
  }
  MANCHAFDGGG__EPBENPDCBFE((MANCHAFDGGG_o *)__this,BCKBBGCOMJD,FPEHEJBLCAO,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.MBEHOEALEMP;
  if ((__this_00 != (NILLKLHKLHG_o *)0x0) &&
     (__this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0),
     __this_01 != (MMFIDKMDADC_o *)0x0)) {
    fVar2 = MMFIDKMDADC__OFFODGKLGOP(__this_01,(MethodInfo *)0x0);
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = LIIFLGALGNK__BCKBIGCEBFL(fVar2 * 100.0,100.0,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

