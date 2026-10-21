// Nekki.SF2.GUI.Pvp.PvpScene$$EEGOPNGLBMJ @ RVA 0x321C0B4

void Nekki_SF2_GUI_Pvp_PvpScene__EEGOPNGLBMJ
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *__this_00;
  AFFHKININGD_o *__this_01;
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  PJKHAJKEHEL_o *pPVar5;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar6;
  Il2CppObject *pIVar7;
  ACHLOMELAJE_o *pAVar8;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  NDPMLPGANCI_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566f0c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_2279);
    FUN_01bab630(&StringLiteral_260);
    FUN_01bab630(&StringLiteral_3428);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8525);
    FUN_01bab630(&StringLiteral_2280);
    FUN_01bab630(&StringLiteral_9259);
    FUN_01bab630(&StringLiteral_10600);
    DAT_04566f0c = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    __this_01 = NLPJLHOEAOE__POGAPHAJGBC(__this_00,StringLiteral_10600,(MethodInfo *)0x0);
    if (__this_01 == (AFFHKININGD_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_3428,(MethodInfo *)0x0);
      return;
    }
    (__this_01->fields).JDNKKGPNHPB = 0x11;
    pSVar1 = Nekki_SF2_GUI_Pvp_PvpScene__MCFIGAFCFIO(__this,method_00);
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
      if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_9327,(MethodInfo *)0x0),
         pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar4 = (System_String_o *)
                 (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
        (__this_01->fields).LAFKEHDGGND = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
        if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_9259,(MethodInfo *)0x0),
           pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
          pSVar4 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
          (__this_01->fields).GLDHKALMIBD = pSVar4;
          thunk_FUN_01c20e04(&(__this_01->fields).GLDHKALMIBD);
          pSVar4 = System_String__Concat
                             (StringLiteral_8525,(__this_01->fields).LAFKEHDGGND,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
          AFFHKININGD__GMPJALMLLCG(__this_01,(MethodInfo *)0x0);
          AFFHKININGD__GFGALPDANIJ(__this_01,(MethodInfo *)0x0);
          pPVar5 = Nekki_SF2_GUI_Pvp_PvpScene__JHKGOBPPALJ
                             (__this,(__this->fields).IDPEJMKPFNA,1,in_x3);
          AFFHKININGD__CFFIDFOGCFK(__this_01,pPVar5,(MethodInfo *)0x0);
          pPVar5 = Nekki_SF2_GUI_Pvp_PvpScene__JHKGOBPPALJ
                             (__this,(__this->fields).JANJPDGLLNE,0,in_x3);
          AFFHKININGD__GIMGMADOEMF(__this_01,pPVar5,(MethodInfo *)0x0);
          pSVar6 = (__this_01->fields).NNHINPLPDHJ;
          if (pSVar6 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
            if ((pIVar7 != (Il2CppObject *)0x0) &&
               (pSVar6 = (__this_01->fields).NNHINPLPDHJ,
               pSVar6 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
              pSVar4 = pIVar7[0x18].monitor;
              pIVar7 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                  Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
              if ((pIVar7 != (Il2CppObject *)0x0) && (pIVar7[0xc].klass != (Il2CppClass *)0x0)) {
                pSVar4 = System_String__Concat
                                   (StringLiteral_2279,pSVar4,StringLiteral_260,
                                    (System_String_o *)((pIVar7[0xc].klass)->_1).namespaze,
                                    (MethodInfo *)0x0);
                UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                pSVar6 = (__this_01->fields).MECHOBPGHFJ;
                if (((pSVar6 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) &&
                    (pIVar7 = System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                         Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__
                                        ), pIVar7 != (Il2CppObject *)0x0)) &&
                   (pSVar6 = (__this_01->fields).MECHOBPGHFJ,
                   pSVar6 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
                  pSVar4 = pIVar7[0x18].monitor;
                  pIVar7 = System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                      Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__
                                     );
                  if ((pIVar7 != (Il2CppObject *)0x0) && (pIVar7[0xc].klass != (Il2CppClass *)0x0))
                  {
                    pSVar4 = System_String__Concat
                                       (StringLiteral_2280,pSVar4,StringLiteral_260,
                                        (System_String_o *)((pIVar7[0xc].klass)->_1).namespaze,
                                        (MethodInfo *)0x0);
                    UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
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
                    pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
                      CJNHFNHJHPE = ACHLOMELAJE__LHFJEODGOJL
                                              (pAVar8,(__this_01->fields).KOILJHHCIEE,
                                               (MethodInfo *)0x0);
                      AFFHKININGD__HKBKHKMMBFG(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
                      if (DAT_04565b7d == '\0') {
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                        DAT_04565b7d = '\x01';
                      }
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                      if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
                        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar8,false,(MethodInfo *)0x0);
                        __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                        if (__this_02 != (NDPMLPGANCI_o *)0x0) {
                          NDPMLPGANCI__EKPAFDJIAGI
                                    (__this_02,6,(Il2CppObject *)__this_01,
                                     (System_Action_object__o *)0x0,true,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

