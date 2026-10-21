// Nekki.SF2.GUI.Shop.PerksPanel$$SetPerks @ RVA 0x336F328

void Nekki_SF2_GUI_Shop_PerksPanel__SetPerks
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,
               System_Collections_Generic_List_HEFOANCOHDC__o *BJAHLFLBNDJ,
               HOOAAGABMBL_o *IHGFKLOLPOK,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t EBDDELGICGB;
  System_Collections_Generic_List_object__o *__this_00;
  System_Comparison_HEFOANCOHDC__o **ppSVar3;
  System_Xml_XmlDocument_o *__this_01;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_02;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *__this_03;
  System_Xml_XmlAttribute_o *pSVar5;
  DEKKGJNMFEB_o *__this_04;
  ACHLOMELAJE_o *__this_05;
  System_String_o *pSVar6;
  System_Comparison_HEFOANCOHDC__o *comparison;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  int32_t local_84;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567b0a & 1) == 0) {
    FUN_01bab630(&System_Comparison<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_PerksPanel_<>c_KEGJNHDEKNM__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_5703);
    FUN_01bab630(&StringLiteral_3114);
    DAT_04567b0a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_84 = 0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  (*(__this->klass->vtable)._6_Clear.methodPtr)(__this,(__this->klass->vtable)._6_Clear.method);
  if ((BJAHLFLBNDJ == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) ||
     ((BJAHLFLBNDJ->fields)._size == 0)) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)BJAHLFLBNDJ,
             Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  if ((Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  comparison = Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo->static_fields->__9__17_0;
  if (comparison == (System_Comparison_HEFOANCOHDC__o *)0x0) {
    if ((Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = (System_Comparison_HEFOANCOHDC__o *)
                 thunk_FUN_01bda818(System_Comparison<HEFOANCOHDC>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar3 = &Nekki_SF2_GUI_Shop_PerksPanel_<>c_TypeInfo->static_fields->__9__17_0;
    *ppSVar3 = comparison;
    thunk_FUN_01c20e04(ppSVar3,comparison);
  }
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              (__this_00,(System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_Sort__);
    __this_01 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
    System_Xml_XmlDocument___ctor(__this_01,(MethodInfo *)0x0);
    AHDGNOJPPIB = EIABCPKDEBD__KPODFFHOHGK(__this_01,StringLiteral_5703,(MethodInfo *)0x0);
    if ((IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) &&
       (__this_02 = (IHGFKLOLPOK->fields)._LCJBEIKDDNA_k__BackingField,
       __this_02 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while( true ) {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                            );
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
            HOOAAGABMBL__EOAMPKBBJPL(IHGFKLOLPOK,AHDGNOJPPIB,(MethodInfo *)0x0);
            HOOAAGABMBL__LOPGLHCEBDF(IHGFKLOLPOK,AHDGNOJPPIB,(MethodInfo *)0x0);
            uVar1 = (__this_00->fields)._size;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_a0,__this_00,
                       Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
            while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_a0,
                                      Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                                     ), bVar2) {
              (*(__this->klass->vtable)._5_JJPEDCEMMID.methodPtr)
                        (__this,local_a0.fields._current,(ulong)uVar1,
                         (__this->klass->vtable)._5_JJPEDCEMMID.method);
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
            return;
          }
          if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (local_80.fields._current[2].monitor == (void *)0x0);
        if (__this_01 == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        plVar4 = (long *)(*(__this_01->klass->vtable)._79_ImportNode.methodPtr)
                                   (__this_01,local_80.fields._current[2].monitor,1,
                                    (__this_01->klass->vtable)._79_ImportNode.method);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) break;
        (*(AHDGNOJPPIB->klass->vtable)._27_AppendChild.methodPtr)
                  (AHDGNOJPPIB,plVar4,(AHDGNOJPPIB->klass->vtable)._27_AppendChild.method);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                   (plVar4,StringLiteral_11876,*(undefined8 *)(*plVar4 + 0x470));
        if (plVar4 != (long *)0x0) {
          __this_03 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
          if (__this_03 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this_03,StringLiteral_3114,(MethodInfo *)0x0);
          if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
            if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_04 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_05 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (__this_05 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            EBDDELGICGB = ACHLOMELAJE__EOEAKGGDBFH(__this_05,(MethodInfo *)0x0);
            if (__this_04 == (DEKKGJNMFEB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            local_84 = DEKKGJNMFEB__HNBCOIJFCCA(__this_04,EBDDELGICGB,(MethodInfo *)0x0);
            pSVar6 = System_Int32__ToString((int32_t)&local_84,(MethodInfo *)0x0);
            (*(pSVar5->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar5,pSVar6,(pSVar5->klass->vtable)._10_set_Value.method);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

