// PEEIMHCMDND$$HMDLEPBJLNL @ RVA 0x3424604

PJKHAJKEHEL_o *
PEEIMHCMDND__HMDLEPBJLNL
          (PEEIMHCMDND_o *__this,SimpleJSON_JSONNode_o *GMDFNEFPFJH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  NLPJLHOEAOE_o *pNVar5;
  NLPJLHOEAOE_NNODIMKLNFM_o *pNVar6;
  KKEKJDLEJIL_o *__this_00;
  PJKHAJKEHEL_o *pPVar7;
  long *plVar8;
  long *plVar9;
  System_String_o *pSVar10;
  JMDPBFOCHHP_o *pJVar11;
  JMDPBFOCHHP_EJICJNOEGGE_o *__this_01;
  DOPEEDABNEK_o *__this_02;
  HOOAAGABMBL_o *pHVar12;
  HEFOANCOHDC_o *item;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_03;
  HOOAAGABMBL_o **ppHVar13;
  HEFOANCOHDC_array *pHVar14;
  int iVar15;
  FOKJBDHLIMG_o *__this_04;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar17;
  undefined1 auStack_f8 [72];
  SimpleJSON_JSONNode_Enumerator_Fields local_b0;
  
  if ((DAT_04568102 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&KKEKJDLEJIL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_10945);
    FUN_01bab630(&StringLiteral_3076);
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10946);
    FUN_01bab630(&StringLiteral_18062);
    FUN_01bab630(&StringLiteral_5245);
    FUN_01bab630(&StringLiteral_10239);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_7066);
    DAT_04568102 = 1;
  }
  local_b0.m_Array.fields._current = (SimpleJSON_JSONNode_o *)0x0;
  local_b0.m_Object.fields._getEnumeratorRetType = 0;
  local_b0.m_Object.fields._36_4_ = 0;
  local_b0.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b0.m_Array.fields._index = 0;
  local_b0.m_Array.fields._version = 0;
  local_b0.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0.type = 0;
  local_b0._4_4_ = 0;
  local_b0.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b0.m_Object.fields._version = 0;
  local_b0.m_Object.fields._index = 0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar5 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar5 != (NLPJLHOEAOE_o *)0x0) {
    pNVar6 = NLPJLHOEAOE__ADKMBOALAKN(pNVar5,StringLiteral_5245,(MethodInfo *)0x0);
    if (pNVar6 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
      return (PJKHAJKEHEL_o *)0x0;
    }
    __this_00 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo);
    KKEKJDLEJIL___ctor(__this_00,(MethodInfo *)0x0);
    pPVar7 = (pNVar6->fields).BAKIMFMMFMP;
    if (pPVar7 != (PJKHAJKEHEL_o *)0x0) {
      (*(pPVar7->klass->vtable)._8_KMKKECDCBEF.methodPtr)
                (pPVar7,__this_00,(pPVar7->klass->vtable)._8_KMKKECDCBEF.method);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar5 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (((pNVar5 != (NLPJLHOEAOE_o *)0x0) &&
          (pPVar7 = NLPJLHOEAOE__MDEGKNMDKPN
                              (pNVar5,(pNVar6->fields).AHDGNOJPPIB,(pNVar6->fields).BAKIMFMMFMP,
                               false,(MethodInfo *)0x0), GMDFNEFPFJH != (SimpleJSON_JSONNode_o *)0x0
          )) && (plVar8 = (long *)(*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                                            (GMDFNEFPFJH,StringLiteral_18062,
                                             (GMDFNEFPFJH->klass->vtable)._7_get_Item.method),
                plVar8 != (long *)0x0)) {
        iVar15 = 0;
        while (iVar4 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0)),
              iVar15 < iVar4) {
          plVar8 = (long *)(*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                                     (GMDFNEFPFJH,StringLiteral_18062,
                                      (GMDFNEFPFJH->klass->vtable)._7_get_Item.method);
          if (((plVar8 == (long *)0x0) ||
              (plVar8 = (long *)(**(code **)(*plVar8 + 0x188))
                                          (plVar8,iVar15,*(undefined8 *)(*plVar8 + 400)),
              plVar8 == (long *)0x0)) ||
             (plVar9 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                         (plVar8,StringLiteral_9327,*(undefined8 *)(*plVar8 + 0x1b0)
                                         ), plVar9 == (long *)0x0)) goto LAB_03524c88;
          pSVar10 = (System_String_o *)
                    (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
          plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                     (plVar8,StringLiteral_10239,*(undefined8 *)(*plVar8 + 0x1b0));
          if (plVar8 == (long *)0x0) goto LAB_03524c88;
          plVar8 = (long *)(**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0));
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
          }
          pJVar11 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (pJVar11 == (JMDPBFOCHHP_o *)0x0) goto LAB_03524c88;
          __this_01 = (pJVar11->fields)._LEIIIBPIJGJ_k__BackingField;
          if ((__this_01 == (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0) ||
             (bVar3 = JMDPBFOCHHP_EJICJNOEGGE__LLDDCNHNPIA(__this_01,pSVar10,(MethodInfo *)0x0),
             bVar3)) {
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
            __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if ((__this_02 == (DOPEEDABNEK_o *)0x0) ||
               (pHVar12 = DOPEEDABNEK__CKKIPBAIEMN(__this_02,pSVar10,(MethodInfo *)0x0),
               pHVar12 == (HOOAAGABMBL_o *)0x0)) goto LAB_03524c88;
            pHVar12 = (HOOAAGABMBL_o *)
                      (*(pHVar12->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                                (pHVar12,(pHVar12->klass->vtable)._7_FAOBHLCDKJI.method);
            if (pHVar12 == (HOOAAGABMBL_o *)0x0) {
              pSVar10 = System_String__Concat(StringLiteral_10946,pSVar10,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              goto LAB_03524b18;
            }
            if (plVar8 == (long *)0x0) goto LAB_03524c88;
            (**(code **)(*plVar8 + 0x318))(auStack_f8,plVar8,*(undefined8 *)(*plVar8 + 800));
            memcpy(&local_b0,auStack_f8,0x48);
            while (bVar3 = SimpleJSON_JSONNode_Enumerator__MoveNext
                                     ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,
                                      (MethodInfo *)0x0), bVar3) {
              SVar16 = SimpleJSON_JSONNode_Enumerator__get_Current
                                 ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,(MethodInfo *)0x0);
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_04 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
              if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
              }
              pSVar10 = SimpleJSON_JSONNode__op_Implicit(SVar16.fields.value,(MethodInfo *)0x0);
              if (__this_04 == (FOKJBDHLIMG_o *)0x0) goto LAB_03524c88;
              item = FOKJBDHLIMG__JMMDGEOBMOC(__this_04,pSVar10,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
              if (item != (HEFOANCOHDC_o *)0x0) {
                __this_03 = (pHVar12->fields)._GNJCCLBLPLO_k__BackingField;
                if (__this_03 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)
                goto LAB_03524c88;
                pHVar14 = (__this_03->fields)._items;
                (__this_03->fields)._version = (__this_03->fields)._version + 1;
                if (pHVar14 == (HEFOANCOHDC_array *)0x0) goto LAB_03524c88;
                uVar1 = (__this_03->fields)._size;
                if (uVar1 < (uint)pHVar14->max_length) {
                  (__this_03->fields)._size = uVar1 + 1;
                  pHVar14->m_Items[(int)uVar1] = item;
                  thunk_FUN_01c20e04(pHVar14->m_Items + (int)uVar1);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_03,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            bVar3 = System_String__op_Equality
                              ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_14870,
                               (MethodInfo *)0x0);
            if (bVar3) {
              ppHVar13 = &(__this_00->fields).PNAAPNFPCPI;
              if (__this_00 == (KKEKJDLEJIL_o *)0x0) goto LAB_03524c88;
LAB_03524bc0:
              *ppHVar13 = pHVar12;
              thunk_FUN_01c20e04(ppHVar13,pHVar12);
            }
            else {
              bVar3 = System_String__op_Equality
                                ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_3076,
                                 (MethodInfo *)0x0);
              ppHVar13 = &(__this_00->fields).PEMECEBIJDM;
              if ((((bVar3) ||
                   (bVar3 = System_String__op_Equality
                                      ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,
                                       StringLiteral_7066,(MethodInfo *)0x0),
                   ppHVar13 = &(__this_00->fields).IIDEPPHFJPA, bVar3)) ||
                  (bVar3 = System_String__op_Equality
                                     ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,
                                      StringLiteral_11017,(MethodInfo *)0x0),
                  ppHVar13 = &(__this_00->fields).NBHGHLIPCAP, bVar3)) ||
                 (bVar3 = System_String__op_Equality
                                    ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,
                                     StringLiteral_8772,(MethodInfo *)0x0),
                 ppHVar13 = &(__this_00->fields).AIDDHEHFBEG, bVar3)) {
                if (__this_00 != (KKEKJDLEJIL_o *)0x0) goto LAB_03524bc0;
                goto LAB_03524c88;
              }
            }
          }
          else {
            pSVar10 = StringLiteral_10945;
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pSVar10 = StringLiteral_10945;
            }
LAB_03524b18:
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
          }
          iVar15 = iVar15 + 1;
          plVar8 = (long *)(*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                                     (GMDFNEFPFJH,StringLiteral_18062,
                                      (GMDFNEFPFJH->klass->vtable)._7_get_Item.method);
          if (plVar8 == (long *)0x0) goto LAB_03524c88;
        }
        if (pPVar7 != (PJKHAJKEHEL_o *)0x0) {
          (*(pPVar7->klass->vtable)._6_BCEGONIKBAK.methodPtr)
                    (pPVar7,__this_00,(pPVar7->klass->vtable)._6_BCEGONIKBAK.method);
          PJKHAJKEHEL__OBDMCJAPKPJ(pPVar7,(MethodInfo *)0x0);
          (*(pPVar7->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                    (pPVar7,(pPVar7->klass->vtable)._7_LBNKPLKIIOP.method);
          PJKHAJKEHEL__NDBIFNGNKJF(pPVar7,(MethodInfo *)0x0);
          CVar17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                   CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                             (true,(MethodInfo *)0x0);
          (pPVar7->fields).HJPOJOPKEKI.fields = CVar17;
          CVar17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                   CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                             (false,(MethodInfo *)0x0);
          (pPVar7->fields).DHGNGIKCDON.fields = CVar17;
          (pPVar7->fields).BLJLIBHLGLI = false;
          return pPVar7;
        }
      }
    }
  }
LAB_03524c88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

