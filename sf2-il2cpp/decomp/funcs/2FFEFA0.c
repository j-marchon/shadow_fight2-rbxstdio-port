// JDIJBAPLFOK$$NCMDLPOGBPE @ RVA 0x2FFEFA0

void JDIJBAPLFOK__NCMDLPOGBPE(JDIJBAPLFOK_o *__this,MethodInfo *method)

{
  System_String_o *PHLFGGGHGAK;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b19 & 1) == 0) {
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_04565b19 = 1;
    method = extraout_x1;
  }
  PHLFGGGHGAK = JDIJBAPLFOK__JEOMMIPAKPE(__this,method);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
  }
  NGCBNMBJMOE__MMHFNAEHAKC(PHLFGGGHGAK,false,(MethodInfo *)0x0);
  return;
}

