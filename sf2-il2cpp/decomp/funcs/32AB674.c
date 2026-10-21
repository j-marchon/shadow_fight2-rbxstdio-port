// BGFNOPDHEOM$$IIHMILNAGAB @ RVA 0x32AB674

void BGFNOPDHEOM__IIHMILNAGAB(NLIDHEAMLMC_o *OCMMDIHLKMH,MethodInfo *method)

{
  int32_t PCLEALHGACC;
  int32_t NAIJBCMHBFK;
  int32_t OPHMGAKOJLP;
  MethodInfo *in_x3;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = OCMMDIHLKMH;
  if ((DAT_0456743a & 1) == 0) {
    auVar1 = FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_0456743a = 1;
  }
  if (OCMMDIHLKMH != (NLIDHEAMLMC_o *)0x0) {
    PCLEALHGACC = (OCMMDIHLKMH->fields).NJCMGCGNCLJ;
    NAIJBCMHBFK = (OCMMDIHLKMH->fields).ELHIGHABJBJ;
    OPHMGAKOJLP = (OCMMDIHLKMH->fields).OFFPEKODFPE;
    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    BGFNOPDHEOM__IIHMILNAGAB(PCLEALHGACC,NAIJBCMHBFK,OPHMGAKOJLP,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}

