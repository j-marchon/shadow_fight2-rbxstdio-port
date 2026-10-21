// GIAMPEGMNHE$$HPIOBPFLFLL @ RVA 0x330D0D4

System_String_o *
GIAMPEGMNHE__HPIOBPFLFLL
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,bool ANKDLALOKMH,
          MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04567793 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492,ILENGCADNIH,ANKDLALOKMH);
    DAT_04567793 = 1;
  }
  if (EIJDDKJONFO != (System_String_o *)0x0) {
    pSVar3 = System_String__Replace(EIJDDKJONFO,0x5c,0x2f,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(ILENGCADNIH,(MethodInfo *)0x0);
    if (bVar1) {
      return pSVar3;
    }
    if (ILENGCADNIH != (System_String_o *)0x0) {
      uVar2 = System_String__get_Chars(ILENGCADNIH,0,(MethodInfo *)0x0);
      if ((uVar2 != 0x2f) &&
         (uVar2 = PCOEHCPGBBG__KIKGKKGDCKK(pSVar3,(MethodInfo *)0x0), uVar2 != 0x2f)) {
        pSVar3 = System_String__Concat(pSVar3,StringLiteral_1492,(MethodInfo *)0x0);
      }
      pSVar3 = System_String__Concat(pSVar3,ILENGCADNIH,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

