// AEKKBHAJLKG$$MAHFCKJGBPP @ RVA 0x3338AA8

void AEKKBHAJLKG__MAHFCKJGBPP(AEKKBHAJLKG_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  HOOAAGABMBL_o *item;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_Predicate_T__o *match;
  DOPEEDABNEK_o *pDVar6;
  HOOAAGABMBL_array *pHVar7;
  Il2CppClass *pIVar8;
  int index;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar9;
  Il2CppClass *JHDEDPMNOOJ;
  void *pvVar10;
  void *pvVar11;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456795f & 1) == 0) {
    FUN_01bab630(&Method_AEKKBHAJLKG_OPFPMPIDCBB__);
    FUN_01bab630(&AEKKBHAJLKG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&NMAHEBEALAB_TypeInfo);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456795f = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar6 != (DOPEEDABNEK_o *)0x0) {
    pSVar9 = (pDVar6->fields).FDLFEJAEDGA;
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar9,
               Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    if (AEKKBHAJLKG_TypeInfo->static_fields->INKIANMMELG ==
        (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      pSVar9 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar9,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
      AEKKBHAJLKG_TypeInfo->static_fields->INKIANMMELG = pSVar9;
      thunk_FUN_01c20e04(AEKKBHAJLKG_TypeInfo->static_fields,pSVar9);
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03438f6c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_00,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                               ), bVar3) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = AEKKBHAJLKG_TypeInfo->static_fields->INKIANMMELG;
        item = (HOOAAGABMBL_o *)
               (*(local_80.fields._current)->klass->vtable[7].methodPtr)
                         (local_80.fields._current,
                          (local_80.fields._current)->klass->vtable[7].method);
        lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
        if (pSVar9 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar7 = (pSVar9->fields)._items;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (pHVar7 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar9->fields)._size;
        if (uVar1 < (uint)pHVar7->max_length) {
          (pSVar9->fields)._size = uVar1 + 1;
          pHVar7->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
    }
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (__this_00->fields)._size) {
        index = 0;
        do {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             (__this_00,index,
                              Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03438f6c;
          if (pIVar4[0x32].klass != (Il2CppClass *)0x0) {
            pIVar4[0x32].klass = (Il2CppClass *)0x0;
            thunk_FUN_01c20e04(pIVar4 + 0x32,0);
            pSVar9 = AEKKBHAJLKG_TypeInfo->static_fields->INKIANMMELG;
            if ((pSVar9 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) ||
               (pIVar5 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar9,index,
                                    Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__),
               pIVar5 == (Il2CppObject *)0x0)) goto LAB_03438f6c;
            pIVar4[6].klass = pIVar5[6].klass;
            thunk_FUN_01c20e04(pIVar4 + 6);
          }
          index = index + 1;
        } while (index < (__this_00->fields)._size);
      }
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
      System_Predicate<object>___ctor();
      System_Collections_Generic_List<object>__RemoveAll
                (__this_00,match,Method_System_Collections_Generic_List<HOOAAGABMBL>_RemoveAll__);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_00,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        pIVar4 = local_80.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
          return;
        }
        if (local_80.fields._current == (Il2CppObject *)0x0) break;
        local_80.fields._current[6].klass = (Il2CppClass *)string_TypeInfo->static_fields->Empty;
        thunk_FUN_01c20e04();
        pIVar8 = pIVar4[0x32].klass;
        if (pIVar8 == (Il2CppClass *)0x0) {
          JHDEDPMNOOJ = pIVar4[7].klass;
          pIVar8 = (Il2CppClass *)thunk_FUN_01bda818(NMAHEBEALAB_TypeInfo);
          NMAHEBEALAB___ctor((NMAHEBEALAB_o *)pIVar8,(System_String_o *)JHDEDPMNOOJ,StringLiteral_1,
                             0,0,StringLiteral_1,StringLiteral_1,0,false,false,false,
                             (MethodInfo *)0x0);
          pIVar4 = pIVar4 + 0x32;
          pIVar4->klass = pIVar8;
          thunk_FUN_01c20e04(pIVar4,pIVar8);
          pIVar8 = pIVar4->klass;
          if (pIVar8 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        pvVar11 = (void *)(__this->fields).OIJNHBIFOAM;
        pvVar10 = (void *)(__this->fields).BHDPJJAEHNG;
        *(undefined1 *)((long)&(pIVar8->_1).klass + 2) = 1;
        (pIVar8->_1).interopData = pvVar11;
        (pIVar8->_1).typeMetadataHandle = pvVar10;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_03438f6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

