// NIELMODLCLC$$DGCODECJJCC @ RVA 0x3597B70

bool NIELMODLCLC__DGCODECJJCC(NIELMODLCLC_o *__this,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  ECENNHNBAME_o *pEVar3;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_ObscuredString__o *pSVar4;
  OLKKAIFGGAK_o **ppOVar5;
  
  if ((DAT_04568da9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_TrueForAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_get_Count__);
    FUN_01bab630(&Method_NIELMODLCLC_DIOFJFMLOFK__);
    FUN_01bab630(&System_Predicate<ObscuredString>_TypeInfo);
    DAT_04568da9 = 1;
  }
  ppOVar5 = &(__this->fields).AHGEJFDEJIF;
  if (*ppOVar5 == (OLKKAIFGGAK_o *)0x0) {
    pOVar2 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) goto LAB_03697c78;
    pOVar2 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar2,(__this->fields).AOIGHJKIBAA,(MethodInfo *)0x0);
    (__this->fields).AHGEJFDEJIF = pOVar2;
    thunk_FUN_01c20e04(ppOVar5,pOVar2);
  }
  pSVar4 = (__this->fields).DMEBCLCBAOE;
  if (pSVar4 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
    if ((pSVar4->fields)._size == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if ((*ppOVar5 != (OLKKAIFGGAK_o *)0x0) &&
         (pEVar3 = OLKKAIFGGAK__FMEOPPFIHCB(*ppOVar5,(MethodInfo *)0x0), bVar1 = false,
         pEVar3 != (ECENNHNBAME_o *)0x0)) {
        pSVar4 = (__this->fields).DMEBCLCBAOE;
        match = (System_Predicate_T__o *)
                thunk_FUN_01bda818(System_Predicate<ObscuredString>_TypeInfo);
        System_Predicate<object>___ctor();
        if (pSVar4 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
          bVar1 = System_Collections_Generic_List<object>__TrueForAll
                            ((System_Collections_Generic_List_object__o *)pSVar4,match,
                             Method_System_Collections_Generic_List<ObscuredString>_TrueForAll__);
          return bVar1;
        }
        goto LAB_03697c78;
      }
    }
    return bVar1;
  }
LAB_03697c78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

