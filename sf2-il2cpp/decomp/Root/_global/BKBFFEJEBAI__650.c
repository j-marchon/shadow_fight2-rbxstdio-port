// TypeDefIndex 650
// Namespace: 
// [Extension]
// public static class BKBFFEJEBAI
// Fields:

// ===== public static POIJDKLHHKO PPGMDDODKFG(HPPDIEDAKEC HIIGJGLEOFH)  [RVA 0x35CE268]
// BKBFFEJEBAI$$PPGMDDODKFG @ RVA 0x35CE268

int32_t BKBFFEJEBAI__PPGMDDODKFG(int32_t HIIGJGLEOFH,MethodInfo *method)

{
  if (HIIGJGLEOFH - 1U < 8) {
    return *(int32_t *)(&DAT_00da4578 + (long)(int)(HIIGJGLEOFH - 1U) * 4);
  }
  return 8;
}


// ===== public static HPPDIEDAKEC PPENGKDOGFE(POIJDKLHHKO HIIGJGLEOFH)  [RVA 0x35CE28C]
// BKBFFEJEBAI$$PPENGKDOGFE @ RVA 0x35CE28C

int32_t BKBFFEJEBAI__PPENGKDOGFE(int32_t HIIGJGLEOFH,MethodInfo *method)

{
  if ((uint)HIIGJGLEOFH < 8) {
    return *(int32_t *)(&DAT_00da4518 + (long)HIIGJGLEOFH * 4);
  }
  return 0;
}


// ===== public static string BMDJPMKDNNF(POIJDKLHHKO HIIGJGLEOFH)  [RVA 0x35CE2AC]
// BKBFFEJEBAI$$BMDJPMKDNNF @ RVA 0x35CE2AC

System_String_o * BKBFFEJEBAI__BMDJPMKDNNF(int32_t HIIGJGLEOFH,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04568fc0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
                    /* try { // try from 036ce2ec to 037ce4ef has its CatchHandler @ 036ce2ec
                       catch() { ... } // from try @ 036ce2ec with catch @ 036ce2ec
                       catch() { ... } // from try @ 036ce4f8 with catch @ 036ce2ec
                       catch() { ... } // from try @ 036ce674 with catch @ 036ce2ec
                       catch() { ... } // from try @ 036ce698 with catch @ 036ce2ec
                       catch() { ... } // from try @ 036ce6c8 with catch @ 036ce2ec */
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04568fc0 = 1;
  }
  switch(HIIGJGLEOFH) {
  case 0:
    puVar1 = &StringLiteral_14870/*"Weapon"*/;
    break;
  case 1:
    puVar1 = &StringLiteral_3076/*"Armor"*/;
    break;
  case 2:
    puVar1 = &StringLiteral_7066/*"Helm"*/;
    break;
  case 3:
    puVar1 = &StringLiteral_11017/*"Ranged"*/;
    break;
  case 4:
    puVar1 = &StringLiteral_8772/*"Magic"*/;
    break;
  case 5:
    puVar1 = &StringLiteral_11073/*"RealMoneyItem"*/;
    break;
  case 6:
    puVar1 = &StringLiteral_10823/*"RaidConsumable"*/;
    break;
  case 7:
    puVar1 = &StringLiteral_6589/*"Free"*/;
    break;
  default:
    return (System_String_o *)0x0;
  }
  return (System_String_o *)*puVar1;
}

