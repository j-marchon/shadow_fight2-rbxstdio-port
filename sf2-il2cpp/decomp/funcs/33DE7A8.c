// NPLIJHGBGCB$$DKCLCINLNEP @ RVA 0x33DE7A8

bool NPLIJHGBGCB__DKCLCINLNEP(Nekki_Yaml_Node_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = JHMENEKPIBO;
  if ((DAT_04567e86 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_11820);
    DAT_04567e86 = 1;
  }
  if (JHMENEKPIBO != (Nekki_Yaml_Node_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((JHMENEKPIBO->fields)._typeNode_k__BackingField,StringLiteral_11820,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

