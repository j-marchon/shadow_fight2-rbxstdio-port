// BEPJMNAHCAD$$GDNLJLFIHFE @ RVA 0x3189610

void BEPJMNAHCAD__GDNLJLFIHFE(BEPJMNAHCAD_o *__this,MethodInfo *method)

{
  MNLIBPAOCLG_o *__this_00;
  BEPJMNAHCAD_HKFNKBEOOHP_o *pBVar1;
  
  if ((DAT_045669ff & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_045669ff = 1;
  }
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,1,(Il2CppObject *)0x0,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  pBVar1 = (__this->fields).AGIAJGHBKAF;
  if (pBVar1 != (BEPJMNAHCAD_HKFNKBEOOHP_o *)0x0) {
    if ((pBVar1->fields).OPNIEBGMEPI == false) {
      return;
    }
    __this_00 = (__this->fields).LIICCFBEOLC;
    if (__this_00 != (MNLIBPAOCLG_o *)0x0) {
      MNLIBPAOCLG__OLGJDFBPGGO
                (__this_00,(pBVar1->fields).EKEMKOCPHPO,(pBVar1->fields).MJNAHMEKOLE,
                 (pBVar1->fields).DFIBGGDJPLM,(MethodInfo *)0x0);
      pBVar1 = (__this->fields).AGIAJGHBKAF;
      if (pBVar1 != (BEPJMNAHCAD_HKFNKBEOOHP_o *)0x0) {
        (pBVar1->fields).OPNIEBGMEPI = false;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

