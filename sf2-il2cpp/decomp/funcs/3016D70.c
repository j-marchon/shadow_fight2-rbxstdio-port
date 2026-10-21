// ECENNHNBAME$$AKNCABCJLII @ RVA 0x3016D70

void ECENNHNBAME__AKNCABCJLII
               (ECENNHNBAME_o *__this,GBJGJEGPHKD_o *NCNGALIAHJL,bool FOFCAILEKJD,bool BHKCLMLKLNB,
               GBJGJEGPHKD_o *CHBJNMMEAPG,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar4;
  IEFEBEDLHNN_o *IIBPJLKGEBP;
  PNGKLCHKPEO_o *pPVar5;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK;
  MethodInfo *in_x7;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar6;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar7;
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *pEVar8;
  float fVar9;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565bda & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
    FUN_01bab630(&HDBPKHNKOGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04565bda = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pEVar6 = (__this->fields).DMGLMCBIAGL;
  if ((pEVar6 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) ||
     (pEVar7 = (pEVar6->fields).EJNDOMGCGFL, pEVar7 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0))
  goto LAB_0311708c;
  iVar3 = (pEVar7->fields).HHLJNICBMDA;
  if (iVar3 < 0) {
LAB_03116e7c:
    IIBPJLKGEBP = (IEFEBEDLHNN_o *)0x0;
  }
  else {
    if ((NCNGALIAHJL == (GBJGJEGPHKD_o *)0x0) ||
       (pSVar4 = GBJGJEGPHKD__INDHJCEIEAE(NCNGALIAHJL,(MethodInfo *)0x0),
       pSVar4 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0311708c;
    if ((pSVar4->fields)._size <= iVar3) goto LAB_03116e7c;
    pSVar4 = GBJGJEGPHKD__INDHJCEIEAE(NCNGALIAHJL,(MethodInfo *)0x0);
    if (pSVar4 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) goto LAB_0311708c;
    IIBPJLKGEBP = (IEFEBEDLHNN_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,iVar3,
                             Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
  }
  pEVar6 = (__this->fields).DMGLMCBIAGL;
  if (pEVar6 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
    ECENNHNBAME__CEACPADMPKJ
              (__this,(pEVar6->fields).KPFGHBEKJIM,NCNGALIAHJL,FOFCAILEKJD,BHKCLMLKLNB,CHBJNMMEAPG,
               IIBPJLKGEBP,in_x7);
    pEVar6 = (__this->fields).DMGLMCBIAGL;
    if ((pEVar6 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
       (AHEFOIOKDOK = (pEVar6->fields).ENCCFIFCDGL,
       AHEFOIOKDOK != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)) {
      if (0 < (AHEFOIOKDOK->fields)._size) {
        ECENNHNBAME__CEACPADMPKJ
                  (__this,AHEFOIOKDOK,NCNGALIAHJL,FOFCAILEKJD,BHKCLMLKLNB,CHBJNMMEAPG,IIBPJLKGEBP,
                   in_x7);
        pEVar6 = (__this->fields).DMGLMCBIAGL;
        if (pEVar6 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) goto LAB_0311708c;
      }
      pEVar8 = (pEVar6->fields).GCIHJDANIJJ;
      if ((pEVar8 != (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) &&
         (pPVar5 = (pEVar8->fields).DBNCGNGNGNM, pPVar5 != (PNGKLCHKPEO_o *)0x0)) {
        PNGKLCHKPEO__KEAKEIPABPP
                  (pPVar5,NCNGALIAHJL,FOFCAILEKJD,(IEFEBEDLHNN_o *)0x0,BHKCLMLKLNB,CHBJNMMEAPG,
                   (MethodInfo *)0x0);
        pEVar6 = (__this->fields).DMGLMCBIAGL;
        if ((pEVar6 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
           ((pEVar8 = (pEVar6->fields).GCIHJDANIJJ,
            pEVar8 != (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0 &&
            (pPVar5 = (pEVar8->fields).OCNJNIOMPMJ, pPVar5 != (PNGKLCHKPEO_o *)0x0)))) {
          PNGKLCHKPEO__KEAKEIPABPP
                    (pPVar5,NCNGALIAHJL,FOFCAILEKJD,(IEFEBEDLHNN_o *)0x0,BHKCLMLKLNB,CHBJNMMEAPG,
                     (MethodInfo *)0x0);
          local_90.fakeValueActive = (__this->fields).ECEGJGAAOHH.fields.fakeValueActive;
          local_90.inited = (__this->fields).ECEGJGAAOHH.fields.inited;
          local_90._18_2_ = *(undefined2 *)&(__this->fields).ECEGJGAAOHH.fields.field_0x12;
          local_90.hiddenValueOldByte4.fields =
               (__this->fields).ECEGJGAAOHH.fields.hiddenValueOldByte4.fields;
          local_90.fakeValue = (__this->fields).ECEGJGAAOHH.fields.fakeValue;
          local_90.currentCryptoKey = (__this->fields).ECEGJGAAOHH.fields.currentCryptoKey;
          local_90.hiddenValue = (__this->fields).ECEGJGAAOHH.fields.hiddenValue;
          fVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                             (MethodInfo *)0x0);
          if (fVar9 != 0.0) {
            pPVar5 = (__this->fields).JCKNGNJBIIF;
            if (pPVar5 == (PNGKLCHKPEO_o *)0x0) goto LAB_0311708c;
            PNGKLCHKPEO__KEAKEIPABPP
                      (pPVar5,NCNGALIAHJL,FOFCAILEKJD,(IEFEBEDLHNN_o *)0x0,BHKCLMLKLNB,CHBJNMMEAPG,
                       (MethodInfo *)0x0);
          }
          pEVar6 = (__this->fields).DMGLMCBIAGL;
          if ((pEVar6 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
             (__this_01 = (pEVar6->fields).NEIJJHEFLHP,
             __this_01 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
                       Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
            local_70.fields._index = local_a8.fields._index;
            local_70.fields._version = local_a8.fields._version;
            local_70.fields._list = local_a8.fields._list;
            local_70.fields._current = local_a8.fields._current;
            while( true ) {
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_70,
                                 Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__
                                );
              __this_00 = local_70.fields._current;
              if (!bVar2) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__)
                ;
                return;
              }
              if ((HDBPKHNKOGI_o *)local_70.fields._current == (HDBPKHNKOGI_o *)0x0) break;
              iVar3 = IIMNGGHGKOD__NHGGBEACKBD
                                ((IIMNGGHGKOD_o *)local_70.fields._current,(MethodInfo *)0x0);
              if (iVar3 == 5) {
                bVar1 = (HDBPKHNKOGI_TypeInfo->_2).naturalAligment;
                if (((((HDBPKHNKOGI_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
                   ((((HDBPKHNKOGI_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)HDBPKHNKOGI_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(__this_00);
                }
                HDBPKHNKOGI__KHKLLNFCMME
                          ((HDBPKHNKOGI_o *)__this_00,NCNGALIAHJL,FOFCAILEKJD,(IEFEBEDLHNN_o *)0x0,
                           BHKCLMLKLNB,CHBJNMMEAPG,(MethodInfo *)0x0);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
    }
  }
LAB_0311708c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

