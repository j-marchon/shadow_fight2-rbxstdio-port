// KHEDNGODOIC$$HFCJLBGBGPI @ RVA 0x32B78A8

void KHEDNGODOIC__HFCJLBGBGPI(KHEDNGODOIC_o *__this,MethodInfo *method)

{
  bool bVar1;
  ENOJCLHOINK_o *pEVar2;
  System_Collections_Generic_List_GLCAPECMBLM__o *pSVar3;
  
  if ((DAT_04567461 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<GLCAPECMBLM>__);
    DAT_04567461 = 1;
  }
  pEVar2 = (__this->fields).HGCEPEBIDFB;
  if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
  pSVar3 = ENOJCLHOINK__JHNLKBALFBK(pEVar2,true,(MethodInfo *)0x0);
  bVar1 = System_Linq_Enumerable__Any<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                     Method_System_Linq_Enumerable_Any<GLCAPECMBLM>__);
  if (bVar1) {
    pEVar2 = (__this->fields).HGCEPEBIDFB;
    if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
    ENOJCLHOINK__DABOBFKFPKJ(pEVar2,pSVar3,(MethodInfo *)0x0);
    pEVar2 = (__this->fields).FBGFDHMKFKI;
    if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
    ENOJCLHOINK__NDBCBDMBFON(pEVar2,pSVar3,(MethodInfo *)0x0);
  }
  pEVar2 = (__this->fields).FBGFDHMKFKI;
  if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
  pSVar3 = ENOJCLHOINK__JHNLKBALFBK(pEVar2,false,(MethodInfo *)0x0);
  bVar1 = System_Linq_Enumerable__Any<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                     Method_System_Linq_Enumerable_Any<GLCAPECMBLM>__);
  if (bVar1) {
    pEVar2 = (__this->fields).FBGFDHMKFKI;
    if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
    ENOJCLHOINK__DABOBFKFPKJ(pEVar2,pSVar3,(MethodInfo *)0x0);
    pEVar2 = (__this->fields).HGCEPEBIDFB;
    if (pEVar2 == (ENOJCLHOINK_o *)0x0) goto LAB_033b799c;
    ENOJCLHOINK__NDBCBDMBFON(pEVar2,pSVar3,(MethodInfo *)0x0);
  }
  pEVar2 = (__this->fields).HGCEPEBIDFB;
  if (pEVar2 != (ENOJCLHOINK_o *)0x0) {
    ENOJCLHOINK__AAILGEMALAJ(pEVar2,(MethodInfo *)0x0);
    pEVar2 = (__this->fields).FBGFDHMKFKI;
    if (pEVar2 != (ENOJCLHOINK_o *)0x0) {
      ENOJCLHOINK__AAILGEMALAJ(pEVar2,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033b799c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

