// ABNLGBHKOCE$$AKNCABCJLII @ RVA 0x3192FC0

void ABNLGBHKOCE__AKNCABCJLII
               (ABNLGBHKOCE_o *__this,GBJGJEGPHKD_o *NCNGALIAHJL,bool FOFCAILEKJD,bool BHKCLMLKLNB,
               GBJGJEGPHKD_o *CHBJNMMEAPG,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_00;
  PNGKLCHKPEO_o *__this_01;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566a4d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
    FUN_01bab630(&HDBPKHNKOGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
    DAT_04566a4d = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pAVar5 = (__this->fields).CKNFEFFGHLC;
  if (pAVar5 != (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) {
    (*(__this->klass->vtable)._6_CEACPADMPKJ.methodPtr)
              (__this,(pAVar5->fields).KPFGHBEKJIM,NCNGALIAHJL,(ulong)FOFCAILEKJD,(ulong)BHKCLMLKLNB
               ,CHBJNMMEAPG,0,(__this->klass->vtable)._6_CEACPADMPKJ.method);
    pAVar5 = (__this->fields).CKNFEFFGHLC;
    if ((pAVar5 != (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) &&
       (__this_00 = (pAVar5->fields).NEIJJHEFLHP,
       __this_00 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__
                          );
        pIVar2 = local_70.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
          return;
        }
        if ((IIMNGGHGKOD_o *)local_70.fields._current == (IIMNGGHGKOD_o *)0x0) break;
        iVar4 = IIMNGGHGKOD__NHGGBEACKBD
                          ((IIMNGGHGKOD_o *)local_70.fields._current,(MethodInfo *)0x0);
        if (iVar4 == 5) {
          bVar1 = (HDBPKHNKOGI_TypeInfo->_2).naturalAligment;
          if (((((IIMNGGHGKOD_c *)pIVar2->klass)->_2).naturalAligment < bVar1) ||
             ((((IIMNGGHGKOD_c *)pIVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)HDBPKHNKOGI_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pIVar2);
          }
          __this_01 = *(PNGKLCHKPEO_o **)
                       &(((IIMNGGHGKOD_o *)((long)pIVar2 + 0x48))->fields).NPGJDANOMIK;
          if (__this_01 == (PNGKLCHKPEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          PNGKLCHKPEO__KEAKEIPABPP
                    (__this_01,NCNGALIAHJL,FOFCAILEKJD,(IEFEBEDLHNN_o *)0x0,BHKCLMLKLNB,CHBJNMMEAPG,
                     (MethodInfo *)0x0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

