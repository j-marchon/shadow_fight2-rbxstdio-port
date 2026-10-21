// BKBFFEJEBAI$$BMDJPMKDNNF @ RVA 0x35CE2AC

System_String_o * BKBFFEJEBAI__BMDJPMKDNNF(int32_t HIIGJGLEOFH,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04568fc0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_11073);
    FUN_01bab630(&StringLiteral_3076);
                    /* try { // try from 036ce2ec to 037ce4ef has its CatchHandler @ 036ce2ec
                       catch() { ... } // from try @ 036ce2ec with catch @ 036ce2ec
                       catch() { ... } // from try @ 036ce4f8 with catch @ 036ce2ec
                       catch() { ... } // from try @ 036ce674 with catch @ 036ce2ec
                       catch() { ... } // from try @ 036ce698 with catch @ 036ce2ec
                       catch() { ... } // from try @ 036ce6c8 with catch @ 036ce2ec */
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_6589);
    FUN_01bab630(&StringLiteral_10823);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_7066);
    DAT_04568fc0 = 1;
  }
  switch(HIIGJGLEOFH) {
  case 0:
    puVar1 = &StringLiteral_14870;
    break;
  case 1:
    puVar1 = &StringLiteral_3076;
    break;
  case 2:
    puVar1 = &StringLiteral_7066;
    break;
  case 3:
    puVar1 = &StringLiteral_11017;
    break;
  case 4:
    puVar1 = &StringLiteral_8772;
    break;
  case 5:
    puVar1 = &StringLiteral_11073;
    break;
  case 6:
    puVar1 = &StringLiteral_10823;
    break;
  case 7:
    puVar1 = &StringLiteral_6589;
    break;
  default:
    return (System_String_o *)0x0;
  }
  return (System_String_o *)*puVar1;
}

