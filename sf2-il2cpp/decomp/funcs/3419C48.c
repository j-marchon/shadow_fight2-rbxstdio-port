// IHNJJHJKJCL$$ENBJCAFOOGB @ RVA 0x3419C48

int32_t IHNJJHJKJCL__ENBJCAFOOGB(IHNJJHJKJCL_o *__this,float OHIILDIGEIF,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  System_Single_array *pSVar3;
  System_Int32_array *pSVar4;
  
  bVar1 = IHNJJHJKJCL__BMFLGFHABMJ(__this,OHIILDIGEIF,method);
  if (bVar1) {
    pSVar3 = (__this->fields).PNAGFADJEOK;
    if (pSVar3 == (System_Single_array *)0x0) {
LAB_03519ccc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (1 < (int)pSVar3->max_length) {
      lVar2 = 0;
      do {
        if (OHIILDIGEIF < pSVar3->m_Items[lVar2 + 1]) {
          pSVar4 = (__this->fields).MKOJJOBAHBI;
          if (pSVar4 != (System_Int32_array *)0x0) {
            if ((uint)lVar2 < (uint)pSVar4->max_length) {
              return pSVar4->m_Items[(int)(uint)lVar2];
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          goto LAB_03519ccc;
        }
        lVar2 = lVar2 + 1;
      } while ((pSVar3->max_length & 0xffffffffU) - 1 != lVar2);
    }
  }
  return -1;
}

