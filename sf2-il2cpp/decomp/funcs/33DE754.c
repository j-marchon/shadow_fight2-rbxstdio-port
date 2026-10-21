// NPLIJHGBGCB$$GABHDFHIGAO @ RVA 0x33DE754

bool NPLIJHGBGCB__GABHDFHIGAO(Nekki_Yaml_Node_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = JHMENEKPIBO;
  if ((DAT_04567e85 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_11711);
    DAT_04567e85 = 1;
  }
  if (JHMENEKPIBO != (Nekki_Yaml_Node_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((JHMENEKPIBO->fields)._typeNode_k__BackingField,StringLiteral_11711,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

