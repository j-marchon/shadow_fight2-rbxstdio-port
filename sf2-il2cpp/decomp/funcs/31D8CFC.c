// DBGBHDDCAJC$$MBFFGMHMHML @ RVA 0x31D8CFC

System_String_o * DBGBHDDCAJC__MBFFGMHMHML(System_String_o *KDPNKJLDLAG,MethodInfo *method)

{
  bool bVar1;
  undefined8 *puVar2;
  
  if ((DAT_04566d01 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302);
    FUN_01bab630(&StringLiteral_8719);
    DAT_04566d01 = 1;
  }
  bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_8302,(MethodInfo *)0x0);
  puVar2 = &StringLiteral_8719;
                    /* try { // try from 032d8d54 to 033d8e67 has its CatchHandler @ 032d8d54
                       catch() { ... } // from try @ 032d8d54 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d8e90 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d8f20 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d8f9c with catch @ 032d8d54
                       catch() { ... } // from try @ 032d8fcc with catch @ 032d8d54
                       catch() { ... } // from try @ 032d9014 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d9030 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d9070 with catch @ 032d8d54 */
  if ((!bVar1) &&
     (bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_8719,(MethodInfo *)0x0),
     puVar2 = &StringLiteral_8302, !bVar1)) {
    puVar2 = &StringLiteral_8719;
  }
  return (System_String_o *)*puVar2;
}

