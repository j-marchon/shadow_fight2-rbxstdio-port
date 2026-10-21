// DEOCJNLGODA$$MAHFCKJGBPP @ RVA 0x3247798

void DEOCJNLGODA__MAHFCKJGBPP(DEOCJNLGODA_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar1;
  DEKKGJNMFEB_o *__this_02;
  GGLKHCAIGDI_o *pGVar2;
  
  if ((DAT_045670ce & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    DAT_045670ce = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar1 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar1 = MNBMHEAHIIA;
    thunk_FUN_01c20e04(ppPVar1,MNBMHEAHIIA);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).ECOCLJPFDII,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_02 != (DEKKGJNMFEB_o *)0x0) {
      pGVar2 = DEKKGJNMFEB__LDGJEEGACHJ(__this_02,(__this->fields).ECOCLJPFDII,(MethodInfo *)0x0);
      if (pGVar2 != (GGLKHCAIGDI_o *)0x0) {
        (pGVar2->fields)._PDDCGLMFLJL_k__BackingField = true;
      }
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

