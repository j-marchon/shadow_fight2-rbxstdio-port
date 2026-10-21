// ECENNHNBAME$$JBICKKIBGDI @ RVA 0x30167B4

void ECENNHNBAME__JBICKKIBGDI(ECENNHNBAME_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  PNGKLCHKPEO_o *pPVar4;
  MethodInfo *in_x2;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar5;
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565bd9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
    FUN_01bab630(&HDBPKHNKOGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
    DAT_04565bd9 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pEVar5 = (__this->fields).DMGLMCBIAGL;
  if (pEVar5 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
    ECENNHNBAME__POFILAAGAAP(__this,(pEVar5->fields).KPFGHBEKJIM,in_x2);
    pEVar5 = (__this->fields).DMGLMCBIAGL;
    if (pEVar5 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
      ECENNHNBAME__POFILAAGAAP(__this,(pEVar5->fields).ENCCFIFCDGL,in_x2);
      pEVar5 = (__this->fields).DMGLMCBIAGL;
      if ((pEVar5 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
         (__this_01 = (pEVar5->fields).NEIJJHEFLHP,
         __this_01 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__
                            );
          __this_00 = local_50.fields._current;
          if (!bVar2) break;
          if ((HDBPKHNKOGI_o *)local_50.fields._current == (HDBPKHNKOGI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar3 = IIMNGGHGKOD__NHGGBEACKBD
                            ((IIMNGGHGKOD_o *)local_50.fields._current,(MethodInfo *)0x0);
          if (iVar3 == 5) {
            bVar1 = (HDBPKHNKOGI_TypeInfo->_2).naturalAligment;
            if (((((HDBPKHNKOGI_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
               ((((HDBPKHNKOGI_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)HDBPKHNKOGI_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(__this_00);
            }
            HDBPKHNKOGI__HCIAPDHGJKA((HDBPKHNKOGI_o *)__this_00,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
        pEVar5 = (__this->fields).DMGLMCBIAGL;
        if (((pEVar5 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
            (pEVar6 = (pEVar5->fields).GCIHJDANIJJ,
            pEVar6 != (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0)) &&
           (pPVar4 = (pEVar6->fields).DBNCGNGNGNM, pPVar4 != (PNGKLCHKPEO_o *)0x0)) {
          PNGKLCHKPEO__NODBBDLAIHD(pPVar4,(MethodInfo *)0x0);
          pEVar5 = (__this->fields).DMGLMCBIAGL;
          if (((pEVar5 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
              (pEVar6 = (pEVar5->fields).GCIHJDANIJJ,
              pEVar6 != (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0)) &&
             (pPVar4 = (pEVar6->fields).OCNJNIOMPMJ, pPVar4 != (PNGKLCHKPEO_o *)0x0)) {
            PNGKLCHKPEO__NODBBDLAIHD(pPVar4,(MethodInfo *)0x0);
            pPVar4 = (__this->fields).JCKNGNJBIIF;
            if (pPVar4 != (PNGKLCHKPEO_o *)0x0) {
              PNGKLCHKPEO__NODBBDLAIHD(pPVar4,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

