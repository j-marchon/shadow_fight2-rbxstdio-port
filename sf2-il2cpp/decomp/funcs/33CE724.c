// FADHMEJJCPO$$LFHPFJOAJIO @ RVA 0x33CE724

bool FADHMEJJCPO__LFHPFJOAJIO
               (FADHMEJJCPO_o *PDCJHMOBMPK,FADHMEJJCPO_o *NECMHLICHNE,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_bool__Fields local_24 [2];
  
  if ((DAT_04567e45 & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_PPBANLLIGDK<FADHMEJJCPO>__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_04567e45 = 1;
  }
  local_24[0] = (System_Nullable_bool__Fields)
                AJKNKCLEEAD__PPBANLLIGDK<object>
                          ((Il2CppObject *)PDCJHMOBMPK,(Il2CppObject *)NECMHLICHNE,
                           Method_AJKNKCLEEAD_PPBANLLIGDK<FADHMEJJCPO>__);
  if (((ushort)local_24[0] & 0xff) == 0) {
    if ((PDCJHMOBMPK == (FADHMEJJCPO_o *)0x0) || (NECMHLICHNE == (FADHMEJJCPO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((PDCJHMOBMPK->fields).PDOMCPONBNB == (NECMHLICHNE->fields).PDOMCPONBNB) {
      bVar1 = (PDCJHMOBMPK->fields).IMNALGKNMNP == (NECMHLICHNE->fields).IMNALGKNMNP;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = System_Nullable<bool>__get_Value
                      ((System_Nullable_bool__o)SUB82(local_24,0),
                       Method_System_Nullable<bool>_get_Value__);
  }
  return bVar1;
}

