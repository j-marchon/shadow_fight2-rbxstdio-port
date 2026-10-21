// NLPJLHOEAOE$$IAIDHMIGCEL @ RVA 0x31F43C0

System_String_o *
NLPJLHOEAOE__IAIDHMIGCEL
          (System_String_o *AAIHDEKMIJG,System_String_o *IGICIHPHELM,MethodInfo *method)

{
  int startIndex;
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04566e3f & 1) == 0) {
    FUN_01bab630(&StringLiteral_11868);
    FUN_01bab630(&StringLiteral_597);
    DAT_04566e3f = 1;
  }
  pSVar3 = GIAMPEGMNHE__JIGCIBMKDAL(AAIHDEKMIJG,IGICIHPHELM,(MethodInfo *)0x0);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = NEHNBJKKABI__EPMKDIAJEOI(pSVar3,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = System_String__IndexOf(pSVar3,StringLiteral_11868,(MethodInfo *)0x0);
    if (-1 < iVar2) {
      if (StringLiteral_11868 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      startIndex = (StringLiteral_11868->fields)._stringLength + iVar2;
      iVar2 = System_String__IndexOf(pSVar3,StringLiteral_597,startIndex,(MethodInfo *)0x0);
      if (-1 < iVar2) {
        pSVar3 = System_String__Substring(pSVar3,startIndex,iVar2 - startIndex,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
  return (System_String_o *)0x0;
}

