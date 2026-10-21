// GBKCLIFGIFN$$EPBENPDCBFE @ RVA 0x32FE7FC

bool GBKCLIFGIFN__EPBENPDCBFE
               (GBKCLIFGIFN_o *__this,NKOIBKNPICN_o *IFFLAAMFALK,bool KEKKALOHKHB,MethodInfo *method
               )

{
  bool bVar1;
  NKOIBKNPICN_o *__this_00;
  
  if (KEKKALOHKHB) {
    __this_00 = (__this->fields).LCDJLCMFMEO;
    if (__this_00 == (NKOIBKNPICN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = NKOIBKNPICN__CENALFGNMKJ(__this_00,IFFLAAMFALK,(MethodInfo *)0x0);
  }
  else {
    bVar1 = true;
  }
  return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

