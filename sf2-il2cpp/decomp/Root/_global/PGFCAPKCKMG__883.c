// TypeDefIndex 883
// Namespace: 
// public class PGFCAPKCKMG : GJFEBGNFFBA
// Fields:

// ===== public void .ctor()  [RVA 0x30916D4]
// PGFCAPKCKMG$$.ctor @ RVA 0x30916D4

void PGFCAPKCKMG___ctor(PGFCAPKCKMG_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045660a9 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_045660a9 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string FGBGAKLKONL()  [RVA 0x309172C]
// PGFCAPKCKMG$$FGBGAKLKONL @ RVA 0x309172C

System_String_o * PGFCAPKCKMG__FGBGAKLKONL(PGFCAPKCKMG_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_String_o *str0;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  System_Xml_XmlDocument_o *__this_01;
  System_String_array *pSVar6;
  Il2CppObject *pIVar7;
  System_Func_TSource__bool__o *predicate;
  System_Xml_XmlElement_o *pSVar8;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *str1;
  System_String_o *pSVar9;
  MethodInfo *extraout_x1;
  FOKJBDHLIMG_o *pFVar10;
  void *pvVar11;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_03;
  bool DKCOAMDMOKM;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  uint local_68;
  int local_64;
  
  if ((DAT_045660aa & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<HEFOANCOHDC>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&System_Func<HEFOANCOHDC,_bool>_TypeInfo);
    FUN_01bab630(&Method_PGFCAPKCKMG_GBBFPMJDNCP_FFKMKBNFEMO__);
    FUN_01bab630(&PGFCAPKCKMG_GBBFPMJDNCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_3251/*"AutoTestPerksTemplatesExists Tests processed "*/);
    FUN_01bab630(&StringLiteral_261/*" <color=red>"*/);
    FUN_01bab630(&StringLiteral_491/*" not exists</color>"*/);
    FUN_01bab630(&StringLiteral_3250/*"AutoTestPerksTemplatesExists Tests"*/);
    FUN_01bab630(&StringLiteral_509/*" perks"*/);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    FUN_01bab630(&StringLiteral_21559/*"total founded perks : "*/);
    DAT_045660aa = 1;
    method = extraout_x1;
  }
  local_64 = 0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar10 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if ((pFVar10 != (FOKJBDHLIMG_o *)0x0) &&
     (__this_03 = (pFVar10->fields).FLADBMFBNIH,
     __this_03 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    local_68 = (__this_03->fields)._size;
    pSVar3 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(StringLiteral_21559/*"total founded perks : "*/,pSVar3,(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(__this_00,pSVar3,(MethodInfo *)0x0);
      local_64 = 0;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_03,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
      DKCOAMDMOKM = false;
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                          );
        pIVar7 = local_80.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
          GJFEBGNFFBA__ILHNDPBPGAN
                    ((GJFEBGNFFBA_o *)__this,DKCOAMDMOKM,StringLiteral_3250/*"AutoTestPerksTemplatesExists Tests"*/,__this_00,
                     (MethodInfo *)0x0);
          local_68 = (__this_03->fields)._size;
          str1 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
          str0 = StringLiteral_3251/*"AutoTestPerksTemplatesExists Tests processed "*/;
          pSVar3 = StringLiteral_509/*" perks"*/;
          if (local_64 < 1) {
            pSVar9 = (System_String_o *)0x0;
          }
          else {
            pSVar9 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat
                               (StringLiteral_261/*" <color=red>"*/,pSVar9,StringLiteral_491/*" not exists</color>"*/,(MethodInfo *)0x0);
          }
          pSVar3 = System_String__Concat(str0,str1,pSVar3,pSVar9,(MethodInfo *)0x0);
          return pSVar3;
        }
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar4 = local_80.fields._current[3].klass;
        if ((pIVar4 == (Il2CppClass *)0x0) ||
           (pvVar11 = (pIVar4->_1).image,
           lVar5 = (**(code **)((long)pvVar11 + 0x1f8))
                             (pIVar4,*(undefined8 *)((long)pvVar11 + 0x200)), lVar5 == 0)) {
LAB_031919d4:
          pSVar3 = (System_String_o *)0x0;
        }
        else {
          pIVar4 = pIVar7[3].klass;
          if (pIVar4 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pvVar11 = (pIVar4->_1).image;
          lVar5 = (**(code **)((long)pvVar11 + 0x1f8))
                            (pIVar4,*(undefined8 *)((long)pvVar11 + 0x200));
          if (lVar5 == 0) goto LAB_031919d4;
          pIVar4 = pIVar7[3].klass;
          if (pIVar4 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pvVar11 = (pIVar4->_1).image;
          __this_01 = (System_Xml_XmlDocument_o *)
                      (**(code **)((long)pvVar11 + 0x1f8))
                                (pIVar4,*(undefined8 *)((long)pvVar11 + 0x200));
          if (__this_01 == (System_Xml_XmlDocument_o *)0x0) goto LAB_031919d4;
          bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
          if (((__this_01->klass->_2).naturalAligment < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) goto LAB_031919d4;
          pSVar8 = System_Xml_XmlDocument__get_DocumentElement(__this_01,(MethodInfo *)0x0);
          if (pSVar8 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_02 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar8->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar8,(pSVar8->klass->vtable)._16_get_Attributes.method);
          if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this_02,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
        }
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar3,(MethodInfo *)0x0);
        if (!bVar2) {
          if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = System_String__Split(pSVar3,0x7c,0,(MethodInfo *)0x0);
          local_68 = 0;
          if (pSVar6 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (0 < (int)pSVar6->max_length) {
            do {
              pIVar7 = (Il2CppObject *)thunk_FUN_01bda818(PGFCAPKCKMG_GBBFPMJDNCP_TypeInfo);
              System_Object___ctor(pIVar7,(MethodInfo *)0x0);
              if ((uint)pSVar6->max_length <= local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pIVar7[1].klass = (Il2CppClass *)pSVar6->m_Items[(int)local_68];
              thunk_FUN_01c20e04();
              predicate = (System_Func_TSource__bool__o *)
                          thunk_FUN_01bda818(System_Func<HEFOANCOHDC,_bool>_TypeInfo);
              System_Func<object,_bool>___ctor();
              pIVar7 = System_Linq_Enumerable__FirstOrDefault<object>
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)__this_03,
                                  predicate,
                                  Method_System_Linq_Enumerable_FirstOrDefault<HEFOANCOHDC>__);
              if (pIVar7 == (Il2CppObject *)0x0) {
                DKCOAMDMOKM = true;
                local_64 = local_64 + 1;
                break;
              }
              local_68 = local_68 + 1;
            } while ((int)local_68 < (int)pSVar6->max_length);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

