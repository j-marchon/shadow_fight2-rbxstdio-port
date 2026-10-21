// IHNJJHJKJCL$$BMFLGFHABMJ @ RVA 0x3419CD4

bool IHNJJHJKJCL__BMFLGFHABMJ(IHNJJHJKJCL_o *__this,float OHIILDIGEIF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Single_array *pSVar3;
  
  pSVar3 = (__this->fields).PNAGFADJEOK;
  if (pSVar3 != (System_Single_array *)0x0) {
    uVar1 = (int)pSVar3->max_length - 1;
    if (((int)uVar1 < 1) || (OHIILDIGEIF < pSVar3->m_Items[0])) {
      bVar2 = false;
    }
    else {
      bVar2 = OHIILDIGEIF < pSVar3->m_Items[uVar1];
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

