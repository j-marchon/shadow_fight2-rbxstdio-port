// KBCOFHAJOCK$$CPKKHCAIGLN @ RVA 0x350BE14

bool KBCOFHAJOCK__CPKKHCAIGLN(KBCOFHAJOCK_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  bool bVar1;
  PLCCJCFAFKA_o *__this_00;
  
  if (EIKFGOCCOIE == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((EIKFGOCCOIE->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    __this_00 = KBCOFHAJOCK__JHDDCDEENAK(__this,(EIKFGOCCOIE->fields).AKBDHOEGNNG,method);
    bVar1 = false;
    if (__this_00 != (PLCCJCFAFKA_o *)0x0) {
      bVar1 = PLCCJCFAFKA__PKMBANJNKBC(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return bVar1;
}

