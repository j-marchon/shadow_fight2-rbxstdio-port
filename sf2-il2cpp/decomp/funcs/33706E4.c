// KEFHDOHHHML$$KGHBPJNEKMA @ RVA 0x33706E4

System_String_o * KEFHDOHHHML__KGHBPJNEKMA(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined8 *puVar2;
  
  if ((DAT_04567b1b & 1) == 0) {
    FUN_01bab630(&StringLiteral_4429);
    FUN_01bab630(&StringLiteral_9439);
    FUN_01bab630(&StringLiteral_11851);
    FUN_01bab630(&StringLiteral_14464);
    DAT_04567b1b = 1;
    method = extraout_x1;
  }
  bVar1 = KEFHDOHHHML__JMHHBGKJLFE(__this,method);
  if (bVar1) {
    puVar2 = &StringLiteral_4429;
  }
  else if ((__this->fields)._JOCIAOOICNM_k__BackingField < 1) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(__this,method_00);
    puVar2 = &StringLiteral_9439;
    if (!bVar1) {
      puVar2 = &StringLiteral_14464;
    }
  }
  else {
    puVar2 = &StringLiteral_11851;
  }
  return (System_String_o *)*puVar2;
}

