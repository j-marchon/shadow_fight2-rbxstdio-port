// NKDMOOEFPHJ$$MHKENGKHDKD @ RVA 0x33A98B8

void NKDMOOEFPHJ__MHKENGKHDKD(NKDMOOEFPHJ_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  float fVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567d05 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_GetEnumerator__
                );
    DAT_04567d05 = 1;
  }
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._currentValue = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NCICFCFDKGL;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                       (pSVar3,
                        Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Values__
                       );
    if (pSVar4 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                (&local_88,pSVar4,
                 Method_System_Collections_Generic_Dictionary_ValueCollection<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_GetEnumerator__
                );
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._dictionary = local_88.fields._dictionary;
      local_70.fields._currentValue = local_88.fields._currentValue;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_MoveNext__
                          );
        pIVar1 = local_70.fields._currentValue;
        if (!bVar2) break;
        if (local_70.fields._currentValue == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        fVar7 = *(float *)&local_70.fields._currentValue[2].klass;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_00);
        fVar8 = *(float *)((long)&pIVar1[1].monitor + 4);
        *(float *)&pIVar1[2].klass = fVar7 * fVar5;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_01);
        fVar7 = *(float *)&pIVar1[1].monitor;
        *(float *)((long)&pIVar1[1].monitor + 4) = fVar8 * fVar5;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_02);
        fVar8 = *(float *)&pIVar1[2].monitor;
        *(float *)&pIVar1[1].monitor = fVar7 * fVar5;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_03);
        *(float *)&pIVar1[2].monitor = fVar8 * fVar5;
        fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_04);
        pvVar6 = pIVar1[1].monitor;
        *(float *)&pIVar1[2].monitor = fVar5 * *(float *)&pIVar1[2].monitor;
        pIVar1[2].klass =
             (Il2CppClass *)
             CONCAT44((float)((ulong)pIVar1[2].klass >> 0x20) * fVar5,
                      SUB84(pIVar1[2].klass,0) * fVar5);
        pIVar1[1].monitor =
             (void *)CONCAT44((float)((ulong)pvVar6 >> 0x20) * fVar5,SUB84(pvVar6,0) * fVar5);
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Dispose__
                );
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).JIEJMAMHHMD;
      if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                             (pSVar3,
                              Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Values__
                             ),
         pSVar4 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                  (&local_88,pSVar4,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_GetEnumerator__
                  );
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._dictionary = local_88.fields._dictionary;
        local_70.fields._currentValue = local_88.fields._currentValue;
        while( true ) {
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_MoveNext__
                            );
          pIVar1 = local_70.fields._currentValue;
          if (!bVar2) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Dispose__
                      );
            return;
          }
          if (local_70.fields._currentValue == (Il2CppObject *)0x0) break;
          fVar7 = *(float *)&local_70.fields._currentValue[2].klass;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_05);
          fVar8 = *(float *)((long)&pIVar1[1].monitor + 4);
          *(float *)&pIVar1[2].klass = fVar7 * fVar5;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_06);
          fVar7 = *(float *)&pIVar1[1].monitor;
          *(float *)((long)&pIVar1[1].monitor + 4) = fVar8 * fVar5;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_07);
          fVar8 = *(float *)&pIVar1[2].monitor;
          *(float *)&pIVar1[1].monitor = fVar7 * fVar5;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_08);
          *(float *)&pIVar1[2].monitor = fVar8 * fVar5;
          fVar5 = NKDMOOEFPHJ__CECMKEMHHAA(__this,method_09);
          pvVar6 = pIVar1[1].monitor;
          *(float *)&pIVar1[2].monitor = fVar5 * *(float *)&pIVar1[2].monitor;
          pIVar1[2].klass =
               (Il2CppClass *)
               CONCAT44((float)((ulong)pIVar1[2].klass >> 0x20) * fVar5,
                        SUB84(pIVar1[2].klass,0) * fVar5);
          pIVar1[1].monitor =
               (void *)CONCAT44((float)((ulong)pvVar6 >> 0x20) * fVar5,SUB84(pvVar6,0) * fVar5);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

