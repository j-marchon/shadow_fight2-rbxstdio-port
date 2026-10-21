// OLKKAIFGGAK$$ODFNLOGGOBB @ RVA 0x34EB7C8

void OLKKAIFGGAK__ODFNLOGGOBB
               (OLKKAIFGGAK_o *__this,uint8_t ACCIHBHMFPN,
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,MethodInfo *method)

{
  uint8_t uVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  uint8_t key;
  OLKKAIFGGAK_o *pOVar4;
  OLKKAIFGGAK_o *pOVar5;
  System_Collections_Generic_Dictionary_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_04568793 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_GetEnumerator__
                 ,ACCIHBHMFPN,CJNHFNHJHPE.fields._0_8_,CJNHFNHJHPE.fields._8_8_);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_Remove__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_get_Key__
                );
    DAT_04568793 = 1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
                    /* try { // try from 035eb860 to 036eb867 has its CatchHandler @ 035eb920 */
                    /* try { // try from 035eb880 to 036eb887 has its CatchHandler @ 035eb91c */
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  pOVar5 = __this;
  do {
                    /* try { // try from 035eb89c to 036eb8a3 has its CatchHandler @ 035eb914 */
    pOVar4 = pOVar5;
    pOVar5 = (pOVar4->fields).NFMBPIPEKGF;
  } while (pOVar5 != (OLKKAIFGGAK_o *)0x0);
  __this_00 = (pOVar4->fields).OMIKEPANHAL;
  if (__this_00 !=
      (System_Collections_Generic_Dictionary_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *)0x0) {
                    /* try { // try from 035eb8b8 to 036eb8bf has its CatchHandler @ 035eb90c */
    System_Collections_Generic_Dictionary<ByteEnum,_ObscuredInt>__Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,ACCIHBHMFPN,
               Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_Remove__
              );
                    /* try { // try from 035eb8c0 to 036eb8f7 has its CatchHandler @ 035eb740 */
    iVar3 = System_Collections_Generic_Dictionary<ByteEnum,_ObscuredInt>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_get_Count__
                      );
    if (iVar3 < 1) {
      OLKKAIFGGAK__GNOBOBBEEAH(__this,method_00);
    }
    else {
      System_Collections_Generic_Dictionary<ByteEnum,_ObscuredInt>__GetEnumerator
                (&local_80,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_GetEnumerator__
                );
      uVar1 = 0;
                    /* try { // try from 035eb8f8 to 036eb8fb has its CatchHandler @ 035eb918 */
      while (key = uVar1,
            bVar2 = System_Collections_Generic_Dictionary_Enumerator<ByteEnum,_ObscuredInt>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_Dictionary_Enumerator<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_MoveNext__
                              ), bVar2) {
                    /* try { // try from 035eb8fc to 036eb8ff has its CatchHandler @ 035eb910 */
                    /* try { // try from 035eb900 to 036eb903 has its CatchHandler @ 035eb908 */
                    /* try { // try from 035eb904 to 036eb937 has its CatchHandler @ 035eb740 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035eb900 with catch @ 035eb908
                        */
        if (key == 2) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035eb880 with catch @ 035eb91c
                        */
          uVar1 = key;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035eb860 with catch @ 035eb920
                        */
          if (1 < (byte)local_80.fields._current.fields.key) {
            uVar1 = (byte)local_80.fields._current.fields.key;
          }
        }
        else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035eb8b8 with catch @ 035eb90c
                        */
          uVar1 = (byte)local_80.fields._current.fields.key;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035eb8fc with catch @ 035eb910
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035eb89c with catch @ 035eb914
                        */
          if ((key == 1) && (uVar1 = key, (byte)local_80.fields._current.fields.key != 0)) {
            uVar1 = (byte)local_80.fields._current.fields.key;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035eb8f8 with catch @ 035eb918
                        */
          }
        }
      }
      System_Collections_Generic_Dictionary_Enumerator<ByteEnum,_ObscuredInt>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_Dictionary_Enumerator<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_Dispose__
                );
                    /* try { // try from 035eb938 to 036eb93b has its CatchHandler @ 035eb964 */
                    /* try { // try from 035eb93c to 036eb96b has its CatchHandler @ 035eb740 */
      CJNHFNHJHPE_00 =
           System_Collections_Generic_Dictionary<ByteEnum,_ObscuredInt>__get_Item
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
                      Method_System_Collections_Generic_Dictionary<MGNPHCAAEIO_LGLCMNNLHMI,_ObscuredInt>_get_Item__
                     );
      OLKKAIFGGAK__NEJLOEMCOFO(__this,key,CJNHFNHJHPE_00,method);
    }
                    /* catch() { ... } // from try @ 035eb938 with catch @ 035eb964 */
                    /* try { // try from 035eb96c to 036eb973 has its CatchHandler @ 035eb988 */
                    /* try { // try from 035eb974 to 036eb97f has its CatchHandler @ 035eb740 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035eb980 to 036eb987 has its CatchHandler @ 035eb988 */
  FUN_01bab8c8();
}

