// CFBGPBCDAGA$$DJEMAAMAJHF @ RVA 0x31B5840

UnityEngine_Color_o CFBGPBCDAGA__DJEMAAMAJHF(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  System_String_array *pSVar5;
  uint16_t separator;
  UnityEngine_Color_o UVar6;
  
  if ((DAT_04566bb6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_22230);
    FUN_01bab630(&StringLiteral_15862);
    DAT_04566bb6 = 1;
  }
  if ((CJNHFNHJHPE != (System_String_o *)0x0) &&
     ((bVar1 = System_String__StartsWith(CJNHFNHJHPE,StringLiteral_22230,(MethodInfo *)0x0), !bVar1
      || (CJNHFNHJHPE = System_String__Substring
                                  (CJNHFNHJHPE,1,(CJNHFNHJHPE->fields)._stringLength + -2,
                                   (MethodInfo *)0x0), CJNHFNHJHPE != (System_String_o *)0x0)))) {
    bVar1 = System_String__Contains(CJNHFNHJHPE,StringLiteral_15862,(MethodInfo *)0x0);
    separator = 0x5f;
    if (!bVar1) {
      separator = 0x2c;
    }
    pSVar5 = System_String__Split(CJNHFNHJHPE,separator,0,(MethodInfo *)0x0);
    if (pSVar5 != (System_String_array *)0x0) {
      if ((int)pSVar5->max_length != 0) {
        iVar2 = System_Int32__Parse(pSVar5->m_Items[0],(MethodInfo *)0x0);
        if (1 < (uint)pSVar5->max_length) {
          iVar3 = System_Int32__Parse(pSVar5->m_Items[1],(MethodInfo *)0x0);
          if (2 < (uint)pSVar5->max_length) {
            if (0xfe < iVar3) {
              iVar3 = 0xff;
            }
            if (0xfe < iVar2) {
              iVar2 = 0xff;
            }
            iVar4 = System_Int32__Parse(pSVar5->m_Items[2],(MethodInfo *)0x0);
                    /* try { // try from 032b5958 to 033b595f has its CatchHandler @ 032b5aac */
            if (0xfe < iVar4) {
              iVar4 = 0xff;
            }
            UVar6.fields.r = (float)iVar2 / 255.0;
            UVar6.fields.g = (float)iVar3 / 255.0;
            UVar6.fields.b = (float)iVar4 / 255.0;
            UVar6.fields.a = 1.0;
            return (UnityEngine_Color_o)UVar6.fields;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

