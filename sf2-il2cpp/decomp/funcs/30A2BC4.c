// IGFGDDANEPE$$DABHOGHGNBB @ RVA 0x30A2BC4

bool IGFGDDANEPE__DABHOGHGNBB(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566153 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14587);
    DAT_04566153 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).MLEHIIGFDKM;
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(__this_00,StringLiteral_14587,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

