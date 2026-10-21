// BFBAOPNJDKL$$GKMAFGODLLG @ RVA 0x322258C

System_String_o * BFBAOPNJDKL__GKMAFGODLLG(int32_t NMLPMBCLOHA,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((DAT_04566f49 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6615);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_11817);
    DAT_04566f49 = 1;
  }
  puVar1 = &StringLiteral_11817;
  if (NMLPMBCLOHA != 1) {
    puVar1 = &StringLiteral_1;
  }
  puVar2 = &StringLiteral_6615;
  if (NMLPMBCLOHA != 0) {
    puVar2 = puVar1;
  }
  return (System_String_o *)*puVar2;
}

