// DNELIPCHKLK$$IPFJNBLGFOE @ RVA 0x33CD400

bool DNELIPCHKLK__IPFJNBLGFOE(DNELIPCHKLK_o *__this,System_String_o *DBIAAJNKHLH,MethodInfo *method)

{
  System_String_o **ppSVar1;
  int iVar2;
  System_String_o **ppSVar3;
  bool bVar4;
  System_String_array *pSVar5;
  MethodInfo *method_00;
  
  if ((DAT_04567e31 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04567e31 = 1;
  }
  if (DBIAAJNKHLH != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pSVar5 = System_String__Split(DBIAAJNKHLH,0x7c,0,(MethodInfo *)0x0);
    if (pSVar5 != (System_String_array *)0x0) {
      iVar2 = (int)pSVar5->max_length;
      ppSVar1 = (System_String_o **)&StringLiteral_1;
      if (iVar2 != 1) {
        ppSVar1 = pSVar5->m_Items + 1;
      }
      ppSVar3 = pSVar5->m_Items;
      if (iVar2 < 1) {
        ppSVar1 = (System_String_o **)&StringLiteral_1;
        ppSVar3 = (System_String_o **)&StringLiteral_1;
      }
      bVar4 = DNELIPCHKLK__IPFJNBLGFOE(__this,*ppSVar3,*ppSVar1,method_00);
      return bVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

