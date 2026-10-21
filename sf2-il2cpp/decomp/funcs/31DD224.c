// ONEDJCACCGM$$BKEOGNKCKAH @ RVA 0x31DD224

System_String_o * ONEDJCACCGM__BKEOGNKCKAH(MethodInfo *method)

{
  bool bVar1;
  undefined8 *puVar2;
  
  if ((DAT_04566d23 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&StringLiteral_16249);
    FUN_01bab630(&StringLiteral_18893);
    FUN_01bab630(&StringLiteral_21645);
    DAT_04566d23 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = EOAOCPLIKOI__MJNFJOOPION((MethodInfo *)0x0);
  if (bVar1) {
    puVar2 = &StringLiteral_18893;
  }
  else {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = EOAOCPLIKOI__IHBLLJEMHLM((MethodInfo *)0x0);
    puVar2 = &StringLiteral_16249;
    if (!bVar1) {
      puVar2 = &StringLiteral_21645;
    }
  }
  return (System_String_o *)*puVar2;
}

