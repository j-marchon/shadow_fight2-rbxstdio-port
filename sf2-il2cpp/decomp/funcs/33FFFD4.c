// MGNPHCAAEIO$$DBMMDPHGONI @ RVA 0x33FFFD4

void MGNPHCAAEIO__DBMMDPHGONI(int32_t IILEPKAGDGC,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04567fe8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_4301);
    FUN_01bab630(&StringLiteral_20996);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_19376);
    FUN_01bab630(&StringLiteral_16775);
    DAT_04567fe8 = 1;
  }
  if (IILEPKAGDGC == 3) {
    puVar1 = &StringLiteral_20996;
  }
  else if (IILEPKAGDGC == 2) {
    puVar1 = &StringLiteral_16775;
  }
  else {
    if (IILEPKAGDGC != 1) {
      return;
    }
    puVar1 = &StringLiteral_4301;
  }
  JJPNLEPEAFM__JNDPLPKDPCP
            (StringLiteral_19376,(System_String_o *)*puVar1,StringLiteral_9679,StringLiteral_1,
             (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,true,
             (MethodInfo *)0x0);
  return;
}

