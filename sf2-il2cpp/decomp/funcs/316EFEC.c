// JHHFDBLANPH.MNHKJDJJINH$$EABFNDGMFKD @ RVA 0x316EFEC

void JHHFDBLANPH_MNHKJDJJINH__EABFNDGMFKD
               (JHHFDBLANPH_MNHKJDJJINH_o *__this,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_0456690c & 1) == 0) {
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_0456690c = 1;
  }
  if (((OOGPLJBADCD == (System_String_o *)0x0) ||
      (pSVar1 = System_String__Substring
                          (OOGPLJBADCD,1,(OOGPLJBADCD->fields)._stringLength + -2,(MethodInfo *)0x0)
      , pSVar1 == (System_String_o *)0x0)) ||
     (pSVar2 = System_String__Split(pSVar1,0x2c,0,(MethodInfo *)0x0),
     pSVar2 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar1 = pSVar2->m_Items[0];
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar3 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
    if (1 < (uint)pSVar2->max_length) {
      fVar4 = PNPPAHHCBOM__HNIHOIAMDPC(pSVar2->m_Items[1],(MethodInfo *)0x0);
      (__this->fields).NPLFJBBBIBH.fields.x = fVar3;
      (__this->fields).NPLFJBBBIBH.fields.y = fVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

