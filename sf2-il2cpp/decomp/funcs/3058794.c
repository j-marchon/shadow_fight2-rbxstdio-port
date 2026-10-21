// ACHLOMELAJE$$LMJFPPDAPBF @ RVA 0x3058794

void ACHLOMELAJE__LMJFPPDAPBF
               (ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,System_String_o *CJNHFNHJHPE,
               int32_t BFGGBPNAMBD,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  long lVar2;
  System_String_o *pSVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  System_Xml_XmlNode_o *pSVar5;
  long *plVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Xml_XmlElement_o *pSVar8;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar9;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  undefined8 uVar10;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)BFGGBPNAMBD;
  if ((DAT_04565ed0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Remove__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_set_Item__
                );
    FUN_01bab630(&MEMHEPBAJJA_HIAEDCDJJDJ_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10724);
    FUN_01bab630(&StringLiteral_15862);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_14752);
    FUN_01bab630(&StringLiteral_14750);
    FUN_01bab630(&StringLiteral_14754);
    DAT_04565ed0 = 1;
  }
  if (KGLJICLJHEL != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(KGLJICLJHEL,StringLiteral_15862,(MethodInfo *)0x0);
    if (bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_03158ba8;
      lVar2 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar10,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
      thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogWarningFormat(StringLiteral_14752,args,(MethodInfo *)0x0);
    }
    pSVar3 = System_String__Concat(StringLiteral_15862,KGLJICLJHEL,(MethodInfo *)0x0);
    pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(__this,pSVar3,BFGGBPNAMBD,method_00);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((BFGGBPNAMBD == 0) && (bVar1)) {
      if (pMVar4 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
        return;
      }
      pSVar5 = (pMVar4->fields).JHFENACKNPG;
      if ((pSVar5 != (System_Xml_XmlNode_o *)0x0) &&
         (plVar6 = (long *)(*(pSVar5->klass->vtable)._12_get_ParentNode.methodPtr)
                                     (pSVar5,(pSVar5->klass->vtable)._12_get_ParentNode.method),
         plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 0x2c8))
                  (plVar6,(pMVar4->fields).JHFENACKNPG,*(undefined8 *)(*plVar6 + 0x2d0));
      }
      pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).NMJCKHHGODA;
      if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Remove
                  (pSVar7,(Il2CppObject *)(pMVar4->fields).JIJLBFGKNJK,
                   Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Remove__
                  );
        return;
      }
    }
    else {
      if (pMVar4 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
        MEMHEPBAJJA_HIAEDCDJJDJ__KFMNMGGDHFD(pMVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
      if (BFGGBPNAMBD == 0) {
        pSVar5 = (__this->fields).super.HJKLIDCAEOE;
        if ((pSVar5 == (System_Xml_XmlNode_o *)0x0) ||
           ((pSVar8 = (System_Xml_XmlElement_o *)
                      (*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                                (pSVar5,StringLiteral_10724,
                                 (pSVar5->klass->vtable)._51_get_Item.method),
            pSVar8 == (System_Xml_XmlElement_o *)0x0 &&
            (pSVar8 = EIABCPKDEBD__BHPIHHJHELJ
                                ((__this->fields).super.HJKLIDCAEOE,StringLiteral_10724,
                                 (MethodInfo *)0x0), pSVar8 == (System_Xml_XmlElement_o *)0x0))))
        goto LAB_03158ba8;
        JHMENEKPIBO = (System_Xml_XmlElement_o *)
                      (*(pSVar8->klass->vtable)._51_get_Item.methodPtr)
                                (pSVar8,StringLiteral_14754,
                                 (pSVar8->klass->vtable)._51_get_Item.method);
        if (JHMENEKPIBO == (System_Xml_XmlElement_o *)0x0) {
          JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                                  ((System_Xml_XmlNode_o *)pSVar8,StringLiteral_14754,
                                   (MethodInfo *)0x0);
        }
        pSVar8 = EIABCPKDEBD__BHPIHHJHELJ
                           ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_14750,
                            (MethodInfo *)0x0);
        pSVar9 = EIABCPKDEBD__HBGAGFJBGKD
                           ((System_Xml_XmlNode_o *)pSVar8,StringLiteral_9327,(MethodInfo *)0x0);
        if (pSVar9 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_03158ba8;
        (*(pSVar9->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar9,KGLJICLJHEL,(pSVar9->klass->vtable)._10_set_Value.method);
        pSVar9 = EIABCPKDEBD__HBGAGFJBGKD
                           ((System_Xml_XmlNode_o *)pSVar8,StringLiteral_14694,(MethodInfo *)0x0);
        if (pSVar9 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_03158ba8;
        (*(pSVar9->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar9,CJNHFNHJHPE,(pSVar9->klass->vtable)._10_set_Value.method);
        pMVar4 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)thunk_FUN_01bda818(MEMHEPBAJJA_HIAEDCDJJDJ_TypeInfo);
        MEMHEPBAJJA_HIAEDCDJJDJ___ctor(pMVar4,(System_Xml_XmlNode_o *)pSVar8,(MethodInfo *)0x0);
        if (pMVar4 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) goto LAB_03158ba8;
        pSVar3 = System_String__Concat
                           (StringLiteral_15862,(pMVar4->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
        pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).NMJCKHHGODA;
      }
      else {
        pMVar4 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)thunk_FUN_01bda818(MEMHEPBAJJA_HIAEDCDJJDJ_TypeInfo);
        MEMHEPBAJJA_HIAEDCDJJDJ___ctor(pMVar4,KGLJICLJHEL,CJNHFNHJHPE,BFGGBPNAMBD,(MethodInfo *)0x0)
        ;
        if (pMVar4 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) goto LAB_03158ba8;
        pSVar3 = System_String__Concat
                           (StringLiteral_15862,(pMVar4->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
        if (BFGGBPNAMBD == 2) {
          __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
            Nekki_SF2_Core_Quests_QuestsManager__RegisterLocalVariable
                      (__this_00,pMVar4,pSVar3,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03158ba8;
        }
        if (BFGGBPNAMBD != 1) {
          return;
        }
        pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).MAIMKHHEANI;
      }
      if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (pSVar7,(Il2CppObject *)pSVar3,(Il2CppObject *)pMVar4,
                   Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_set_Item__
                  );
        return;
      }
    }
  }
LAB_03158ba8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

