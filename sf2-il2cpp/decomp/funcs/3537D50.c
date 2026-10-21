// EPFMFHDGMCE$$NJNJFBNBFIH @ RVA 0x3537D50

void EPFMFHDGMCE__NJNJFBNBFIH
               (EPFMFHDGMCE_o *__this,KJBGNIGNECD_AHICALNEICM_o *EIKFGOCCOIE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar2;
  JLGNBOILFLN_o *pJVar3;
  System_String_o *a;
  int iVar4;
  int32_t CJNHFNHJHPE;
  
  if ((DAT_04568aa0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568aa0 = 1;
  }
  if ((EIKFGOCCOIE != (KJBGNIGNECD_AHICALNEICM_o *)0x0) &&
     (pSVar2 = EPFMFHDGMCE__NLEECHEFBOH(__this,(EIKFGOCCOIE->fields).NOPGBJNLFHM,method),
     pSVar2 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) {
    if (0 < (pSVar2->fields)._size) {
      iVar4 = 0;
      do {
        pJVar3 = (JLGNBOILFLN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                            Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
        if (pJVar3 == (JLGNBOILFLN_o *)0x0) goto LAB_03637e80;
        a = JLGNBOILFLN__GKMAFGODLLG(pJVar3,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,(EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
        CJNHFNHJHPE = 1;
        if (bVar1) {
          CJNHFNHJHPE = 2;
        }
        method = (MethodInfo *)0x0;
        JLGNBOILFLN__GPGHFJOGLJJ(pJVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (pSVar2->fields)._size);
    }
    pSVar2 = EPFMFHDGMCE__JNFEMGHHLAF(__this,(EIKFGOCCOIE->fields).NOPGBJNLFHM,method);
    if (pSVar2 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
      if (0 < (pSVar2->fields)._size) {
        iVar4 = 0;
        do {
          pJVar3 = (JLGNBOILFLN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                              Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
          if (pJVar3 == (JLGNBOILFLN_o *)0x0) goto LAB_03637e80;
          JLGNBOILFLN__GPGHFJOGLJJ(pJVar3,0,(MethodInfo *)0x0);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (pSVar2->fields)._size);
      }
      return;
    }
  }
LAB_03637e80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

