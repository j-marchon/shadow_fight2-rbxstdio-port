// RaidInfoBattlePassRewards$$UpdateInfo @ RVA 0x3414C44

void RaidInfoBattlePassRewards__UpdateInfo
               (RaidInfoBattlePassRewards_o *__this,OHDDKGHEEPA_o *BANHBMINMMP,
               System_String_o *KJODHCEONMG,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  System_Collections_Generic_IEnumerable_T__o *collection;
  long lVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Object_array *pSVar6;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_01;
  HBNENINHPGF_o *pHVar7;
  RaidInfoBattlePassRewards_o *__this_02;
  System_String_o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *__this_03;
  System_String_array *values;
  undefined8 uVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x4;
  BHEDGAKGKPO_StaticFields *pBVar11;
  System_Collections_Generic_IEnumerable_T__c *pSVar12;
  Nekki_SF2_GUI_LabelAlias_o *pNVar13;
  ulong uVar14;
  System_String_o *pSVar15;
  JKDFEBLBMOF_o *COPNBALDNLF;
  undefined4 local_68;
  int32_t local_64;
  
  if ((DAT_0456809e & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&CNLGMNIEGFG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<JKDFEBLBMOF>__);
    FUN_01bab630(&Nekki_SF2_GUI_LabelAlias___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelAlias>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelAlias>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelAlias>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<LabelAlias>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_1223);
    FUN_01bab630(&StringLiteral_20417);
    FUN_01bab630(&StringLiteral_20416);
    DAT_0456809e = 1;
  }
  if (BANHBMINMMP != (OHDDKGHEEPA_o *)0x0) {
    plVar4 = (long *)(*(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.methodPtr)
                               (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.method);
    if (plVar4 == (long *)0x0) {
      return;
    }
    bVar2 = (CNLGMNIEGFG_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar4 + 0x130) < bVar2) ||
       (*(CNLGMNIEGFG_c **)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) !=
        CNLGMNIEGFG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar4);
    }
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 FUN_01bab718(Nekki_SF2_GUI_LabelAlias___TypeInfo,4);
    if (collection != (System_Collections_Generic_IEnumerable_T__o *)0x0) {
      pSVar12 = (System_Collections_Generic_IEnumerable_T__c *)(__this->fields)._reward1;
      if ((pSVar12 != (System_Collections_Generic_IEnumerable_T__c *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pSVar12,(collection->klass->_1).element_class), lVar5 == 0)) {
LAB_03515220:
        uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar10,0);
      }
      if (*(int *)&collection[1].monitor == 0) goto LAB_0351521c;
      collection[2].klass = pSVar12;
      thunk_FUN_01c20e04(collection + 2,pSVar12);
      pNVar13 = (__this->fields)._reward2;
      if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pNVar13,(collection->klass->_1).element_class), lVar5 == 0))
      goto LAB_03515220;
      if (*(uint *)&collection[1].monitor < 2) goto LAB_0351521c;
      collection[2].monitor = pNVar13;
      thunk_FUN_01c20e04(&collection[2].monitor,pNVar13);
      pSVar12 = (System_Collections_Generic_IEnumerable_T__c *)(__this->fields)._reward3;
      if ((pSVar12 != (System_Collections_Generic_IEnumerable_T__c *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pSVar12,(collection->klass->_1).element_class), lVar5 == 0))
      goto LAB_03515220;
      if (*(uint *)&collection[1].monitor < 3) goto LAB_0351521c;
      collection[3].klass = pSVar12;
      thunk_FUN_01c20e04(collection + 3,pSVar12);
      pNVar13 = (__this->fields)._reward4;
      if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pNVar13,(collection->klass->_1).element_class), lVar5 == 0))
      goto LAB_03515220;
      if (*(uint *)&collection[1].monitor < 4) goto LAB_0351521c;
      collection[3].monitor = pNVar13;
      thunk_FUN_01c20e04(&collection[3].monitor,pNVar13);
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<LabelAlias>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,collection,Method_System_Collections_Generic_List<LabelAlias>__ctor__);
      if ((System_Collections_Generic_Dictionary_int__object__o *)plVar4[0x32] !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        source = System_Collections_Generic_Dictionary<int,_object>__get_Values
                           ((System_Collections_Generic_Dictionary_int__object__o *)plVar4[0x32],
                            Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__
                           );
        pSVar6 = System_Linq_Enumerable__ToArray<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            Method_System_Linq_Enumerable_ToArray<JKDFEBLBMOF>__);
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
        }
        __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
        if (((__this_01 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) &&
            (pHVar7 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this_01,KJODHCEONMG,(MethodInfo *)0x0),
            pHVar7 != (HBNENINHPGF_o *)0x0)) &&
           (__this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
          if (0 < (__this_00->fields)._size) {
            pSVar15 = (pHVar7->fields)._PGCEKJLODEJ_k__BackingField;
            uVar14 = 0;
            do {
              if (pSVar6 == (System_Object_array *)0x0) goto LAB_03515218;
              uVar1 = (uint)pSVar6->max_length;
              if ((long)uVar14 < (long)(int)uVar1) {
                if (uVar1 <= uVar14) goto LAB_0351521c;
                COPNBALDNLF = (JKDFEBLBMOF_o *)pSVar6->m_Items[uVar14];
                __this_02 = (RaidInfoBattlePassRewards_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      (__this_00,(int32_t)uVar14,
                                       Method_System_Collections_Generic_List<LabelAlias>_get_Item__
                                      );
                if (COPNBALDNLF == (JKDFEBLBMOF_o *)0x0) goto LAB_03514ff0;
                pSVar8 = RaidInfoBattlePassRewards__ACHEEICHHHJ
                                   (__this_02,COPNBALDNLF,KJODHCEONMG,pSVar15,in_x4);
                if (__this_02 == (RaidInfoBattlePassRewards_o *)0x0) goto LAB_03515218;
                (*__this_02->klass[4]._1.gc_desc)(__this_02,pSVar8,__this_02->klass[4]._1.name);
                pUVar9 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                if ((pUVar9 == (UnityEngine_Transform_o *)0x0) ||
                   (pUVar9 = UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0),
                   pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_03515218;
                __this_03 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar8,(MethodInfo *)0x0);
                if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto LAB_03515218;
                bVar3 = (bool)(~bVar3 & 1);
              }
              else {
                __this_02 = (RaidInfoBattlePassRewards_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      (__this_00,(int32_t)uVar14,
                                       Method_System_Collections_Generic_List<LabelAlias>_get_Item__
                                      );
LAB_03514ff0:
                if (((__this_02 == (RaidInfoBattlePassRewards_o *)0x0) ||
                    (pUVar9 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
                    pUVar9 == (UnityEngine_Transform_o *)0x0)) ||
                   ((pUVar9 = UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0),
                    pUVar9 == (UnityEngine_Transform_o *)0x0 ||
                    (__this_03 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                    __this_03 == (UnityEngine_GameObject_o *)0x0)))) goto LAB_03515218;
                bVar3 = false;
              }
              UnityEngine_GameObject__SetActive(__this_03,bVar3,(MethodInfo *)0x0);
              uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)(__this_00->fields)._size);
          }
          local_64 = OHDDKGHEEPA__NLMMJCACKPC(BANHBMINMMP,(MethodInfo *)0x0);
          if (local_64 < 5) {
            local_68 = 4;
            pSVar15 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
            pSVar8 = RaidInfoBattlePassRewards__PACBLOGMBNM(StringLiteral_20416,method_00);
            pSVar15 = System_String__Concat(pSVar15,StringLiteral_167,pSVar8,(MethodInfo *)0x0);
          }
          else {
            values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
            local_68 = 4;
            pSVar15 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
            if (values == (System_String_array *)0x0) goto LAB_03515218;
            if ((int)values->max_length == 0) {
LAB_0351521c:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            values->m_Items[0] = pSVar15;
            thunk_FUN_01c20e04(values->m_Items,pSVar15);
            if ((uint)values->max_length < 2) goto LAB_0351521c;
            values->m_Items[1] = StringLiteral_1223;
            thunk_FUN_01c20e04(values->m_Items + 1);
            pSVar15 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
            if ((uint)values->max_length < 3) goto LAB_0351521c;
            values->m_Items[2] = pSVar15;
            thunk_FUN_01c20e04(values->m_Items + 2,pSVar15);
            if ((uint)values->max_length < 4) goto LAB_0351521c;
            values->m_Items[3] = StringLiteral_167;
            thunk_FUN_01c20e04(values->m_Items + 3);
            pSVar15 = RaidInfoBattlePassRewards__PACBLOGMBNM(StringLiteral_20417,method_01);
            if ((uint)values->max_length < 5) goto LAB_0351521c;
            values->m_Items[4] = pSVar15;
            thunk_FUN_01c20e04();
            pSVar15 = System_String__Concat(values,(MethodInfo *)0x0);
          }
          pNVar13 = (__this->fields)._reward4GroupName;
          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar11 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar13->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar11->FHIAKPJBBCB).fields.r,(pBVar11->FHIAKPJBBCB).fields.g,
                       (pBVar11->FHIAKPJBBCB).fields.b,(pBVar11->FHIAKPJBBCB).fields.a,pNVar13,
                       (pNVar13->klass->vtable)._23_set_color.method);
            pNVar13 = (__this->fields)._reward4GroupName;
            if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar13,pSVar15,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03515218:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

