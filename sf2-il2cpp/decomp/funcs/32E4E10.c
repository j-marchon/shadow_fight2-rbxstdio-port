// DOPEEDABNEK.<>c$$OOMIICNFBKM @ RVA 0x32E4E10

bool DOPEEDABNEK_<>c__OOMIICNFBKM(DOPEEDABNEK___c_o *__this,HOOAAGABMBL_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567602 & 1) == 0) {
    __this = (DOPEEDABNEK___c_o *)FUN_01bab630(&StringLiteral_6868);
    DAT_04567602 = 1;
  }
  if (item != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((item->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_6868,
                       (MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = HOOAAGABMBL__ACBLFBAIHPN(item,(MethodInfo *)0x0);
      return bVar1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

