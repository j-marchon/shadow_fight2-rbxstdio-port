// LLKDCCJMFLE$$JCAHKFNICNA @ RVA 0x35227A4

System_String_o * LLKDCCJMFLE__JCAHKFNICNA(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((DAT_045689db & 1) == 0) {
                    /* try { // try from 036227d8 to 037227ff has its CatchHandler @ 03622bac */
    FUN_01bab630(&StringLiteral_8302);
    FUN_01bab630(&StringLiteral_6978);
    FUN_01bab630(&StringLiteral_1);
    DAT_045689db = 1;
  }
  puVar1 = &StringLiteral_6978;
  if (CJNHFNHJHPE != 1) {
    puVar1 = &StringLiteral_1;
  }
  puVar2 = &StringLiteral_8302;
  if (CJNHFNHJHPE != 0) {
    puVar2 = puVar1;
  }
  return (System_String_o *)*puVar2;
}

