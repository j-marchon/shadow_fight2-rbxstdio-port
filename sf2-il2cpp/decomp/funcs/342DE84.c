// GBJGJEGPHKD$$AKKNDFGMFEA @ RVA 0x342DE84

void GBJGJEGPHKD__AKKNDFGMFEA(GBJGJEGPHKD_o *__this,MethodInfo *method)

{
  int iVar1;
  BCPODJMEKMJ_o *__this_00;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar2;
  System_Collections_Generic_List_BCPODJMEKMJ__o *pSVar3;
  int index;
  
  if ((DAT_04568154 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BCPODJMEKMJ>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCPODJMEKMJ>_get_Item__);
    DAT_04568154 = 1;
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar2 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).NNBACGACIKH,
     pSVar3 != (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0)) {
    iVar1 = (pSVar3->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pSVar3 = (pGVar2->fields).NNBACGACIKH;
      if ((pSVar3 == (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0) ||
         (__this_00 = (BCPODJMEKMJ_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 Method_System_Collections_Generic_List<BCPODJMEKMJ>_get_Item__),
         __this_00 == (BCPODJMEKMJ_o *)0x0)) break;
      BCPODJMEKMJ__NMCMOPHAAPH(__this_00,(MethodInfo *)0x0);
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      pGVar2 = (__this->fields).EOIPAPCMGGF;
    } while (pGVar2 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

