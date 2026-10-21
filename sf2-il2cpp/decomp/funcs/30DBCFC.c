// LMICCGAMENM$$MAHFCKJGBPP @ RVA 0x30DBCFC

void LMICCGAMENM__MAHFCKJGBPP(LMICCGAMENM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  LMICCGAMENM_LMHCLNAKOBO_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar1;
  LMICCGAMENM_o *__this_02;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04566359 & 1) == 0) {
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&LMICCGAMENM_LMHCLNAKOBO_TypeInfo);
    DAT_04566359 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  auVar2 = thunk_FUN_01bda818(LMICCGAMENM_LMHCLNAKOBO_TypeInfo);
  __this_00 = auVar2._0_8_;
  LMICCGAMENM_LMHCLNAKOBO___ctor(__this_00,auVar2._8_8_);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar1 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar1 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar1,AAJBIMFNMBB);
    if (__this_00 != (LMICCGAMENM_LMHCLNAKOBO_o *)0x0) {
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).KGLJICLJHEL,
                 (__this_00->fields).DJELHJIIPLG,false,(System_String_o *)0x0,(MethodInfo *)0x0);
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).BHDLLGCLMBD,
                 (__this_00->fields).LIDMBHDEIFP,false,(System_String_o *)0x0,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)(__this_00->fields).EOLKPCIKAFA;
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).CJNHFNHJHPE,
                 (EILGGBOIMGE_FMFDKGKCBBG_o *)method_00,false,(System_String_o *)0x0,
                 (MethodInfo *)0x0);
      LMICCGAMENM__GNGNDDJJMFC(__this_02,__this_00,method_00);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

