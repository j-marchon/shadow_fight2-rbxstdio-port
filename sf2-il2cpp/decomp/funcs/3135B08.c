// OFFIONDOEPM$$CGPGBMMPMDM @ RVA 0x3135B08

System_String_o * OFFIONDOEPM__CGPGBMMPMDM(System_String_o *HLEMJLIHJEA,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *NEJHIEOHMCF;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  int startIndex;
  
  if ((DAT_045666ff & 1) == 0) {
    FUN_01bab630(&StringLiteral_250);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_22472);
    FUN_01bab630(&StringLiteral_22473);
    DAT_045666ff = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(HLEMJLIHJEA,(MethodInfo *)0x0);
  if (!bVar1) {
    if (HLEMJLIHJEA == (System_String_o *)0x0) {
LAB_03235cb8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Contains(HLEMJLIHJEA,StringLiteral_22473,(MethodInfo *)0x0);
    if (bVar1) {
      startIndex = 0;
      while (-1 < startIndex) {
        if (HLEMJLIHJEA == (System_String_o *)0x0) goto LAB_03235cb8;
        if ((HLEMJLIHJEA->fields)._stringLength <= startIndex + 1) {
          return HLEMJLIHJEA;
        }
        uVar2 = System_String__IndexOf
                          (HLEMJLIHJEA,StringLiteral_22472,startIndex + 1,(MethodInfo *)0x0);
        if (uVar2 == 0xffffffff) {
          return HLEMJLIHJEA;
        }
        startIndex = uVar2 + 1;
        iVar3 = System_String__IndexOf(HLEMJLIHJEA,StringLiteral_22500,startIndex,(MethodInfo *)0x0)
        ;
        if (iVar3 == -1) {
          return HLEMJLIHJEA;
        }
        NEJHIEOHMCF = System_String__Substring
                                (HLEMJLIHJEA,startIndex,iVar3 + ~uVar2,(MethodInfo *)0x0);
        pSVar4 = OFFIONDOEPM__CNLBHLNMCCI(NEJHIEOHMCF,method_00);
        bVar1 = System_String__op_Equality(NEJHIEOHMCF,pSVar4,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar4 = System_String__Concat
                             (StringLiteral_2422,pSVar4,StringLiteral_250,(MethodInfo *)0x0);
          HLEMJLIHJEA = System_String__Replace(HLEMJLIHJEA,NEJHIEOHMCF,pSVar4,(MethodInfo *)0x0);
          if ((pSVar4 == (System_String_o *)0x0) || (NEJHIEOHMCF == (System_String_o *)0x0))
          goto LAB_03235cb8;
          startIndex = ((pSVar4->fields)._stringLength + uVar2) -
                       (NEJHIEOHMCF->fields)._stringLength;
        }
      }
    }
  }
  return HLEMJLIHJEA;
}

